#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFDNGOHNPC.h"
class DFGDEHAHLHC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKCCDOMCNGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C905610)
#define KKCCDOMCNGD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C9057E0)
#define KKCCDOMCNGD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1C9059B0)
#define KKCCDOMCNGD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C9060C0)

	class KKCCDOMCNGD : public ::CKFDNGOHNPC
	{
	public:
		::DFGDEHAHLHC* CFKHNPGEAJA; // 0x18
		::System::String* LLKDMBLKFPM; // 0x20
		::System::Collections::Generic::List_1<::DFGDEHAHLHC*>* KJOIGIHAOBI; // 0x28
		::System::String* JOCLKJEGBJN; // 0x30
		::System::Int32 CLILCIELBNG; // 0x38
		::System::Single PGMIOKKLHIE; // 0x3C
		::System::Int32 PNOGGBMPMCG; // 0x40
		::System::Single COAELIHGAHH; // 0x44
		::System::Single HBDJCFFDGDD; // 0x48
		::System::Single LJEOPKOBAGF; // 0x4C
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
