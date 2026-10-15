#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define HMJMIDPMBJD_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x15D78D70)
#define HMJMIDPMBJD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x15D78CB0)
#define HMJMIDPMBJD_CTOR_OFFSET UNITYSDK_OFFSET(0x15D78F20)
#define HMJMIDPMBJD_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15D78DC0)
#define HMJMIDPMBJD_PBDNAIDEIPK_OFFSET UNITYSDK_OFFSET(0x15D78E20)

inline static constexpr unsigned int HMJMIDPMBJD_TypeDefinitionIndex = 77954;

	class HMJMIDPMBJD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJMIDPMBJD_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + HMJMIDPMBJD_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::OMNJCDDMLHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + HMJMIDPMBJD_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1, ::OMNJCDDMLHI* a2, ::LMFOOOLDECA* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + HMJMIDPMBJD_JLANKNHFKCN_OFFSET))(this, a1, a2, a3);
		}

		::KMMMFMMGLAN* PBDNAIDEIPK(::OMNJCDDMLHI* a1)
		{
			return ((::KMMMFMMGLAN*(*)(::PVOID, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + HMJMIDPMBJD_PBDNAIDEIPK_OFFSET))(this, a1);
		}

	};
