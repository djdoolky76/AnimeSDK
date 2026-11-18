#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAKNFNPNEJG.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNADPDOALOF_AADMKJECFHN_OFFSET UNITYSDK_OFFSET(0x1516C290)
#define KNADPDOALOF_IPEDIFKMHFP_OFFSET UNITYSDK_OFFSET(0x1516C460)
#define KNADPDOALOF_JGMHFMBHJOL_OFFSET UNITYSDK_OFFSET(0x1516C380)
#define KNADPDOALOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1516C200)

inline static constexpr unsigned int KNADPDOALOF_TypeDefinitionIndex = 59672;

class KNADPDOALOF : public ::DAKNFNPNEJG
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* KLCDGEHOKEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADPDOALOF__CTOR_OFFSET))(this);
	}

	::System::Void AADMKJECFHN(::System::Int32 KKIAHJODOIA, ::System::Collections::Generic::List_1<::System::Int32>* OBGAJBOIOCH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + KNADPDOALOF_AADMKJECFHN_OFFSET))(this, KKIAHJODOIA, OBGAJBOIOCH);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JGMHFMBHJOL(::System::Int32 KKIAHJODOIA)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KNADPDOALOF_JGMHFMBHJOL_OFFSET))(this, KKIAHJODOIA);
	}

	::System::Void IPEDIFKMHFP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNADPDOALOF_IPEDIFKMHFP_OFFSET))(this);
	}
};
