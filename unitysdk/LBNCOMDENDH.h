#pragma once
#include "unitysdk/unitysdk.h"
class LOIFHOHCBMH;

#define LBNCOMDENDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DE780)
#define LBNCOMDENDH_IKLGLKAMCBI_OFFSET UNITYSDK_OFFSET(0x1C8DE6A0)
#define LBNCOMDENDH_ILABCLOBBPJ_OFFSET UNITYSDK_OFFSET(0x1C8DE5C0)
#define LBNCOMDENDH_OFMPHGGOLAB_OFFSET UNITYSDK_OFFSET(0x1C8DE6C0)

inline static constexpr unsigned int LBNCOMDENDH_TypeDefinitionIndex = 42632;

	class LBNCOMDENDH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCOMDENDH_CTOR_OFFSET))(this);
		}

		::LOIFHOHCBMH* ILABCLOBBPJ()
		{
			return ((::LOIFHOHCBMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCOMDENDH_ILABCLOBBPJ_OFFSET))(this);
		}

		::System::Boolean IKLGLKAMCBI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNCOMDENDH_IKLGLKAMCBI_OFFSET))(this);
		}

		::System::Void OFMPHGGOLAB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBNCOMDENDH_OFMPHGGOLAB_OFFSET))(this, a1);
		}

	};
