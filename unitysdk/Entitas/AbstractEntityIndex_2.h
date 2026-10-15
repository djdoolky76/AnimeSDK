#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Entitas
{
	template <typename T1, typename T2>
	class AbstractEntityIndex_2 : public ::System::Object
	{
	public:
		::System::String* _name; // 0x0
		::Entitas::IGroup* _group; // 0x0
		::System::Func_3<T1, ::Entitas::IComponent*, T2>* _getKey; // 0x0
		::System::Func_3<T1, ::Entitas::IComponent*, ::Il2CppArray<T2>*>* _getKeys; // 0x0
		::System::Boolean _isSingleKey; // 0x0
	};
}
