#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CAOKACBLMBH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define FIOMBIHJMPK_DFFBLLDPNEK_OFFSET UNITYSDK_OFFSET(0x11D7D720)
#define FIOMBIHJMPK_FBGPPGIBENH_OFFSET UNITYSDK_OFFSET(0x11D7D5F0)
#define FIOMBIHJMPK_HHPBKKAPGBA_OFFSET UNITYSDK_OFFSET(0x11D7D6B0)
#define FIOMBIHJMPK_JDBEPMKNBIG_OFFSET UNITYSDK_OFFSET(0x11D7D550)
#define FIOMBIHJMPK__CTOR_OFFSET UNITYSDK_OFFSET(0x11D7D660)

inline static constexpr unsigned int FIOMBIHJMPK_TypeDefinitionIndex = 75476;

class FIOMBIHJMPK : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* MLHFLIDFHHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOMBIHJMPK__CTOR_OFFSET))(this);
	}

	::System::Boolean JDBEPMKNBIG(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::Boolean(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIOMBIHJMPK_JDBEPMKNBIG_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::String* FBGPPGIBENH(::CAOKACBLMBH* NPOPLIPAKFK, ::System::Int32& LFDNAFIMEBI)
	{
		return ((::System::String*(*)(::PVOID, ::CAOKACBLMBH*, ::System::Int32&))((::PBYTE)hIl2Cpp + FIOMBIHJMPK_FBGPPGIBENH_OFFSET))(this, NPOPLIPAKFK, LFDNAFIMEBI);
	}

	::System::Void HHPBKKAPGBA(::System::Int32 LCADCPMJADO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FIOMBIHJMPK_HHPBKKAPGBA_OFFSET))(this, LCADCPMJADO);
	}

	::System::Void DFFBLLDPNEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIOMBIHJMPK_DFFBLLDPNEK_OFFSET))(this);
	}
};
