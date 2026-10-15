#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/RPG/GameCore/BattleModelResultType.h"
#include "unitysdk/System/Object.h"
class FDNCLPGAKOA;
class HBFNLNPLILA;
namespace System { class Action; }
namespace System { class Object; }

#define ADGFFEDNPPO_BIHHPNJGMEC_OFFSET UNITYSDK_OFFSET(0xB1389C0)
#define ADGFFEDNPPO_CKDHEJALCFC_OFFSET UNITYSDK_OFFSET(0xB137CA0)
#define ADGFFEDNPPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB138A20)
#define ADGFFEDNPPO_DDKKJAPNADK_OFFSET UNITYSDK_OFFSET(0xB138570)
#define ADGFFEDNPPO_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xB138970)
#define ADGFFEDNPPO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB138050)
#define ADGFFEDNPPO_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB137F40)
#define ADGFFEDNPPO_IHCHFLIKKCB_OFFSET UNITYSDK_OFFSET(0xB1389B0)
#define ADGFFEDNPPO_JIJCKKPGMPO_OFFSET UNITYSDK_OFFSET(0xB138270)
#define ADGFFEDNPPO_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB137D10)
#define ADGFFEDNPPO_KMEPEKPAPPC_OFFSET UNITYSDK_OFFSET(0xB137AE0)
#define ADGFFEDNPPO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB137BA0)
#define ADGFFEDNPPO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB138910)
#define ADGFFEDNPPO_MIFHOLNLDKA_OFFSET UNITYSDK_OFFSET(0xB1389A0)
#define ADGFFEDNPPO_MKHHAPKJGMA_OFFSET UNITYSDK_OFFSET(0xB138610)
#define ADGFFEDNPPO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB138160)
#define ADGFFEDNPPO_OEKHKEFOPJO_OFFSET UNITYSDK_OFFSET(0xB138990)
#define ADGFFEDNPPO_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB138870)
#define ADGFFEDNPPO_ONINIT_OFFSET UNITYSDK_OFFSET(0xB1386F0)
#define ADGFFEDNPPO_ONLOAD_OFFSET UNITYSDK_OFFSET(0xB138770)
#define ADGFFEDNPPO_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xB1386B0)
#define ADGFFEDNPPO_ONSTART_OFFSET UNITYSDK_OFFSET(0xB1387F0)
#define ADGFFEDNPPO_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB138830)
#define ADGFFEDNPPO_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB138730)
#define ADGFFEDNPPO_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xB1387B0)
#define ADGFFEDNPPO_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xB137E30)
#define ADGFFEDNPPO_SET_VIEW_OFFSET UNITYSDK_OFFSET(0xB138980)
#define ADGFFEDNPPO_TICK_OFFSET UNITYSDK_OFFSET(0xB1388B0)

inline static constexpr unsigned int ADGFFEDNPPO_TypeDefinitionIndex = 53708;

	class ADGFFEDNPPO : public ::System::Object
	{
	public:
		::FDNCLPGAKOA* GLGOKPCDEEA; // 0x10
		::System::Action* NPGDAPBIDCG; // 0x18
		::HBFNLNPLILA* _View_k__BackingField; // 0x20
		::System::Object* MMHPIKHEFCI; // 0x28
		::RPG::GameCore::BattleModeState CBFKJIDIGKG; // 0x30
		::RPG::GameCore::BattleModeState COLPFNIHPLM; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_CTOR_OFFSET))(this);
		}

		::System::Void KMEPEKPAPPC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_KMEPEKPAPPC_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void HKEPJLDBGIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_HKEPJLDBGIG_OFFSET))(this);
		}

		::System::Void PEECNCABGFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_PEECNCABGFD_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JIJCKKPGMPO(::FDNCLPGAKOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDNCLPGAKOA*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_JIJCKKPGMPO_OFFSET))(this, a1);
		}

		::System::Void DDKKJAPNADK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_DDKKJAPNADK_OFFSET))(this, a1);
		}

		::System::Void MKHHAPKJGMA(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_MKHHAPKJGMA_OFFSET))(this, a1);
		}

		::System::Void OnPreInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONPREINIT_OFFSET))(this);
		}

		::System::Void OnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONINIT_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONLOAD_OFFSET))(this);
		}

		::System::Void OnUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONUNLOAD_OFFSET))(this);
		}

		::System::Void OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONSTART_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONSTOP_OFFSET))(this);
		}

		::System::Void OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_ONFINISH_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void CKDHEJALCFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_CKDHEJALCFC_OFFSET))(this);
		}

		::HBFNLNPLILA* get_View()
		{
			return ((::HBFNLNPLILA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_GET_VIEW_OFFSET))(this);
		}

		::System::Void set_View(::HBFNLNPLILA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBFNLNPLILA*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_SET_VIEW_OFFSET))(this, a1);
		}

		::RPG::GameCore::BattleModeState OEKHKEFOPJO()
		{
			return ((::RPG::GameCore::BattleModeState(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_OEKHKEFOPJO_OFFSET))(this);
		}

		::System::Object* MIFHOLNLDKA()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_MIFHOLNLDKA_OFFSET))(this);
		}

		::FDNCLPGAKOA* IHCHFLIKKCB()
		{
			return ((::FDNCLPGAKOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_IHCHFLIKKCB_OFFSET))(this);
		}

		::RPG::GameCore::BattleModelResultType BIHHPNJGMEC()
		{
			return ((::RPG::GameCore::BattleModelResultType(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_BIHHPNJGMEC_OFFSET))(this);
		}

	};
