#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDKHHPPIFBC.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
class KDEFLDJHDEB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define IKAFMLLAPNK_CTOR_OFFSET UNITYSDK_OFFSET(0x16481820)
#define IKAFMLLAPNK_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0x16481860)

inline static constexpr unsigned int IKAFMLLAPNK_TypeDefinitionIndex = 73896;

	class IKAFMLLAPNK : public ::GDKHHPPIFBC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::DGPKLNNFELK* a3, ::KDEFLDJHDEB* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::DGPKLNNFELK*, ::KDEFLDJHDEB*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + IKAFMLLAPNK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKAFMLLAPNK_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

	};
