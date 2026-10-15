#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBNKFDBMHLA;

#define JBMEKJEAPLA_ONCOPAFEDLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC4A130)
#define JBMEKJEAPLA_ONCOPAFEDLB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC4A140)

inline static constexpr unsigned int JBMEKJEAPLA_ONCOPAFEDLB_TypeDefinitionIndex = 44099;

	class JBMEKJEAPLA_ONCOPAFEDLB : public ::System::Object
	{
	public:
		::EBNKFDBMHLA* KJMDDAHEODL; // 0x10
		::EBNKFDBMHLA* IOPFDILHFPN; // 0x18
		::System::Void _ctor(::EBNKFDBMHLA* a1, ::EBNKFDBMHLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EBNKFDBMHLA*, ::EBNKFDBMHLA*))((::PBYTE)hIl2Cpp + JBMEKJEAPLA_ONCOPAFEDLB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMEKJEAPLA_ONCOPAFEDLB_DISPOSE_OFFSET))(this);
		}

	};
