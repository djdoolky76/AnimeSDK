#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBMGEIGCPHG;
class FHJJGNMOELH;
class IHOAIJMMOEF;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class UpgradeAvatarProxy; }

#define BDFBNCDCFIM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x162F6950)
#define BDFBNCDCFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x162F68C0)

	class BDFBNCDCFIM : public ::System::Object
	{
	public:
		::CBMGEIGCPHG* AMKEOCMECDM; // 0x10
		::IHOAIJMMOEF* MLOBHABHCGB; // 0x18
		::System::Void _ctor(::IHOAIJMMOEF* a1, ::CBMGEIGCPHG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IHOAIJMMOEF*, ::CBMGEIGCPHG*))((::PBYTE)hIl2Cpp + BDFBNCDCFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UpgradeAvatarProxy* BPLPBPMEODA(::RPG::AvatarSystem::IAvatar* a1, ::FHJJGNMOELH* a2)
		{
			return ((::RPG::Client::UpgradeAvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::FHJJGNMOELH*))((::PBYTE)hIl2Cpp + BDFBNCDCFIM_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
