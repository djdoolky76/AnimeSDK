#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_FATESUPPORTNOVOICEPART_CTOR_OFFSET UNITYSDK_OFFSET(0x1C501F10)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C501FF0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMISSIONIDS_OFFSET UNITYSDK_OFFSET(0x1C501F40)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C5020D0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_INIT_OFFSET UNITYSDK_OFFSET(0x1C501670)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_ISENGLISHAUDIOLANGASSETEXIST_OFFSET UNITYSDK_OFFSET(0x1C502550)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1C501840)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOULDSHOWNOVOICECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1C5021C0)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOWNOVOICECONFIRMDIALOG_OFFSET UNITYSDK_OFFSET(0x1C502400)
#define RPG_CLIENT_FATESUPPORTNOVOICEPART__ISFIRSTSUBMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x1C502310)

namespace RPG::Client
{
	inline static constexpr unsigned int FateSupportNoVoicePart_TypeDefinitionIndex = 65606;

	class FateSupportNoVoicePart : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::DynamicValue* get__TargetMissionIDs()
		{
			return ((::RPG::GameCore::DynamicValue*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMISSIONIDS_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> get__TargetMainMissionID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETMAINMISSIONID_OFFSET))();
		}

		static ::System::Nullable_1<::System::UInt32> get__TargetSubMissionID()
		{
			return ((::System::Nullable_1<::System::UInt32>(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_GET__TARGETSUBMISSIONID_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_ONLOGINFINISH_OFFSET))(this);
		}

		static ::System::Boolean ShouldShowNoVoiceConfirmDialog()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOULDSHOWNOVOICECONFIRMDIALOG_OFFSET))();
		}

		static ::System::Void ShowNoVoiceConfirmDialog(::System::Action_1<::System::Boolean>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Boolean>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_SHOWNOVOICECONFIRMDIALOG_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsEnglishAudioLangAssetExist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART_ISENGLISHAUDIOLANGASSETEXIST_OFFSET))();
		}

		static ::System::Boolean _IsFirstSubMissionInProgress()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESUPPORTNOVOICEPART__ISFIRSTSUBMISSIONINPROGRESS_OFFSET))();
		}

	};
}
