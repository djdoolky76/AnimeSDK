#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define E5DF2D234A76991D__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

inline static constexpr unsigned int E5DF2D234A76991D_TypeDefinitionIndex = 10789;

class E5DF2D234A76991D : public ::System::Object
{
public:
	::System::Type* FDA2C5298DFAEB74; // 0x10
	::System::String* AC4C8B20504FE733; // 0x18
	::System::Boolean FE5D53B98E4F88DE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5DF2D234A76991D__CTOR_OFFSET))(this);
	}
};
