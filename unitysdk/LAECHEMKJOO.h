#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFODGECFLLC;
class HIOEAKHGILF;
class PEEDLCHFAFL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAECHEMKJOO_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D52B0)
#define LAECHEMKJOO_DELTATIMEWITHIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0xB5D5480)
#define LAECHEMKJOO_DELTATIME_OFFSET UNITYSDK_OFFSET(0xB5D53D0)
#define LAECHEMKJOO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5D59A0)
#define LAECHEMKJOO_DNBNGIGDHIM_OFFSET UNITYSDK_OFFSET(0xB5D5500)
#define LAECHEMKJOO_FIXEDDELTATIME_OFFSET UNITYSDK_OFFSET(0xB5D52C0)
#define LAECHEMKJOO_TIMESCALE_OFFSET UNITYSDK_OFFSET(0xB5D5370)

inline static constexpr unsigned int LAECHEMKJOO_TypeDefinitionIndex = 76880;

	class LAECHEMKJOO : public ::System::Object
	{
	public:
		::EFODGECFLLC* EEFMDEHLLFI; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::EFODGECFLLC* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EFODGECFLLC*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single FixedDeltaTime(::HIOEAKHGILF* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_FIXEDDELTATIME_OFFSET))(this, a1);
		}

		::System::Single DeltaTime(::HIOEAKHGILF* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_DELTATIME_OFFSET))(this, a1);
		}

		::System::Single DeltaTimeWithIgnoreIndex(::HIOEAKHGILF* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_DELTATIMEWITHIGNOREINDEX_OFFSET))(this, a1, a2, a3);
		}

		::System::Single TimeScale(::HIOEAKHGILF* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_TIMESCALE_OFFSET))(this, a1);
		}

		::System::Single DNBNGIGDHIM(::HIOEAKHGILF* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LAECHEMKJOO_DNBNGIGDHIM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAECHEMKJOO_DISPOSE_OFFSET))(this);
		}

	};
