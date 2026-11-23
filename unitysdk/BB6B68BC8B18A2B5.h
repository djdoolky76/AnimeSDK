#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Text { class StringBuilder; }

#define BB6B68BC8B18A2B5_B331B121C62F2740_OFFSET UNITYSDK_OFFSET(0x3B9E4B0)
#define BB6B68BC8B18A2B5_EA28CF291EBB2931_OFFSET UNITYSDK_OFFSET(0x3B9E530)
#define BB6B68BC8B18A2B5_F35B9337D53C310F_OFFSET UNITYSDK_OFFSET(0x3B9E4E0)
#define BB6B68BC8B18A2B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

inline static constexpr unsigned int BB6B68BC8B18A2B5_TypeDefinitionIndex = 11113;

class BB6B68BC8B18A2B5 : public ::System::Object
{
public:
	::System::Int32 B8A7405C3C5CA94A; // 0x10

	::System::Void _ctor(::System::Int32 B8A7405C3C5CA94A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BB6B68BC8B18A2B5__CTOR_OFFSET))(this, B8A7405C3C5CA94A);
	}

	::System::String* EA28CF291EBB2931()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BB6B68BC8B18A2B5_EA28CF291EBB2931_OFFSET))(this);
	}

	::System::Text::StringBuilder* B331B121C62F2740(::System::Text::StringBuilder* A94D8812A3A79CC8)
	{
		return ((::System::Text::StringBuilder*(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + BB6B68BC8B18A2B5_B331B121C62F2740_OFFSET))(this, A94D8812A3A79CC8);
	}

	::System::Type* F35B9337D53C310F(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::System::Type*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + BB6B68BC8B18A2B5_F35B9337D53C310F_OFFSET))(this, A288CB28FC2A6DA3);
	}
};
