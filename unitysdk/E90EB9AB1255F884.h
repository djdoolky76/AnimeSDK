#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

namespace UnityEngine { class Texture2D; }

#define E90EB9AB1255F884_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x28656B0)
#define E90EB9AB1255F884__CTOR_OFFSET UNITYSDK_OFFSET(0x2865810)

inline static constexpr unsigned int E90EB9AB1255F884_TypeDefinitionIndex = 16030;

class E90EB9AB1255F884 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::Texture2D* A7B043F3133CDEF0; // 0x18
	::System::Single EB8923D264AA2514; // 0x20
	::System::Single A5886EA87D77E0F0; // 0x24
	::System::Single FC80CA44D342B66A; // 0x28
	::System::Single BD19FB6F3F8159BC; // 0x2C
	::System::Single B293198831088245; // 0x30
	::System::Single EBD019D8960969FB; // 0x34
	::System::Single B166EF0C648B8DCE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E90EB9AB1255F884__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::E90EB9AB1255F884* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E90EB9AB1255F884*))((::PBYTE)hIl2Cpp + E90EB9AB1255F884_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
