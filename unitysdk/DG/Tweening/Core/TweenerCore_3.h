#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DG/Tweening/Tweener.h"

namespace DG::Tweening::Core { template <typename T> class DOGetter_1; }
namespace DG::Tweening::Core { template <typename T> class DOSetter_1; }
namespace DG::Tweening::Plugins::Core { template <typename T1, typename T2, typename T3> class ABSTweenPlugin_3; }

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int TweenerCore_3_TypeDefinitionIndex = 28038;

	template <typename T1, typename T2, typename T3>
	class TweenerCore_3 : public ::DG::Tweening::Tweener
	{
	public:
		// static const ::System::String* _TxtCantChangeSequencedValues; // 0x0
		T1 startValue; // 0x0
		T1 endValue; // 0x0
		T1 changeValue; // 0x0
		T2 plugOptions; // 0x0
		::DG::Tweening::Core::DOGetter_1<T3>* getter; // 0x0
		::DG::Tweening::Core::DOSetter_1<T3>* setter; // 0x0
		::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<T3, T3, T3>* tweenPlugin; // 0x0
	};
}
