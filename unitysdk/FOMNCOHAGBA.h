#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/Application/MechCraftGameSessionState.h"
#include "unitysdk/System/Object.h"
class HDNHJFLEOEJ;
class IFGALMBDIAA;
class KCJNGDLDKFG;
class OBJANKHLNGO;
class POIDGGOOMHO;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }

#define FOMNCOHAGBA_BPPKHAMBPIM_OFFSET UNITYSDK_OFFSET(0x158FD9D0)
#define FOMNCOHAGBA_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x158FD470)
#define FOMNCOHAGBA_COLEFEFNNBE_OFFSET UNITYSDK_OFFSET(0x158FD680)
#define FOMNCOHAGBA_CTOR_OFFSET UNITYSDK_OFFSET(0x158FD250)
#define FOMNCOHAGBA_FECDGIPBFOF_OFFSET UNITYSDK_OFFSET(0x158FDEB0)
#define FOMNCOHAGBA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x158FE0F0)
#define FOMNCOHAGBA_GFEKMELMEJK_OFFSET UNITYSDK_OFFSET(0x158FDA50)
#define FOMNCOHAGBA_JGBNOALAGKN_OFFSET UNITYSDK_OFFSET(0x158FDD80)
#define FOMNCOHAGBA_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x158FD280)
#define FOMNCOHAGBA_MMDKMEFGKNB_OFFSET UNITYSDK_OFFSET(0x158FDF60)
#define FOMNCOHAGBA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x158FE100)

inline static constexpr unsigned int FOMNCOHAGBA_TypeDefinitionIndex = 80229;

	class FOMNCOHAGBA : public ::System::Object
	{
	public:
		::POIDGGOOMHO* DEMEBGGDHEH; // 0x10
		::HDNHJFLEOEJ* DLGHMDCBAPI; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::KCJNGDLDKFG* JGJPOOFDENC; // 0x28
		::IFGALMBDIAA* KEBOELMIGNB; // 0x30
		::RPG::Client::MechCraft::Application::MechCraftGameSessionState _State_k__BackingField; // 0x38
		::System::Void _ctor(::IFGALMBDIAA* a1, ::HDNHJFLEOEJ* a2, ::POIDGGOOMHO* a3, ::KCJNGDLDKFG* a4, ::OBJANKHLNGO* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IFGALMBDIAA*, ::HDNHJFLEOEJ*, ::POIDGGOOMHO*, ::KCJNGDLDKFG*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_CHAHBFGGIDL_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* COLEFEFNNBE()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_COLEFEFNNBE_OFFSET))(this);
		}

		::System::Void BPPKHAMBPIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_BPPKHAMBPIM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GFEKMELMEJK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_GFEKMELMEJK_OFFSET))(this);
		}

		::System::Void JGBNOALAGKN(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_JGBNOALAGKN_OFFSET))(this, a1);
		}

		::System::Void FECDGIPBFOF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_FECDGIPBFOF_OFFSET))(this, a1);
		}

		::System::Void MMDKMEFGKNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_MMDKMEFGKNB_OFFSET))(this);
		}

		::RPG::Client::MechCraft::Application::MechCraftGameSessionState get_State()
		{
			return ((::RPG::Client::MechCraft::Application::MechCraftGameSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::Client::MechCraft::Application::MechCraftGameSessionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::Application::MechCraftGameSessionState))((::PBYTE)hIl2Cpp + FOMNCOHAGBA_SET_STATE_OFFSET))(this, a1);
		}

	};
