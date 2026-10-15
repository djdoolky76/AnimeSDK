#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }
namespace System { class String; }

#define LKDKEEDNMOJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90F540)
#define LKDKEEDNMOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90F5B0)

	class LKDKEEDNMOJ : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::System::UInt32>* LKPLGMNCKFL; // 0x10
		::RPG::GameCore::LittleGameLevelCurveInfo* JDLHEOANNAP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDKEEDNMOJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKDKEEDNMOJ_CLEAR_OFFSET))(this);
		}

	};
