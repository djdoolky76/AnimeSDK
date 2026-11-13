#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelTemplate.h"
#include "unitysdk/System/Object.h"
class BCBLPHCEEJM;
namespace RPG::Client { class ActivityData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OCOKDFFHPAC_CCTOR_OFFSET UNITYSDK_OFFSET(0x19A206F0)
#define OCOKDFFHPAC_CTOR_OFFSET UNITYSDK_OFFSET(0x19A206E0)
#define OCOKDFFHPAC_KLNHHICFNMJ_OFFSET UNITYSDK_OFFSET(0x19A20410)

inline static constexpr unsigned int OCOKDFFHPAC_TypeDefinitionIndex = 63123;

	class OCOKDFFHPAC : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::BCBLPHCEEJM*, ::RPG::Client::ActivityPanelTemplate>** StaticGet_ODPGDKCDEMI()
		{
			return (::System::Collections::Generic::Dictionary_2<::BCBLPHCEEJM*, ::RPG::Client::ActivityPanelTemplate>**)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68BB0);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MDDOBLODHEE()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68BB8);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_DHHPJEGAHJL()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68BD8);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MCIHFJOIINA()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68BF8);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_CLFAMLEADDD()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68C18);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_CEPDIIPEKBO()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68C38);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_AAHAHNBGBPH()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68C58);
		}

		static ::RPG::Client::ActivityPanelTemplate* StaticGet_MMLDFMKFNIN()
		{
			return (::RPG::Client::ActivityPanelTemplate*)UnitySDK::FromName("", "OCOKDFFHPAC")->GetStaticField(0x68C78);
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
