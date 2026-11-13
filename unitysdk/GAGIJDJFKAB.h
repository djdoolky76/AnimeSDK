#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class ENEIHJJPNPI;
class GAGIJDJFKAB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GAGIJDJFKAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1B86BED0)
#define GAGIJDJFKAB_KAFCFMCLNLK_OFFSET UNITYSDK_OFFSET(0x1B86BE40)
#define GAGIJDJFKAB_KMPOOBLGAMJ_OFFSET UNITYSDK_OFFSET(0x1B86BDA0)

inline static constexpr unsigned int GAGIJDJFKAB_TypeDefinitionIndex = 55945;

	class GAGIJDJFKAB : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI; // 0x10
		::ENEIHJJPNPI* NCMDGGHBPFD; // 0x18
		::GAGIJDJFKAB* BNLCCCCMABF; // 0x20
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
