#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IACGHDENOPA;
namespace System { class Object; }

namespace RPG::GameCore
{
	template <typename T>
	class BaseConfigHeader_1 : public ::System::Object
	{
	public:
		::IACGHDENOPA* _rowInfos; // 0x0
	};
}
