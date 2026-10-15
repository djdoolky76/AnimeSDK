#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIProfiler_SampleType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET UNITYSDK_OFFSET(0xE3E8300)
#define RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0xE3E7CA0)
#define RPG_CLIENT_UIPROFILER_CCTOR_OFFSET UNITYSDK_OFFSET(0xE3E85B0)
#define RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0xE3E84E0)
#define RPG_CLIENT_UIPROFILER_CTOR_OFFSET UNITYSDK_OFFSET(0xE3E85A0)
#define RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0xE3E7FB0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIProfiler_TypeDefinitionIndex = 73176;

	class UIProfiler : public ::System::Object
	{
	public:
		static ::RPG::Client::UIController** StaticGet__Controller()
		{
			return (::RPG::Client::UIController**)UnitySDK::FromName("RPG.Client", "UIProfiler")->GetStaticField(0x35640);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>** StaticGet__SampleDataMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("RPG.Client", "UIProfiler")->GetStaticField(0x35648);
		}

		static ::System::Boolean* StaticGet_Enable()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "UIProfiler")->GetStaticField(0xAC60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CCTOR_OFFSET))();
		}

		static ::System::Void BeginSample(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_BEGINSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void EndSample(::RPG::Client::UIProfiler_SampleType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::Client::UIProfiler_SampleType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ENDSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void AsyncShowUI(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_ASYNCSHOWUI_OFFSET))(a1);
		}

		static ::System::Void CloseUI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIPROFILER_CLOSEUI_OFFSET))();
		}

	};
}
