#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CPGCDIHLKFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBD7190)

inline static constexpr unsigned int CPGCDIHLKFF_TypeDefinitionIndex = 43957;

	class CPGCDIHLKFF : public ::System::Object
	{
	public:
		::System::UInt32 FDBBCMGMDHE; // 0x10
		::System::Int32 KGLBIIGMGBA; // 0x14
		::System::Int32 CCPEJGGJMDB; // 0x18
		::System::UInt32 FAEJCCKDNHM; // 0x1C
		::System::Int32 ELJICLFIGOI; // 0x20
		::System::UInt32 MKIOBOIGJML; // 0x24
		::System::Int32 HDADKGLHDDA; // 0x28
		::System::Boolean GGKJOBKMMFF; // 0x2C
		::System::Boolean OLJBMNMIFPO; // 0x2D
		::System::Boolean DCHIAKLKPGD; // 0x2E
		::System::Boolean CGNMDGMPGCB; // 0x2F
		::System::Boolean NNPKKKOANDD; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 NKGJJFEBONF; // 0x34
		::System::UInt32 AMFHNBKPJKI; // 0x38
		::System::Int32 JKCFBFMKHKD; // 0x3C
		::System::UInt32 FEBIEAEJGMB; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPGCDIHLKFF_CTOR_OFFSET))(this);
		}

	};
