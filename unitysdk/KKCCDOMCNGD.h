#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
class DFGDEHAHLHC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKCCDOMCNGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D7350)
#define KKCCDOMCNGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8D7520)
#define KKCCDOMCNGD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C8D76F0)
#define KKCCDOMCNGD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C8D7E00)

inline static constexpr unsigned int KKCCDOMCNGD_TypeDefinitionIndex = 42200;

	class KKCCDOMCNGD : public ::CKFDNGOHNPC
	{
	public:
		::System::Collections::Generic::List_1<::DFGDEHAHLHC*>* KJOIGIHAOBI; // 0x18
		::System::String* LLKDMBLKFPM; // 0x20
		::System::String* JOCLKJEGBJN; // 0x28
		::DFGDEHAHLHC* CFKHNPGEAJA; // 0x30
		::System::Int32 CLILCIELBNG; // 0x38
		::System::Single LJEOPKOBAGF; // 0x3C
		::System::Single COAELIHGAHH; // 0x40
		::System::Single HBDJCFFDGDD; // 0x44
		::System::Single PGMIOKKLHIE; // 0x48
		::System::Int32 PNOGGBMPMCG; // 0x4C
		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KKCCDOMCNGD_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCCDOMCNGD_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCCDOMCNGD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKCCDOMCNGD_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
