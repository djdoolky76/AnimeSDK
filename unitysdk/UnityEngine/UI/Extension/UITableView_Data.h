#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableViewCell_State.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class Object; }
namespace System { class String; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_Data_TypeDefinitionIndex = 79713;

	struct alignas(8) UITableView_Data
	{
		::System::Boolean dirty; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Rect rect; // 0x14
		::System::Byte _padding1[0x4];
		::System::String* ident; // 0x28
		::System::Object* userData; // 0x30
		::UnityEngine::UI::Extension::UITableViewCell_State state; // 0x38
	};
}
