#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNEIKBJFKFD_CTOR_OFFSET UNITYSDK_OFFSET(0x1586BCF0)

inline static constexpr unsigned int FNEIKBJFKFD_TypeDefinitionIndex = 64062;

	class FNEIKBJFKFD : public ::System::Object
	{
	public:
		::System::Int32 JNNPCJNKGCO; // 0x10
		::System::Int32 IALODFOILFM; // 0x14
		::System::Boolean LCAIPCKFPIK; // 0x18
		::System::Boolean JMCMPFPDEHG; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 GIKONDLPHFG; // 0x1C
		::System::Int32 JCLPHKAKHMK; // 0x20
		::System::Byte _padding1[0x4];
		::System::Double AEADKHHKGGG; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIKBJFKFD_CTOR_OFFSET))(this);
		}

	};
