#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
class MJAOHLLPLGK;
namespace Entitas { template <typename T> class IGroup_1; }

#define FNFEBBMKKNM_CTOR_OFFSET UNITYSDK_OFFSET(0x167E0500)
#define FNFEBBMKKNM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x167E07E0)

inline static constexpr unsigned int FNFEBBMKKNM_TypeDefinitionIndex = 80024;

	class FNFEBBMKKNM : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::LPHINGPIEAJ*>* MHAEBFAEFCG; // 0x18
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + FNFEBBMKKNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFEBBMKKNM_EXECUTE_OFFSET))(this);
		}

	};
