#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEFJNJDNLDP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DMNDMFKIOKI__CTOR_OFFSET UNITYSDK_OFFSET(0x19426440)

inline static constexpr unsigned int DMNDMFKIOKI_TypeDefinitionIndex = 64199;

class DMNDMFKIOKI : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IEFJNJDNLDP*>* GIKLDDBNILH; // 0x10
	::System::UInt32 JOABFILLGDD; // 0x18
	::System::Int32 ACOMLHHPCCH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMNDMFKIOKI__CTOR_OFFSET))(this);
	}
};
