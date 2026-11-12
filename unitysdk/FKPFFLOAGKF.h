#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OIDEBLCILOL.h"
namespace System { class String; }

#define FKPFFLOAGKF_AFODNAKOLGP_OFFSET UNITYSDK_OFFSET(0x16794D40)
#define FKPFFLOAGKF_CTOR_OFFSET UNITYSDK_OFFSET(0x16794E20)
#define FKPFFLOAGKF_DCPHJCMNPJN_OFFSET UNITYSDK_OFFSET(0x16794CD0)
#define FKPFFLOAGKF_KPLDMOMNCLF_OFFSET UNITYSDK_OFFSET(0x16794DB0)

inline static constexpr unsigned int FKPFFLOAGKF_TypeDefinitionIndex = 74359;

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
