#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ScreenTransferActionState.h"
#include "unitysdk/RPG/GameCore/ScreenTransferReason.h"
class GELIALJDFBL;
class KNKPLOGICFO;
class PBINPBOFJCD;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayFullScreenTransfer; }
namespace RPG::GameCore { class ScreenTransferBaseAction; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPGEKOILFAL_ABCMNBHIAKM_OFFSET UNITYSDK_OFFSET(0xC3854A0)
#define PPGEKOILFAL_AICDCDPJKGP_OFFSET UNITYSDK_OFFSET(0xC3830E0)
#define PPGEKOILFAL_BFEGCFFEKCD_OFFSET UNITYSDK_OFFSET(0xC383270)
#define PPGEKOILFAL_BIGOFBGEGIB_OFFSET UNITYSDK_OFFSET(0xC3850D0)
#define PPGEKOILFAL_BMIHEGFLGNH_OFFSET UNITYSDK_OFFSET(0xC384790)
#define PPGEKOILFAL_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0xC3820E0)
#define PPGEKOILFAL_CCIBHCHLLCN_OFFSET UNITYSDK_OFFSET(0xC3846D0)
#define PPGEKOILFAL_CMJBGFFMPDH_OFFSET UNITYSDK_OFFSET(0xC382350)
#define PPGEKOILFAL_CTOR_OFFSET UNITYSDK_OFFSET(0xC381F50)
#define PPGEKOILFAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC382520)
#define PPGEKOILFAL_EIHJAHNCDEM_OFFSET UNITYSDK_OFFSET(0xC385260)
#define PPGEKOILFAL_FJAPOADMMFE_OFFSET UNITYSDK_OFFSET(0xC383CA0)
#define PPGEKOILFAL_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xC3827C0)
#define PPGEKOILFAL_GFBGFBMMKDG_OFFSET UNITYSDK_OFFSET(0xC383030)
#define PPGEKOILFAL_GPBBDHPJMKD_OFFSET UNITYSDK_OFFSET(0xC384DD0)
#define PPGEKOILFAL_HKGCEMEDAHL_OFFSET UNITYSDK_OFFSET(0xC382060)
#define PPGEKOILFAL_IIIFCOHCFIP_OFFSET UNITYSDK_OFFSET(0xC3833A0)
#define PPGEKOILFAL_IJMONDLGAIP_OFFSET UNITYSDK_OFFSET(0xC3849A0)
#define PPGEKOILFAL_KEMLPODAFMF_OFFSET UNITYSDK_OFFSET(0xC382280)
#define PPGEKOILFAL_LHJBNDGFJHD_OFFSET UNITYSDK_OFFSET(0xC384060)
#define PPGEKOILFAL_NNMCOGNKNMH_OFFSET UNITYSDK_OFFSET(0xC383D30)
#define PPGEKOILFAL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0xC383400)
#define PPGEKOILFAL_ONSKIP_OFFSET UNITYSDK_OFFSET(0xC3827D0)
#define PPGEKOILFAL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC383730)
#define PPGEKOILFAL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC382760)
#define PPGEKOILFAL_PIBCMNAFAME_OFFSET UNITYSDK_OFFSET(0xC382570)
#define PPGEKOILFAL_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0xC3836E0)
#define PPGEKOILFAL_TICK_OFFSET UNITYSDK_OFFSET(0xC383600)
#define PPGEKOILFAL__ONTASKBEGIN_B__11_0_OFFSET UNITYSDK_OFFSET(0xC385650)
#define PPGEKOILFAL___ONSCREENTRANSFERTEXTEND_B__15_0_OFFSET UNITYSDK_OFFSET(0xC3857C0)
#define PPGEKOILFAL___PROMISEKEEPTIMEOUT_B__19_0_OFFSET UNITYSDK_OFFSET(0xC385820)

