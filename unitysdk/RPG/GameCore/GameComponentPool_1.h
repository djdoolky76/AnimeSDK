#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNGOJNOFJPM;
namespace RPG::GameCore { template <typename T> class GameComponentPool_1; }

namespace RPG::GameCore
{
	template <typename T>
	class GameComponentPool_1 : public ::System::Object
	{
	public:
		::System::Byte componentIsAutoReset; // 0x0
		::CNGOJNOFJPM* componentLinkedList; // 0x0
		::System::Boolean UsePoolCache; // 0x0
		::CNGOJNOFJPM* componentLinkedList_Cached; // 0x0
		::System::Int32 lastMoveCachedFrameCount; // 0x0
		static ::RPG::GameCore::GameComponentPool_1<T>** StaticGet_instance()
		{
			return (::RPG::GameCore::GameComponentPool_1<T>**)UnitySDK::FromName("RPG.GameCore", "GameComponentPool`1")->GetStaticField(0x0);
		}

		// static const ::System::Object CACHED_FRAME_COUNT; // 0x0
	};
}
