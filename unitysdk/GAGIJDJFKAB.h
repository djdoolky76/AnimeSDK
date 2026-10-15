#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
class GAGIJDJFKAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAGIJDJFKAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1593B420)
#define GAGIJDJFKAB_KAFCFMCLNLK_OFFSET UNITYSDK_OFFSET(0x1593B390)
#define GAGIJDJFKAB_KMPOOBLGAMJ_OFFSET UNITYSDK_OFFSET(0x1593B2F0)

	class GAGIJDJFKAB : public ::System::Object
	{
	public:
		::GAGIJDJFKAB* BNLCCCCMABF; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI; // 0x18
		::ENEIHJJPNPI* NCMDGGHBPFD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAGIJDJFKAB_CTOR_OFFSET))(this);
		}

		::ENEIHJJPNPI* KMPOOBLGAMJ(::RPG::GameCore::StringHash a1)
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + GAGIJDJFKAB_KMPOOBLGAMJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* KAFCFMCLNLK(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + GAGIJDJFKAB_KAFCFMCLNLK_OFFSET))(this, a1);
		}

	};
