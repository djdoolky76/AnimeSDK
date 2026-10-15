#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCHBCMDHOB;
class LCDEEKNHPBG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOKEEMJDHNG_AKJABINEGDJ_OFFSET UNITYSDK_OFFSET(0xB59A0E0)
#define KOKEEMJDHNG_CTOR_OFFSET UNITYSDK_OFFSET(0xB59A720)
#define KOKEEMJDHNG_HJHFDEPFEED_OFFSET UNITYSDK_OFFSET(0xB59A170)
#define KOKEEMJDHNG_PAOCHKMFNPI_OFFSET UNITYSDK_OFFSET(0xB599BC0)

inline static constexpr unsigned int KOKEEMJDHNG_TypeDefinitionIndex = 79175;

	class KOKEEMJDHNG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LCDEEKNHPBG*>* EEMPAAFDLAP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKEEMJDHNG_CTOR_OFFSET))(this);
		}

		::System::Void PAOCHKMFNPI(::LCDEEKNHPBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LCDEEKNHPBG*))((::PBYTE)hIl2Cpp + KOKEEMJDHNG_PAOCHKMFNPI_OFFSET))(this, a1);
		}

		::KOCHBCMDHOB* AKJABINEGDJ()
		{
			return ((::KOCHBCMDHOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKEEMJDHNG_AKJABINEGDJ_OFFSET))(this);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDEEKNHPBG*>* HJHFDEPFEED(::Il2CppArray<::LCDEEKNHPBG*>* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::LCDEEKNHPBG*>*(*)(::Il2CppArray<::LCDEEKNHPBG*>*))((::PBYTE)hIl2Cpp + KOKEEMJDHNG_HJHFDEPFEED_OFFSET))(a1);
		}

	};
