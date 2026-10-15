#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
class ABCMHHAOPPK;
namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define ABCMHHAOPPK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0EDD50)
#define ABCMHHAOPPK_CLEAR_OFFSET UNITYSDK_OFFSET(0xB0EDDC0)
#define ABCMHHAOPPK_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EDE70)
#define ABCMHHAOPPK_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xB0EDE10)

inline static constexpr unsigned int ABCMHHAOPPK_TypeDefinitionIndex = 65888;

	class ABCMHHAOPPK : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* HPINJBJLCBB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCMHHAOPPK_CTOR_OFFSET))(this);
		}

		static ::ABCMHHAOPPK* BPLPBPMEODA()
		{
			return ((::ABCMHHAOPPK*(*)())((::PBYTE)hIl2Cpp + ABCMHHAOPPK_BPLPBPMEODA_OFFSET))();
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCMHHAOPPK_CLEAR_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCMHHAOPPK_ONEXECUTE_OFFSET))(this);
		}

	};
