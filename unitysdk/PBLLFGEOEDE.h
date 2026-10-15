#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDKHHPPIFBC.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
class FCFKPLDONLO;
class KDEFLDJHDEB;
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::GameCore { class BlockNodeConfig; }
namespace System { class String; }

#define PBLLFGEOEDE_CTOR_OFFSET UNITYSDK_OFFSET(0xBFEB3F0)
#define PBLLFGEOEDE_GETAPPLYSTREAMINGLAYER_OFFSET UNITYSDK_OFFSET(0xBFEB590)
#define PBLLFGEOEDE_GETASSETPATH_OFFSET UNITYSDK_OFFSET(0xBFEB430)

inline static constexpr unsigned int PBLLFGEOEDE_TypeDefinitionIndex = 73801;

	class PBLLFGEOEDE : public ::GDKHHPPIFBC
	{
	public:
		::FCFKPLDONLO* PBLAJAEOCCM; // 0xD8
		::FCFKPLDONLO* PNMDLMPDMCL; // 0xE0
		::System::Void _ctor(::RPG::GameCore::BlockNodeConfig* a1, ::GEEOPFIMJEM a2, ::DGPKLNNFELK* a3, ::KDEFLDJHDEB* a4, ::System::String* a5, ::RPG::Client::OpenWorld::StreamingItemData* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BlockNodeConfig*, ::GEEOPFIMJEM, ::DGPKLNNFELK*, ::KDEFLDJHDEB*, ::System::String*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + PBLLFGEOEDE_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* GetAssetPath(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PBLLFGEOEDE_GETASSETPATH_OFFSET))(this, a1);
		}

		::System::String* GetApplyStreamingLayer()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBLLFGEOEDE_GETAPPLYSTREAMINGLAYER_OFFSET))(this);
		}

	};
