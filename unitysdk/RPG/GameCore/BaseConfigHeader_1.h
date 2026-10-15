#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IACGHDENOPA;
namespace System { class Object; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseConfigHeader_1_TypeDefinitionIndex = 10832;

	template <typename T>
	class BaseConfigHeader_1 : public ::System::Object
	{
	public:
		::IACGHDENOPA* _rowInfos; // 0x0
	};
}
