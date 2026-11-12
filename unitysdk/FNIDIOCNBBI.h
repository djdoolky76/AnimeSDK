#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLKDDLHNNHH.h"
namespace RPG::Client { class MatchThreeBoard; }

#define FNIDIOCNBBI_CLEAR_OFFSET UNITYSDK_OFFSET(0x167E3EB0)
#define FNIDIOCNBBI_CTOR_OFFSET UNITYSDK_OFFSET(0x167E3F00)

inline static constexpr unsigned int FNIDIOCNBBI_TypeDefinitionIndex = 67781;

	class FNIDIOCNBBI : public ::MLKDDLHNNHH
	{
	public:
		::RPG::Client::MatchThreeBoard* GAIENNLBCMM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDIOCNBBI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNIDIOCNBBI_CLEAR_OFFSET))(this);
		}

	};
