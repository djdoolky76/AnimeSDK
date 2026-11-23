#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AE27555029C18F7E.h"
#include "unitysdk/E517049D5334F9A0.h"

namespace System { class String; }

#define E9C7651410043572_A79575C985C0DA90_OFFSET UNITYSDK_OFFSET(0x24CD8C0)
#define E9C7651410043572__CTOR_OFFSET UNITYSDK_OFFSET(0x24CDAB0)

inline static constexpr unsigned int E9C7651410043572_TypeDefinitionIndex = 4885;

class E9C7651410043572 : public ::AE27555029C18F7E
{
public:
	::System::String* A7D3C27BD6DB94B8; // 0x40

	::System::Void _ctor(::System::String* BD1EA98CC623BF08, ::System::String* BA22CDF38FFD8CE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + E9C7651410043572__CTOR_OFFSET))(this, BD1EA98CC623BF08, BA22CDF38FFD8CE8);
	}

	::System::Boolean A79575C985C0DA90(::System::String* EFF983A80A48BB2A, ::E517049D5334F9A0& E7588CD8FD3BE664)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::E517049D5334F9A0&))((::PBYTE)hIl2Cpp + E9C7651410043572_A79575C985C0DA90_OFFSET))(this, EFF983A80A48BB2A, E7588CD8FD3BE664);
	}
};
