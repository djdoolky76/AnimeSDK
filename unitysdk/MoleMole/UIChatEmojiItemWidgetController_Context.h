#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJOBOHPOCIO;

#define MOLEMOLE_UICHATEMOJIITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x180677F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatEmojiItemWidgetController_Context_TypeDefinitionIndex = 76103;

	class UIChatEmojiItemWidgetController_Context : public ::System::Object
	{
	public:
		::EJOBOHPOCIO* Data; // 0x10
		::System::Boolean ShowAsFav; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 FavListIndex; // 0x1C

		::System::Void _ctor(::EJOBOHPOCIO* data)
		{
			return ((::System::Void(*)(::PVOID, ::EJOBOHPOCIO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATEMOJIITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, data);
		}
	};
}
