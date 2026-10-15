#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHJDEAEBHGA.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
class CLFIGBPHLHI;
class KNBEDHIFIEE;
class OEJAFNLEOOA;
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define OEJAFNLEOOA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE2FDE0)
#define OEJAFNLEOOA_CLONE_OFFSET UNITYSDK_OFFSET(0xBE30110)
#define OEJAFNLEOOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2FDB0)
#define OEJAFNLEOOA_EPPBMFBIDOF_OFFSET UNITYSDK_OFFSET(0xBE30300)
#define OEJAFNLEOOA_KFPIIOKMALE_OFFSET UNITYSDK_OFFSET(0xBE30250)
#define OEJAFNLEOOA_NDPIBCMCJCM_OFFSET UNITYSDK_OFFSET(0xBE30010)
#define OEJAFNLEOOA_REVERSE_OFFSET UNITYSDK_OFFSET(0xBE301B0)
#define OEJAFNLEOOA_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBE300C0)

	class OEJAFNLEOOA : public ::GHJDEAEBHGA
	{
	public:
		::System::Single FCOFOCHPILE; // 0x48
		::UnityEngine::Color LDECBLDNGIL; // 0x4C
		::System::Int32 GLBHKBAPJFP; // 0x5C
		::System::Single LEECBGEAFAI; // 0x60
		::UnityEngine::Color POMBEDOEPML; // 0x64
		::System::Single CGAMANONFLD; // 0x74
		::System::Void _ctor(::KNBEDHIFIEE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::KNBEDHIFIEE*, ::System::UInt32))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::OEJAFNLEOOA* BPLPBPMEODA(::KNBEDHIFIEE* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::UnityEngine::Color a7, ::UnityEngine::Color a8, ::System::Int32 a9)
		{
			return ((::OEJAFNLEOOA*(*)(::KNBEDHIFIEE*, ::System::UInt32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Color, ::UnityEngine::Color, ::System::Int32))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean NDPIBCMCJCM(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_NDPIBCMCJCM_OFFSET))(this, a1, a2);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_REVERSE_OFFSET))(this);
		}

		::System::Void KFPIIOKMALE(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_KFPIIOKMALE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Color32 EPPBMFBIDOF(::System::Single a1)
		{
			return ((::UnityEngine::Color32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEJAFNLEOOA_EPPBMFBIDOF_OFFSET))(this, a1);
		}

	};
