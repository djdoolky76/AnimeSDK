#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_UnitComparer_TypeDefinitionIndex = 8802;

	template <typename T>
	class TickSequencer_1_UnitComparer : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TickSequencer_1_UnitComparer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
