#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KIJDCAAPBLM;
class PFGPEHMCHDK;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define OOJEJBIKDFK_AFDGDJFFHID_OFFSET UNITYSDK_OFFSET(0xBF823C0)
#define OOJEJBIKDFK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF83410)
#define OOJEJBIKDFK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xBF824D0)
#define OOJEJBIKDFK_EPHIFAKFGMB_OFFSET UNITYSDK_OFFSET(0xBF82FF0)
#define OOJEJBIKDFK_FFLMBFFEHLC_OFFSET UNITYSDK_OFFSET(0xBF829F0)
#define OOJEJBIKDFK_GEHANOABDLP_OFFSET UNITYSDK_OFFSET(0xBF82960)
#define OOJEJBIKDFK_GEHDFGKKFMD_OFFSET UNITYSDK_OFFSET(0xBF83110)
#define OOJEJBIKDFK_HKIAKHJMKGB_OFFSET UNITYSDK_OFFSET(0xBF82420)
#define OOJEJBIKDFK_HMNPNOIKFFH_OFFSET UNITYSDK_OFFSET(0xBF82470)
#define OOJEJBIKDFK_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0xBF832D0)
#define OOJEJBIKDFK_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0xBF83380)
#define OOJEJBIKDFK_ONSTART_OFFSET UNITYSDK_OFFSET(0xBF821F0)
#define OOJEJBIKDFK_ONSTOP_OFFSET UNITYSDK_OFFSET(0xBF82270)
#define OOJEJBIKDFK_PACFDCDKFGG_OFFSET UNITYSDK_OFFSET(0xBF831A0)
#define OOJEJBIKDFK_PGNHCAPLLGC_OFFSET UNITYSDK_OFFSET(0xBF82720)

inline static constexpr unsigned int OOJEJBIKDFK_TypeDefinitionIndex = 54189;

	class OOJEJBIKDFK
	{
	public:
		::UnityEngine::Transform* NJJIJJCGOIP; // 0x50
		::PFGPEHMCHDK* PGALAIJOICA; // 0x58
		::System::Boolean NDMHEFEGGNM; // 0x60
		::System::Boolean LKOFFBAHMDC; // 0x61
		::System::Boolean MFKFCJBNHEK; // 0x62
		::System::Byte _padding0[0x1];
		::System::Int32 JDKEKGODFLL; // 0x64
		::UnityEngine::Vector3 ALNOJHDMLCL; // 0x68
		::RPG::MVector3 AEOMKCMKEEK; // 0x74
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_CTOR_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_ONSTOP_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Boolean FFLMBFFEHLC(::System::Single a1, ::RPG::MVector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_FFLMBFFEHLC_OFFSET))(this, a1, a2);
		}

		::System::Void EPHIFAKFGMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_EPHIFAKFGMB_OFFSET))(this);
		}

		::System::Boolean AFDGDJFFHID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_AFDGDJFFHID_OFFSET))(this);
		}

		::System::Boolean PACFDCDKFGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_PACFDCDKFGG_OFFSET))(this);
		}

		::System::Void HKIAKHJMKGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_HKIAKHJMKGB_OFFSET))(this);
		}

		::System::Void PGNHCAPLLGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_PGNHCAPLLGC_OFFSET))(this);
		}

		::System::Void HMNPNOIKFFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_HMNPNOIKFFH_OFFSET))(this);
		}

		::System::Single GEHDFGKKFMD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_GEHDFGKKFMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void OnRefreshPos(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_ONREFRESHPOS_OFFSET))(this, a1);
		}

		::KIJDCAAPBLM* GEHANOABDLP()
		{
			return ((::KIJDCAAPBLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOJEJBIKDFK_GEHANOABDLP_OFFSET))(this);
		}

	};
