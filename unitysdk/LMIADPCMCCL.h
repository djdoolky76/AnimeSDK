#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CJIEIHEDMME;
class IBENDELLLAO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LMIADPCMCCL_DIFLDGFHHKH_OFFSET UNITYSDK_OFFSET(0x16C66950)
#define LMIADPCMCCL_GAHBHCBPAMC_OFFSET UNITYSDK_OFFSET(0x16C66400)
#define LMIADPCMCCL_KJJGFAGCCDG_OFFSET UNITYSDK_OFFSET(0x16C668B0)

inline static constexpr unsigned int LMIADPCMCCL_TypeDefinitionIndex = 57067;

class LMIADPCMCCL : public ::System::Object
{
public:
	// static const ::System::Int32 CLNCIMIJJEM = 0x4C4B99; // 0x0
	// static const ::System::Int32 MNIGKFDEPOA = 0x4C4B8F; // 0x0
	// static const ::System::Int32 CNMLPDILNFJ = 0x4C4B7F; // 0x0
	// static const ::System::Int32 LAABBOIFKGK = 0x4C4B7C; // 0x0
	// static const ::System::Int32 LOEOCBFHAMB = 0x4C4B5C; // 0x0
	// static const ::System::Int32 KLHPENBMPPO = 0x4C4B72; // 0x0
	// static const ::System::Int32 BDDHLDKDIPO = 0x4C4BC6; // 0x0
	// static const ::System::Int32 EBOBFKNNIFM = 0x4C4BD9; // 0x0

	static ::System::Boolean GAHBHCBPAMC(::System::Int32 HHEGANCPILH)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + LMIADPCMCCL_GAHBHCBPAMC_OFFSET))(HHEGANCPILH);
	}

	static ::IBENDELLLAO* DIFLDGFHHKH(::System::Int32 HHEGANCPILH)
	{
		return ((::IBENDELLLAO*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LMIADPCMCCL_DIFLDGFHHKH_OFFSET))(HHEGANCPILH);
	}

	static ::System::Boolean KJJGFAGCCDG(::System::Collections::Generic::List_1<::System::Int32>* LGAIPDPHNKF, ::CJIEIHEDMME* LADPIPOMBJM)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + LMIADPCMCCL_KJJGFAGCCDG_OFFSET))(LGAIPDPHNKF, LADPIPOMBJM);
	}
};
