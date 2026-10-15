#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBCICJEPDFC_PFCLIKBHHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E78B0)

inline static constexpr unsigned int PBCICJEPDFC_PFCLIKBHHLM_TypeDefinitionIndex = 37110;

	class PBCICJEPDFC_PFCLIKBHHLM : public ::System::Object
	{
	public:
		::System::Int32 GGBKDAAPFIJ; // 0x10
		::System::Boolean CDMHNLPIIAN; // 0x14
		::System::Boolean HCOFMFKFMDK; // 0x15
		::System::Boolean LIIBOMIEAAD; // 0x16
		::System::Byte _padding0[0x1];
		::System::UInt32 HIDAOCJCABH; // 0x18
		::System::Single EKJLEDKEALO; // 0x1C
		::System::UInt64 AICKGOAFPPB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCICJEPDFC_PFCLIKBHHLM_CTOR_OFFSET))(this);
		}

	};
