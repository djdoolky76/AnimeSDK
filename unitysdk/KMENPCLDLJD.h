#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/System/Guid.h"
class IAINCJNENGI;
namespace System { class Action; }
namespace System { class Object; }

#define KMENPCLDLJD_BNOEKNJDKDC_OFFSET UNITYSDK_OFFSET(0xB540C40)
#define KMENPCLDLJD_CTOR_OFFSET UNITYSDK_OFFSET(0xB540050)
#define KMENPCLDLJD_GET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB540E60)
#define KMENPCLDLJD_GFAJNHCKONA_OFFSET UNITYSDK_OFFSET(0xB540E10)
#define KMENPCLDLJD_JHJFDGLHGAN_OFFSET UNITYSDK_OFFSET(0xB540380)
#define KMENPCLDLJD_SET_EXITACTION_OFFSET UNITYSDK_OFFSET(0xB540E70)
#define KMENPCLDLJD__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB540150)
#define KMENPCLDLJD__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB540BB0)
#define KMENPCLDLJD__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB5403F0)
#define KMENPCLDLJD__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0xB540AF0)

inline static constexpr unsigned int KMENPCLDLJD_TypeDefinitionIndex = 72726;

	class KMENPCLDLJD : public ::RPG::Client::UIController
	{
	public:
		::System::Action* _ExitAction_k__BackingField; // 0x190
		::System::Guid GFAKDLGDHHF; // 0x198
		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + KMENPCLDLJD_CTOR_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void BNOEKNJDKDC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMENPCLDLJD_BNOEKNJDKDC_OFFSET))(this, a1);
		}

		::System::Void GFAJNHCKONA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KMENPCLDLJD_GFAJNHCKONA_OFFSET))(this, a1);
		}

		::System::Action* get_ExitAction()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD_GET_EXITACTION_OFFSET))(this);
		}

		::System::Void set_ExitAction(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KMENPCLDLJD_SET_EXITACTION_OFFSET))(this, a1);
		}

		::IAINCJNENGI* JHJFDGLHGAN()
		{
			return ((::IAINCJNENGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMENPCLDLJD_JHJFDGLHGAN_OFFSET))(this);
		}

	};
