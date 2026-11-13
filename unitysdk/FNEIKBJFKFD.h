#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FNEIKBJFKFD_CTOR_OFFSET UNITYSDK_OFFSET(0x17F12D90)

inline static constexpr unsigned int FNEIKBJFKFD_TypeDefinitionIndex = 65507;

	class FNEIKBJFKFD : public ::System::Object
	{
	public:
		::System::Int32 JCLPHKAKHMK; // 0x10
		::System::Int32 GIKONDLPHFG; // 0x14
		::System::Double AEADKHHKGGG; // 0x18
		::System::Int32 IALODFOILFM; // 0x20
		::System::Int32 JNNPCJNKGCO; // 0x24
		::System::Boolean JMCMPFPDEHG; // 0x28
		::System::Boolean LCAIPCKFPIK; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEIKBJFKFD_CTOR_OFFSET))(this);
		}

	};
