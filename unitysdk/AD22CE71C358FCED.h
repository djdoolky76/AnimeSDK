#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define AD22CE71C358FCED_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x239D490)
#define AD22CE71C358FCED__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD22CE71C358FCED_TypeDefinitionIndex = 3542;

class AD22CE71C358FCED : public ::System::Object
{
public:
	::System::Int32 AE5264B15CEBB080; // 0x10
	::System::Int32 EB477181C83B3BB2; // 0x14
	::System::Int32 F3F86936FA509AE1; // 0x18
	::System::Byte _padding0[0x4];
	::System::String* B97C9F6D398DAD80; // 0x20
	::System::String* B3F5C6210A0C96A5; // 0x28

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::AD22CE71C358FCED*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::AD22CE71C358FCED*&))((::PBYTE)hIl2Cpp + AD22CE71C358FCED_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD22CE71C358FCED__CTOR_OFFSET))(this);
	}
};
