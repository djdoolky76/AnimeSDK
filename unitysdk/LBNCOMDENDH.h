#pragma once
#include "unitysdk/unitysdk.h"
class LOIFHOHCBMH;

#define LBNCOMDENDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB8E10)
#define LBNCOMDENDH_IKLGLKAMCBI_OFFSET UNITYSDK_OFFSET(0x1DAB8BD0)
#define LBNCOMDENDH_ILABCLOBBPJ_OFFSET UNITYSDK_OFFSET(0x1DAB8AF0)
#define LBNCOMDENDH_OFMPHGGOLAB_OFFSET UNITYSDK_OFFSET(0x1DAB8BF0)

inline static constexpr unsigned int LBNCOMDENDH_TypeDefinitionIndex = 43611;

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
