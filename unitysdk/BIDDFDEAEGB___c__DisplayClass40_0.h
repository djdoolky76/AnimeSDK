#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MapNpcDef; }

#define BIDDFDEAEGB___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BAAE410)
#define BIDDFDEAEGB___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1BAB0720)

inline static constexpr unsigned int BIDDFDEAEGB___c__DisplayClass40_0_TypeDefinitionIndex = 63528;

	class BIDDFDEAEGB___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::UInt32 serverEntityID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdateNpcMonsterExtraInfo_b__0(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + BIDDFDEAEGB___C__DISPLAYCLASS40_0___UPDATENPCMONSTEREXTRAINFO_B__0_OFFSET))(this, a1);
		}

	};
