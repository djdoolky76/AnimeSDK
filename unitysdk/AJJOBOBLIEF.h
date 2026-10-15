#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AJJOBOBLIEF_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC1AD0)

inline static constexpr unsigned int AJJOBOBLIEF_TypeDefinitionIndex = 74742;

	class AJJOBOBLIEF : public ::System::Object
	{
	public:
		::System::UInt32 JHJJDCKAKJE; // 0x10
		::System::UInt32 BAHJPNIFCFO; // 0x14
		::System::UInt32 JIJADBCBBGH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJJOBOBLIEF_CTOR_OFFSET))(this);
		}

	};
