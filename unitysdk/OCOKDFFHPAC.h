#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"
class BCBLPHCEEJM;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCOKDFFHPAC_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD6DAB0)
#define OCOKDFFHPAC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD6DAA0)
#define OCOKDFFHPAC_KLNHHICFNMJ_OFFSET UNITYSDK_OFFSET(0xBD6D7D0)

inline static constexpr unsigned int OCOKDFFHPAC_TypeDefinitionIndex = 61717;

	class OCOKDFFHPAC : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MCIHFJOIINA()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C0C0);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MDDOBLODHEE()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C0E0);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_CLFAMLEADDD()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C100);
		}

		static ::System::Collections::Generic::Dictionary_2<::BCBLPHCEEJM*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_ODPGDKCDEMI()
		{
			return (::System::Collections::Generic::Dictionary_2<::BCBLPHCEEJM*, ::RPG::Client::ActivityPanelTemplate>**)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C120);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_CEPDIIPEKBO()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C128);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_DHHPJEGAHJL()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C148);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MMLDFMKFNIN()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C168);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_AAHAHNBGBPH()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x5C188);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOKDFFHPAC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOKDFFHPAC_CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityPanelTemplate KLNHHICFNMJ(::RPG::Client::ActivityData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::ActivityPanelTemplate(*)(::RPG::Client::ActivityData*, ::System::UInt32))((::PBYTE)hIl2Cpp + OCOKDFFHPAC_KLNHHICFNMJ_OFFSET))(a1, a2);
		}

	};
