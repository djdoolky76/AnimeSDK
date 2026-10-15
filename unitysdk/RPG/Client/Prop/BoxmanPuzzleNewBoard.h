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

#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_AIBAAANNDJG_OFFSET UNITYSDK_OFFSET(0xDC2F100)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_APECGAKCCGE_OFFSET UNITYSDK_OFFSET(0xDC2D090)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_BKCPMPMKLFI_OFFSET UNITYSDK_OFFSET(0xDC2E6B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCGJOCAIJAC_OFFSET UNITYSDK_OFFSET(0xDC2ED40)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC301C0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDC300B0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DBCDDELBHNH_OFFSET UNITYSDK_OFFSET(0xDC2E380)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DESTROYINTERACTTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xDC2CED0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDC2FE00)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITITEMS_OFFSET UNITYSDK_OFFSET(0xDC2B420)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_INITOPTIONS_OFFSET UNITYSDK_OFFSET(0xDC2CC50)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xDC2B3D0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_JJLGKGLFOCI_OFFSET UNITYSDK_OFFSET(0xDC2EC90)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_KCADAIOKBBK_OFFSET UNITYSDK_OFFSET(0xDC2EBD0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MDOHBJFJJIC_OFFSET UNITYSDK_OFFSET(0xDC2E500)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MGJLINFADJK_OFFSET UNITYSDK_OFFSET(0xDC2EE60)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MHBFJCBHDBN_OFFSET UNITYSDK_OFFSET(0xDC2E630)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_MJCLAPOEEPB_OFFSET UNITYSDK_OFFSET(0xDC2CE50)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_OLKIACHPJED_OFFSET UNITYSDK_OFFSET(0xDC2E5A0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONINTERACTTARGETFINISH_OFFSET UNITYSDK_OFFSET(0xDC2F290)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_ONITEMMOVEFINISH_OFFSET UNITYSDK_OFFSET(0xDC2F240)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RECOVERFROMPUZZLESTATE_OFFSET UNITYSDK_OFFSET(0xDC2C5E0)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xDC2F380)
#define RPG_CLIENT_PROP_BOXMANPUZZLENEWBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC2D2B0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleNewBoard_TypeDefinitionIndex = 78852;

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
			return (::System::Single*)UnitySDK::FromName("RPG.Client.Prop", "BoxmanPuzzleNewBoard")->GetStaticField(0xABC0);
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
