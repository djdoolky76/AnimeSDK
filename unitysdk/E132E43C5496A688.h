#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A552BE56808954C8.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AE6DAFB95F490748;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E132E43C5496A688_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26C8330)
#define E132E43C5496A688__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E132E43C5496A688_TypeDefinitionIndex = 6584;

class E132E43C5496A688 : public ::System::Object
{
public:
	::System::UInt64 AB62713ED9E5EFA3; // 0x10
	::System::UInt32 AEA6A4F794917D32; // 0x18
	::System::UInt32 E5770E2D3D0E04AD; // 0x1C
	::E68AA4EB51923C98::A552BE56808954C8 AC4D0F288FAA6512; // 0x20
	::System::Int32 A15A9EA9342F6DF9; // 0x24
	::System::Int32 B414E3BE2BDD3C19; // 0x28
	::System::Int32 BE37A29F06BAE36B; // 0x2C
	::System::Int32 EFC1C648412293DF; // 0x30
	::System::Int32 BD2F7B94E55715E7; // 0x34
	::System::Int32 BC3D3B1CC6CF18B8; // 0x38
	::System::Int32 B39E697330DB249C; // 0x3C
	::System::Int32 E1ADB2381CF47595; // 0x40
	::System::Int32 B689C15E583487B3; // 0x44
	::System::Int32 E393FD7A4DC8959D; // 0x48
	::System::UInt32 EB57988CFFC144ED; // 0x4C
	::System::UInt32 AC12922B081B5508; // 0x50
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::AE6DAFB95F490748*>* E795611B092B8C88; // 0x58
	::System::Collections::Generic::List_1<::AE6DAFB95F490748*>* B362ACA28DBC0AA1; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E132E43C5496A688__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E132E43C5496A688*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E132E43C5496A688*&))((::PBYTE)hIl2Cpp + E132E43C5496A688_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
