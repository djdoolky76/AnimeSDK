#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KIJDCAAPBLM;
class PFGPEHMCHDK;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define OOJEJBIKDFK_AFDGDJFFHID_OFFSET UNITYSDK_OFFSET(0x196A95C0)
#define OOJEJBIKDFK_CTOR_OFFSET UNITYSDK_OFFSET(0x196AA610)
#define OOJEJBIKDFK_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x196A96D0)
#define OOJEJBIKDFK_EPHIFAKFGMB_OFFSET UNITYSDK_OFFSET(0x196AA1F0)
#define OOJEJBIKDFK_FFLMBFFEHLC_OFFSET UNITYSDK_OFFSET(0x196A9BF0)
#define OOJEJBIKDFK_GEHANOABDLP_OFFSET UNITYSDK_OFFSET(0x196A9B60)
#define OOJEJBIKDFK_GEHDFGKKFMD_OFFSET UNITYSDK_OFFSET(0x196AA310)
#define OOJEJBIKDFK_HKIAKHJMKGB_OFFSET UNITYSDK_OFFSET(0x196A9620)
#define OOJEJBIKDFK_HMNPNOIKFFH_OFFSET UNITYSDK_OFFSET(0x196A9670)
#define OOJEJBIKDFK_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x196AA4D0)
#define OOJEJBIKDFK_ONREFRESHPOS_OFFSET UNITYSDK_OFFSET(0x196AA580)
#define OOJEJBIKDFK_ONSTART_OFFSET UNITYSDK_OFFSET(0x196A93F0)
#define OOJEJBIKDFK_ONSTOP_OFFSET UNITYSDK_OFFSET(0x196A9470)
#define OOJEJBIKDFK_PACFDCDKFGG_OFFSET UNITYSDK_OFFSET(0x196AA3A0)
#define OOJEJBIKDFK_PGNHCAPLLGC_OFFSET UNITYSDK_OFFSET(0x196A9920)

inline static constexpr unsigned int OOJEJBIKDFK_TypeDefinitionIndex = 55353;

	class OOJEJBIKDFK
	{
	public:
		::UnityEngine::Transform* NJJIJJCGOIP; // 0x50
		::PFGPEHMCHDK* PGALAIJOICA; // 0x58
		::RPG::MVector3 AEOMKCMKEEK; // 0x60
		::System::Boolean NDMHEFEGGNM; // 0x6C
		::System::Boolean LKOFFBAHMDC; // 0x6D
		::System::Boolean MFKFCJBNHEK; // 0x6E
		::System::Byte _padding0[0x1];
		::System::Int32 JDKEKGODFLL; // 0x70
		::UnityEngine::Vector3 ALNOJHDMLCL; // 0x74
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