	class PPGEKOILFAL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayFullScreenTransfer* OFKGLJOAMLD; // 0x18
		::RPG::Client::Promises::Promise* MDIGLAGDEDM; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KNKPLOGICFO* PCOMMLHHNOA; // 0x30
		::System::Exception* LMLAIDOEMCK; // 0x38
		::RPG::Client::Promises::Promise* BGKEPMJFAIK; // 0x40
		::RPG::Client::Promises::Promise* BBECMOPMKHK; // 0x48
		::RPG::Client::Promises::Promise* JIACFFCJACB; // 0x50
		::System::Collections::Generic::List_1<::PBINPBOFJCD*>* JHJOELGJNIA; // 0x58
		::RPG::Client::Promises::Promise* PDDACOMPKNI; // 0x60
		::GELIALJDFBL* CJHJNLGOJLA; // 0x68
		::System::UInt32 ENFEOOMNNJN; // 0x70
		::RPG::GameCore::ScreenTransferActionState LFGGBEKCIAH; // 0x74
		::RPG::GameCore::ScreenTransferReason FBPGLJAFBHF; // 0x78
		::System::Boolean BKDIOGMOHAG; // 0x7C
		::System::Boolean OGCIFIFIAEP; // 0x7D
		::System::Boolean PMNBLDFOJJO; // 0x7E
		::System::Byte _padding0[0x1];
		::System::Int32 GAHGABBBDFF; // 0x80
		// static const ::System::String* PFGNCCCMBMI; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayFullScreenTransfer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayFullScreenTransfer*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_DISPOSE_OFFSET))(this);
		}

		::System::Void CMJBGFFMPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_CMJBGFFMPDH_OFFSET))(this);
		}

		::System::Void PIBCMNAFAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_PIBCMNAFAME_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPGEKOILFAL_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPGEKOILFAL_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ScreenTransferReason HKGCEMEDAHL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::ScreenTransferReason(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_HKGCEMEDAHL_OFFSET))(this, a1);
		}

		::System::Void CCIBHCHLLCN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_CCIBHCHLLCN_OFFSET))(this, a1);
		}

		::System::Void BMIHEGFLGNH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_BMIHEGFLGNH_OFFSET))(this, a1);
		}

		::System::Void IJMONDLGAIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_IJMONDLGAIP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* NNMCOGNKNMH()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_NNMCOGNKNMH_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GPBBDHPJMKD()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_GPBBDHPJMKD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* AICDCDPJKGP()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_AICDCDPJKGP_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* BFEGCFFEKCD()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_BFEGCFFEKCD_OFFSET))(this);
		}

		::System::Boolean FJAPOADMMFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_FJAPOADMMFE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* GFBGFBMMKDG()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_GFBGFBMMKDG_OFFSET))(this);
		}

		::System::Boolean BIGOFBGEGIB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL_BIGOFBGEGIB_OFFSET))(this);
		}

		::System::Void LHJBNDGFJHD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPGEKOILFAL_LHJBNDGFJHD_OFFSET))(this, a1);
		}

		::PBINPBOFJCD* EIHJAHNCDEM(::RPG::GameCore::ScreenTransferBaseAction* a1)
		{
			return ((::PBINPBOFJCD*(*)(::PVOID, ::RPG::GameCore::ScreenTransferBaseAction*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_EIHJAHNCDEM_OFFSET))(this, a1);
		}

		::System::Void KEMLPODAFMF(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_KEMLPODAFMF_OFFSET))(this, a1);
		}

		::System::Void IIIFCOHCFIP(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_IIIFCOHCFIP_OFFSET))(this, a1);
		}

		::System::Void ABCMNBHIAKM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PPGEKOILFAL_ABCMNBHIAKM_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _OnTaskBegin_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL__ONTASKBEGIN_B__11_0_OFFSET))(this);
		}

		::System::Void __OnScreenTransferTextEnd_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL___ONSCREENTRANSFERTEXTEND_B__15_0_OFFSET))(this);
		}

		::System::Void __PromiseKeepTimeout_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGEKOILFAL___PROMISEKEEPTIMEOUT_B__19_0_OFFSET))(this);
		}

	};
