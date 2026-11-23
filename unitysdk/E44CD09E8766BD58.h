#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }

#define E44CD09E8766BD58_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x234F3E0)
#define E44CD09E8766BD58__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E44CD09E8766BD58_TypeDefinitionIndex = 3126;

class E44CD09E8766BD58 : public ::System::Object
{
public:
	::System::String* AABCF53E8F7A7E5F; // 0x10
	::System::Boolean B6C584210869414E; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single EB687307ED9FCEAF; // 0x1C
	::System::Boolean F051E173B099662A; // 0x20
	::System::Byte _padding1[0x3];
	::System::UInt32 AB5B549C70691F2D; // 0x24
	::ABC::Config::GUID E28521435E22FE35; // 0x28
	::System::UInt32 B6B6F09B79A3F34C; // 0x38

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E44CD09E8766BD58*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E44CD09E8766BD58*&))((::PBYTE)hIl2Cpp + E44CD09E8766BD58_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E44CD09E8766BD58__CTOR_OFFSET))(this);
	}
};
