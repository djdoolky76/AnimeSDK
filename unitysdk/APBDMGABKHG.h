#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class PEMFMPIPNJN;

#define APBDMGABKHG_AINHIKKGKJM_OFFSET UNITYSDK_OFFSET(0x1DA29370)
#define APBDMGABKHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA28740)
#define APBDMGABKHG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DA28750)

inline static constexpr unsigned int APBDMGABKHG_TypeDefinitionIndex = 43458;

	class APBDMGABKHG : public ::System::Object
	{
	public:
		::PEMFMPIPNJN* PDENFEFCAGN; // 0x10
		::FDPALAEIHPB* FKINCGODJEP; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::PEMFMPIPNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::PEMFMPIPNJN*))((::PBYTE)hIl2Cpp + APBDMGABKHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBDMGABKHG_EXECUTE_OFFSET))(this);
		}

		::System::Void AINHIKKGKJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBDMGABKHG_AINHIKKGKJM_OFFSET))(this);
		}

	};
