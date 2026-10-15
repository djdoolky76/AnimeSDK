#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"

#define AAEIIPCFEPB_BIICNENFMFI_OFFSET UNITYSDK_OFFSET(0xB0C54B0)
#define AAEIIPCFEPB_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C5500)
#define AAEIIPCFEPB_LLCCPJOIBFL_OFFSET UNITYSDK_OFFSET(0xB0C53C0)
#define AAEIIPCFEPB_NMCLKCEIJNM_OFFSET UNITYSDK_OFFSET(0xB0C5410)
#define AAEIIPCFEPB_NNMMAILCCNI_OFFSET UNITYSDK_OFFSET(0xB0C5370)
#define AAEIIPCFEPB_PDEGMJOIPMO_OFFSET UNITYSDK_OFFSET(0xB0C5460)
#define AAEIIPCFEPB_PHCMMBPPKAC_OFFSET UNITYSDK_OFFSET(0xB0C5320)

inline static constexpr unsigned int AAEIIPCFEPB_TypeDefinitionIndex = 65811;

	class AAEIIPCFEPB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NFPLNBKIFCF; // 0x10
		::Il2CppArray<::System::UInt32>* JGDPPABELDM; // 0x18
		::Il2CppArray<::System::UInt32>* PCJGJAEHCND; // 0x20
		::Il2CppArray<::System::UInt32>* KHOLIMOINKG; // 0x28
		::System::UInt32 FHDBCDEPBAK; // 0x30
		::System::UInt32 DDPBFAENJJN; // 0x34
		::System::Boolean HEBGIMNNPKI; // 0x38
		::System::Byte _padding0[0x3];
		::FJPMJPEKLJL MIFOKOEHKOG; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* PHCMMBPPKAC()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_PHCMMBPPKAC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NNMMAILCCNI()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_NNMMAILCCNI_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* LLCCPJOIBFL()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_LLCCPJOIBFL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* NMCLKCEIJNM()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_NMCLKCEIJNM_OFFSET))(this);
		}

		::System::UInt32 PDEGMJOIPMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_PDEGMJOIPMO_OFFSET))(this);
		}

		::System::UInt32 BIICNENFMFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEIIPCFEPB_BIICNENFMFI_OFFSET))(this);
		}

	};
