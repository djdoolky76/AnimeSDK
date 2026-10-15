#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIDEBLCILOL.h"
namespace System { class String; }

#define FKPFFLOAGKF_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0x1581A190)
#define FKPFFLOAGKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1581A270)
#define FKPFFLOAGKF_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0x1581A120)
#define FKPFFLOAGKF_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0x1581A200)

inline static constexpr unsigned int FKPFFLOAGKF_TypeDefinitionIndex = 72282;

	class FKPFFLOAGKF : public ::OIDEBLCILOL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPFFLOAGKF_CTOR_OFFSET))(this);
		}

		::System::String* DCPHJCMNPJN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPFFLOAGKF_DCPHJCMNPJN_OFFSET))(this);
		}

		::System::String* AFODNAKOLGP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPFFLOAGKF_AFODNAKOLGP_OFFSET))(this);
		}

		::System::String* KPLDMOMNCLF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPFFLOAGKF_KPLDMOMNCLF_OFFSET))(this);
		}

	};
