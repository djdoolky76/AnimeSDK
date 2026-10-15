#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPECPNOEOEF;
class MDHODFHBAAO;
namespace Entitas { class EntityComponentChanged; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace RPG::Client::LittleGameShare::HoyoPhysics
{
	template <typename T>
	class Physics2DService_1 : public ::System::Object
	{
	public:
		::KPECPNOEOEF* _Engine; // 0x0
		::System::Int32 _SubStepCnt; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MDHODFHBAAO*>* _WorldKey2World; // 0x0
		::System::Int32 _WorldKeyGenerator; // 0x0
		::Entitas::EntityComponentChanged* _CacheOnComponentRemoved; // 0x0
	};
}
