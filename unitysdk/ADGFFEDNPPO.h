#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/RPG/GameCore/BattleModelResultType.h"
#include "unitysdk/System/Object.h"
class FDNCLPGAKOA;
class HBFNLNPLILA;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define ADGFFEDNPPO_BIHHPNJGMEC_OFFSET UNITYSDK_OFFSET(0xB79FCF0)
#define ADGFFEDNPPO_CKDHEJALCFC_OFFSET UNITYSDK_OFFSET(0xB79EFD0)
#define ADGFFEDNPPO_CTOR_OFFSET UNITYSDK_OFFSET(0xB79FD50)
#define ADGFFEDNPPO_DDKKJAPNADK_OFFSET UNITYSDK_OFFSET(0xB79F8A0)
#define ADGFFEDNPPO_GET_VIEW_OFFSET UNITYSDK_OFFSET(0xB79FCA0)
#define ADGFFEDNPPO_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB79F380)
#define ADGFFEDNPPO_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB79F270)
#define ADGFFEDNPPO_IHCHFLIKKCB_OFFSET UNITYSDK_OFFSET(0xB79FCE0)
#define ADGFFEDNPPO_JIJCKKPGMPO_OFFSET UNITYSDK_OFFSET(0xB79F5A0)
#define ADGFFEDNPPO_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB79F040)
#define ADGFFEDNPPO_KMEPEKPAPPC_OFFSET UNITYSDK_OFFSET(0xB79EE10)
#define ADGFFEDNPPO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB79EED0)
#define ADGFFEDNPPO_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB79FC40)
#define ADGFFEDNPPO_MIFHOLNLDKA_OFFSET UNITYSDK_OFFSET(0xB79FCD0)
#define ADGFFEDNPPO_MKHHAPKJGMA_OFFSET UNITYSDK_OFFSET(0xB79F940)
#define ADGFFEDNPPO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB79F490)
#define ADGFFEDNPPO_OEKHKEFOPJO_OFFSET UNITYSDK_OFFSET(0xB79FCC0)
#define ADGFFEDNPPO_ONFINISH_OFFSET UNITYSDK_OFFSET(0xB79FBA0)
#define ADGFFEDNPPO_ONINIT_OFFSET UNITYSDK_OFFSET(0xB79FA20)
#define ADGFFEDNPPO_ONLOAD_OFFSET UNITYSDK_OFFSET(0xB79FAA0)
#define ADGFFEDNPPO_ONPREINIT_OFFSET UNITYSDK_OFFSET(0xB79F9E0)
#define ADGFFEDNPPO_ONSTART_OFFSET UNITYSDK_OFFSET(0xB79FB20)
#define ADGFFEDNPPO_ONSTOP_OFFSET UNITYSDK_OFFSET(0xB79FB60)
#define ADGFFEDNPPO_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xB79FA60)
#define ADGFFEDNPPO_ONUNLOAD_OFFSET UNITYSDK_OFFSET(0xB79FAE0)
#define ADGFFEDNPPO_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0xB79F160)
#define ADGFFEDNPPO_SET_VIEW_OFFSET UNITYSDK_OFFSET(0xB79FCB0)
#define ADGFFEDNPPO_TICK_OFFSET UNITYSDK_OFFSET(0xB79FBE0)

inline static constexpr unsigned int ADGFFEDNPPO_TypeDefinitionIndex = 54872;

	class ADGFFEDNPPO : public ::System::Object
	{
	public:
		::FDNCLPGAKOA* GLGOKPCDEEA; // 0x10
		::System::Action_2<::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState>* NPGDAPBIDCG; // 0x18
		::HBFNLNPLILA* _View_k__BackingField; // 0x20
		::System::Object* MMHPIKHEFCI; // 0x28
		::RPG::GameCore::BattleModeState COLPFNIHPLM; // 0x30
		::RPG::GameCore::BattleModeState CBFKJIDIGKG; // 0x34
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

		::System::Void DDKKJAPNADK(::System::Action_2<::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState>*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_DDKKJAPNADK_OFFSET))(this, a1);
		}

		::System::Void MKHHAPKJGMA(::System::Action_2<::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState>*))((::PBYTE)hIl2Cpp + ADGFFEDNPPO_MKHHAPKJGMA_OFFSET))(this, a1);
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
