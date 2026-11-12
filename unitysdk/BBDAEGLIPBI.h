#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class RogueTournExhibitionInfo; }
namespace RPG::GameCore { class RogueTournSetExhibitionBoothImage; }
namespace RPG::GameCore { class TaskContext; }

#define BBDAEGLIPBI_CTOR_OFFSET UNITYSDK_OFFSET(0x16D07A60)
#define BBDAEGLIPBI_MJPDNDBFKJC_OFFSET UNITYSDK_OFFSET(0x16D08210)
#define BBDAEGLIPBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16D07A90)

inline static constexpr unsigned int BBDAEGLIPBI_TypeDefinitionIndex = 59753;

	class BBDAEGLIPBI
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournSetExhibitionBoothImage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournSetExhibitionBoothImage*))((::PBYTE)hIl2Cpp + BBDAEGLIPBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBDAEGLIPBI_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::Client::RogueTournExhibitionInfo* MJPDNDBFKJC()
		{
			return ((::RPG::Client::RogueTournExhibitionInfo*(*)())((::PBYTE)hIl2Cpp + BBDAEGLIPBI_MJPDNDBFKJC_OFFSET))();
		}

	};
