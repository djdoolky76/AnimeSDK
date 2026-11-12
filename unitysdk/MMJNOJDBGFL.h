#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFMENAAGPDN;
class CFCPFBDDOGG;
class CIFFEJCJFDJ;
class CIICMHFLBNF;
class CJFNPDDFAMB;
class FAPMPKICHBB;
class KNAFLABINOA;
class LBPCONKMBIK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMJNOJDBGFL_ANPKHDDGEFE_OFFSET UNITYSDK_OFFSET(0xC28FCE0)
#define MMJNOJDBGFL_CNBDPMMFAKP_OFFSET UNITYSDK_OFFSET(0xC28FE80)
#define MMJNOJDBGFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC28FC10)
#define MMJNOJDBGFL_HMEKMEHHDEE_OFFSET UNITYSDK_OFFSET(0xC28FC30)
#define MMJNOJDBGFL_HNHDPOGCOOH_OFFSET UNITYSDK_OFFSET(0xC28FF00)
#define MMJNOJDBGFL_MJGCAKHGOFJ_OFFSET UNITYSDK_OFFSET(0xC2903E0)
#define MMJNOJDBGFL_NIDLOMMNNOL_OFFSET UNITYSDK_OFFSET(0xC28FDF0)

inline static constexpr unsigned int MMJNOJDBGFL_TypeDefinitionIndex = 65277;

	class MMJNOJDBGFL : public ::System::Object
	{
	public:
		::CFCPFBDDOGG* FDKBHNDNAEE; // 0x10
		::CIFFEJCJFDJ* DACMBPLECJN; // 0x18
		::CJFNPDDFAMB* PIACKEOFAOG; // 0x20
		::CIICMHFLBNF* MDCPJNOPIDD; // 0x28
		::System::Void _ctor(::CJFNPDDFAMB* a1, ::CIFFEJCJFDJ* a2, ::CIICMHFLBNF* a3, ::CFCPFBDDOGG* a4)
		{
			return ((::System::Void(*)(::PVOID, ::CJFNPDDFAMB*, ::CIFFEJCJFDJ*, ::CIICMHFLBNF*, ::CFCPFBDDOGG*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::LBPCONKMBIK* HMEKMEHHDEE(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_HMEKMEHHDEE_OFFSET))(this, a1, a2);
		}

		::LBPCONKMBIK* ANPKHDDGEFE(::System::UInt32 a1, ::BFMENAAGPDN* a2)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_ANPKHDDGEFE_OFFSET))(this, a1, a2);
		}

		::LBPCONKMBIK* CNBDPMMFAKP(::System::UInt32 a1, ::BFMENAAGPDN* a2)
		{
			return ((::LBPCONKMBIK*(*)(::PVOID, ::System::UInt32, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_CNBDPMMFAKP_OFFSET))(this, a1, a2);
		}

		::System::Void NIDLOMMNNOL(::LBPCONKMBIK* a1, ::BFMENAAGPDN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LBPCONKMBIK*, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_NIDLOMMNNOL_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::KNAFLABINOA*>* HNHDPOGCOOH(::BFMENAAGPDN* a1)
		{
			return ((::System::Collections::Generic::List_1<::KNAFLABINOA*>*(*)(::PVOID, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_HNHDPOGCOOH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::FAPMPKICHBB*>* MJGCAKHGOFJ(::BFMENAAGPDN* a1)
		{
			return ((::System::Collections::Generic::List_1<::FAPMPKICHBB*>*(*)(::PVOID, ::BFMENAAGPDN*))((::PBYTE)hIl2Cpp + MMJNOJDBGFL_MJGCAKHGOFJ_OFFSET))(this, a1);
		}

	};
