#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define POODDBJFAPA_LDAOJFDMFIA_EDFPEPDFMJD_OFFSET UNITYSDK_OFFSET(0x119A64D0)
#define POODDBJFAPA_LDAOJFDMFIA_GJJLPIBPCKO_OFFSET UNITYSDK_OFFSET(0x119A6530)
#define POODDBJFAPA_LDAOJFDMFIA_IDAIKCJCMIF_OFFSET UNITYSDK_OFFSET(0x119A6510)
#define POODDBJFAPA_LDAOJFDMFIA_LLCDPHLMBKK_OFFSET UNITYSDK_OFFSET(0x119A64F0)
#define POODDBJFAPA_LDAOJFDMFIA_MJKMNHMCGLO_OFFSET UNITYSDK_OFFSET(0x119A6570)
#define POODDBJFAPA_LDAOJFDMFIA_NCFMPEGCGLK_OFFSET UNITYSDK_OFFSET(0x119A6550)
#define POODDBJFAPA_LDAOJFDMFIA__CTOR_OFFSET UNITYSDK_OFFSET(0x119A64C0)

inline static constexpr unsigned int POODDBJFAPA_LDAOJFDMFIA_TypeDefinitionIndex = 90264;

class POODDBJFAPA_LDAOJFDMFIA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JGGELGHFMLI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA__CTOR_OFFSET))(this);
	}

	::System::Boolean EDFPEPDFMJD(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_EDFPEPDFMJD_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean LLCDPHLMBKK(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_LLCDPHLMBKK_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean IDAIKCJCMIF(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_IDAIKCJCMIF_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean GJJLPIBPCKO(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_GJJLPIBPCKO_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean NCFMPEGCGLK(::System::Int32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_NCFMPEGCGLK_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Boolean MJKMNHMCGLO(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POODDBJFAPA_LDAOJFDMFIA_MJKMNHMCGLO_OFFSET))(this, HAAEBCOBKFF);
	}
};
