#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FA78B0257AA80CDE/A31BDC30F8E3F9D7.h"
#include "unitysdk/FA78B0257AA80CDE/BCCF3BE0FF09C5DA.h"
#include "unitysdk/FA78B0257AA80CDE/E60DF0451B7A5A9E.h"
#include "unitysdk/FA78B0257AA80CDE/F1B18D5FDE840FD1.h"
#include "unitysdk/FA78B0257AA80CDE/F5EFDF940EF2096F.h"
#include "unitysdk/FA78B0257AA80CDE/F8B2725D149FD2F1.h"
#include "unitysdk/FA78B0257AA80CDE/FE1393DEC9D554B9.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_ParmInfo_TypeDefinitionIndex = 18156;

	struct alignas(4) HAPI_ParmInfo
	{
		::System::Int32 id; // 0x10
		::System::Int32 parentId; // 0x14
		::System::Int32 childIndex; // 0x18
		::FA78B0257AA80CDE::F1B18D5FDE840FD1 type; // 0x1C
		::FA78B0257AA80CDE::A31BDC30F8E3F9D7 scriptType; // 0x20
		::System::Int32 typeInfoSH; // 0x24
		::FA78B0257AA80CDE::BCCF3BE0FF09C5DA permissions; // 0x28
		::System::Int32 tagCount; // 0x2C
		::System::Int32 size; // 0x30
		::FA78B0257AA80CDE::E60DF0451B7A5A9E choiceListType; // 0x34
		::System::Int32 choiceCount; // 0x38
		::System::Int32 nameSH; // 0x3C
		::System::Int32 labelSH; // 0x40
		::System::Int32 templateNameSH; // 0x44
		::System::Int32 helpSH; // 0x48
		::System::Boolean hasMin; // 0x4C
		::System::Boolean hasMax; // 0x4D
		::System::Boolean hasUIMin; // 0x4E
		::System::Boolean hasUIMax; // 0x4F
		::System::Single min; // 0x50
		::System::Single max; // 0x54
		::System::Single UIMin; // 0x58
		::System::Single UIMax; // 0x5C
		::System::Boolean invisible; // 0x60
		::System::Boolean disabled; // 0x61
		::System::Boolean spare; // 0x62
		::System::Boolean joinNext; // 0x63
		::System::Boolean labelNone; // 0x64
		::System::Byte _padding0[0x3];
		::System::Int32 intValuesIndex; // 0x68
		::System::Int32 floatValuesIndex; // 0x6C
		::System::Int32 stringValuesIndex; // 0x70
		::System::Int32 choiceIndex; // 0x74
		::FA78B0257AA80CDE::F8B2725D149FD2F1 inputNodeType; // 0x78
		::FA78B0257AA80CDE::FE1393DEC9D554B9 inputNodeFlag; // 0x7C
		::System::Boolean isChildOfMultiParm; // 0x80
		::System::Byte _padding1[0x3];
		::System::Int32 instanceNum; // 0x84
		::System::Int32 instanceLength; // 0x88
		::System::Int32 instanceCount; // 0x8C
		::System::Int32 instanceStartOffset; // 0x90
		::FA78B0257AA80CDE::F5EFDF940EF2096F rampType; // 0x94
		::System::Int32 visibilityConditionSH; // 0x98
		::System::Int32 disabledConditionSH; // 0x9C
		::System::Boolean useMenuItemTokenAsValue; // 0xA0
	};
}
