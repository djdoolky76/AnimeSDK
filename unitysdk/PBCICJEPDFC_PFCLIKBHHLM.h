#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PBCICJEPDFC_PFCLIKBHHLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9691F0)

inline static constexpr unsigned int PBCICJEPDFC_PFCLIKBHHLM_TypeDefinitionIndex = 38038;

	class PBCICJEPDFC_PFCLIKBHHLM : public ::System::Object
	{
	public:
		::System::Boolean LIIBOMIEAAD; // 0x10
		::System::Boolean HCOFMFKFMDK; // 0x11
		::System::Boolean CDMHNLPIIAN; // 0x12
		::System::Byte _padding0[0x1];
		::System::Int32 GGBKDAAPFIJ; // 0x14
		::System::UInt64 AICKGOAFPPB; // 0x18
		::System::Single EKJLEDKEALO; // 0x20
		::System::UInt32 HIDAOCJCABH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBCICJEPDFC_PFCLIKBHHLM_CTOR_OFFSET))(this);
		}

	};
