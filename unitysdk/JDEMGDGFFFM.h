#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetIdentifier.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Pet { class IPet; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JDEMGDGFFFM_BAKIJBBMPDI_OFFSET UNITYSDK_OFFSET(0x165C23C0)
#define JDEMGDGFFFM_BKPDINENNFM_OFFSET UNITYSDK_OFFSET(0x165C20F0)
#define JDEMGDGFFFM_DCIMCJAGEAI_OFFSET UNITYSDK_OFFSET(0x165C1A80)
#define JDEMGDGFFFM_HJBBLCCABLJ_OFFSET UNITYSDK_OFFSET(0x165C1BF0)
#define JDEMGDGFFFM_PCBFFHPHEPE_OFFSET UNITYSDK_OFFSET(0x165C2410)

	class JDEMGDGFFFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>** StaticGet_BKEJEPKOLDO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>**)UnitySDK::FromName("", "JDEMGDGFFFM")->GetStaticField(0x6EFE0);
		}

		static ::System::Boolean DCIMCJAGEAI(::System::UInt32 a1, ::RPG::Client::Pet::IPet* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + JDEMGDGFFFM_DCIMCJAGEAI_OFFSET))(a1, a2);
		}

		static ::System::String* BKPDINENNFM(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JDEMGDGFFFM_BKPDINENNFM_OFFSET))(a1);
		}

		static ::System::Void BAKIJBBMPDI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEMGDGFFFM_BAKIJBBMPDI_OFFSET))();
		}

		static ::System::Void HJBBLCCABLJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEMGDGFFFM_HJBBLCCABLJ_OFFSET))();
		}

		static ::System::Void PCBFFHPHEPE(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>* a1, ::System::UInt32 a2, ::RPG::Client::Pet::PetIdentifier a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Pet::PetIdentifier>*, ::System::UInt32, ::RPG::Client::Pet::PetIdentifier))((::PBYTE)hIl2Cpp + JDEMGDGFFFM_PCBFFHPHEPE_OFFSET))(a1, a2, a3);
		}

	};
