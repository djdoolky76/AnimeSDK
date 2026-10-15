#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
class ADBBGCGAFNM;
class CLFIGBPHLHI;
class KNBEDHIFIEE;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ADBBGCGAFNM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB133E80)
#define ADBBGCGAFNM_CLONE_OFFSET UNITYSDK_OFFSET(0xB134060)
#define ADBBGCGAFNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB133E50)
#define ADBBGCGAFNM_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xB134140)
#define ADBBGCGAFNM_REVERSE_OFFSET UNITYSDK_OFFSET(0xB1340D0)
#define ADBBGCGAFNM_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xB134010)

	class ADBBGCGAFNM : public ::GHJDEAEBHGA
	{
	public:
		::System::Single EFFNFPCDHPK; // 0x48
		::System::Single ENFGAHLILFE; // 0x4C
		::System::Single BBEKOMAJFID; // 0x50
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_CTOR_OFFSET))(this, a1, a2);
		}

		static ::ADBBGCGAFNM* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::ADBBGCGAFNM*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + ADBBGCGAFNM_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

	};
