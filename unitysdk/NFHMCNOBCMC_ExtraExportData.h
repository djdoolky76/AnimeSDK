#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define NFHMCNOBCMC_EXTRAEXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC46E380)

inline static constexpr unsigned int NFHMCNOBCMC_ExtraExportData_TypeDefinitionIndex = 50085;

	class NFHMCNOBCMC_ExtraExportData : public ::System::Object
	{
	public:
		::System::String* cookieMapPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFHMCNOBCMC_EXTRAEXPORTDATA_CTOR_OFFSET))(this);
		}

	};
