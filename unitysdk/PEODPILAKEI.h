#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define PEODPILAKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x14541790)
#define PEODPILAKEI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x145419E0)

inline static constexpr unsigned int PEODPILAKEI_TypeDefinitionIndex = 80030;

	class PEODPILAKEI : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* MHAEBFAEFCG; // 0x10
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + PEODPILAKEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEODPILAKEI_EXECUTE_OFFSET))(this);
		}

	};
