#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/RPG/Client/Prop/BoxmanPuzzleBoard.h"
class ENLNFBCDEIO;
namespace RPG::Client::Prop { class BoxmanPuzzleItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_AIBAAANNDJG_OFFSET UNITYSDK_OFFSET(0xDC38780)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_APECGAKCCGE_OFFSET UNITYSDK_OFFSET(0xDC36710)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xDC37D30)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCGJOCAIJAC_OFFSET UNITYSDK_OFFSET(0xDC383C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC39840)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC39730)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DBCDDELBHNH_OFFSET UNITYSDK_OFFSET(0xDC37A00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xDC36550)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC39480)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDC34AA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDC362D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC34A50)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_JJLGKGLFOCI_OFFSET UNITYSDK_OFFSET(0xDC38310)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_KCADAIOKBBK_OFFSET UNITYSDK_OFFSET(0xDC38250)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MDOHBJFJJIC_OFFSET UNITYSDK_OFFSET(0xDC37B80)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xDC384E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MHBFJCBHDBN_OFFSET UNITYSDK_OFFSET(0xDC37CB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MJCLAPOEEPB_OFFSET UNITYSDK_OFFSET(0xDC364D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_OLKIACHPJED_OFFSET UNITYSDK_OFFSET(0xDC37C20)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET UNITYSDK_OFFSET(0xDC38910)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDC388C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDC35C60)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC38A00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC36930)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleNewBoard_TypeDefinitionIndex = 78853;

	class BoxmanPuzzleNewBoard : public ::RPG::Client::Prop::BoxmanPuzzleBoard
	{
	public:
		::RPG::GameCore::OptionTriggerInfo* IPIFNLGBCMM; // 0x130
		::RPG::GameCore::OptionTriggerInfo* NKEDNHLCLHA; // 0x138
		::RPG::GameCore::OptionTriggerInfo* IMPANMICGEB; // 0x140
		::RPG::GameCore::OptionTriggerInfo* OAKLODDAOLC; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::GameCore::GameEntity*>* LLIKCNBDKCB; // 0x150
		static ::System::Single* StaticGet_FIEKDOEEMCP()
		{
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleNewBoard")->GetStaticField(0x112C0);
		}

		// static const ::System::String* FDMBKAAFMPE; // 0x0
		// static const ::System::String* GICCJAELDIF; // 0x0
		// static const ::System::String* IDGNMCLLEBD; // 0x0
		// static const ::System::String* DLNNPLNNHFH; // 0x0
		// static const ::System::String* IMBJONJMDDN; // 0x0
		// static const ::System::String* OKPKKCFBGKL; // 0x0
		// static const ::System::String* NGPADFEIBCA; // 0x0
		// static const ::System::String* CBEMLDBFOGP; // 0x0
		// static const ::System::String* CJDIFCBFIAB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCTOR_OFFSET))();
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void InitItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET))(this);
		}

		::System::Void RecoverFromPuzzleState(::ENLNFBCDEIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENLNFBCDEIO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET))(this, a1);
		}

		::System::Void InitOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET))(this);
		}

		::System::UInt32 MJCLAPOEEPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MJCLAPOEEPB_OFFSET))(this);
		}

		::System::Void DestroyInteractTargetEntity(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET))(this, a1);
		}

		::RPG::GameCore::OptionTriggerInfo* APECGAKCCGE(::RPG::Client::Prop::BoxmanPuzzleItem* a1, ::RPG::Client::Prop::BoxmanDir a2)
		{
			return ((::RPG::GameCore::OptionTriggerInfo*(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*, ::RPG::Client::Prop::BoxmanDir))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_APECGAKCCGE_OFFSET))(this, a1, a2);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void BKCPMPMKLFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_BKCPMPMKLFI_OFFSET))(this, a1);
		}

		::System::Void MDOHBJFJJIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MDOHBJFJJIC_OFFSET))(this);
		}

		::System::Void OLKIACHPJED()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_OLKIACHPJED_OFFSET))(this);
		}

		::System::Boolean KCADAIOKBBK(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_KCADAIOKBBK_OFFSET))(this, a1);
		}

		::System::Boolean JJLGKGLFOCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_JJLGKGLFOCI_OFFSET))(this);
		}

		::System::Int32 CCGJOCAIJAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCGJOCAIJAC_OFFSET))(this);
		}

		::System::Boolean DBCDDELBHNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DBCDDELBHNH_OFFSET))(this);
		}

		::System::Void MGJLINFADJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MGJLINFADJK_OFFSET))(this);
		}

		::System::Void AIBAAANNDJG(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_AIBAAANNDJG_OFFSET))(this, a1);
		}

		::System::Void MHBFJCBHDBN(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MHBFJCBHDBN_OFFSET))(this, a1);
		}

		::System::Void OnItemMoveFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET))(this, a1);
		}

		::System::Void OnInteractTargetFinish(::RPG::Client::Prop::BoxmanPuzzleItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::BoxmanPuzzleItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET))(this, a1);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET))(this);
		}

	};
}
