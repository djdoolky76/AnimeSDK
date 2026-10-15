#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOGBNBGMIHF.h"
class CLFIGBPHLHI;
class HFOOAEGGEFH;
class MOGBNBGMIHF;
namespace UnityEngine { class Transform; }

#define HFOOAEGGEFH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15C8D1E0)
#define HFOOAEGGEFH_CLONE_OFFSET UNITYSDK_OFFSET(0x15C8D920)
#define HFOOAEGGEFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C8D2F0)
#define HFOOAEGGEFH_EJLDDHIMBEM_OFFSET UNITYSDK_OFFSET(0x15C8D310)
#define HFOOAEGGEFH_ISDONE_OFFSET UNITYSDK_OFFSET(0x15C8D8E0)
#define HFOOAEGGEFH_REVERSE_OFFSET UNITYSDK_OFFSET(0x15C8DA40)
#define HFOOAEGGEFH_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x15C8D3A0)
#define HFOOAEGGEFH_STEP_OFFSET UNITYSDK_OFFSET(0x15C8D490)

inline static constexpr unsigned int HFOOAEGGEFH_TypeDefinitionIndex = 73523;

	class HFOOAEGGEFH : public ::MOGBNBGMIHF
	{
	public:
		::MOGBNBGMIHF* GKMOAFJIKEA; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_CTOR_OFFSET))(this);
		}

		static ::HFOOAEGGEFH* BPLPBPMEODA(::MOGBNBGMIHF* a1)
		{
			return ((::HFOOAEGGEFH*(*)(::MOGBNBGMIHF*))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean EJLDDHIMBEM(::MOGBNBGMIHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOGBNBGMIHF*))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_EJLDDHIMBEM_OFFSET))(this, a1);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_STEP_OFFSET))(this, a1);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_ISDONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFOOAEGGEFH_REVERSE_OFFSET))(this);
		}

	};
