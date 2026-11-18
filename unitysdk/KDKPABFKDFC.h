#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDKPABFKDFC_BNFAFIGKGOJ_OFFSET UNITYSDK_OFFSET(0x13C53AB0)
#define KDKPABFKDFC_PFCCCNHLPIK_OFFSET UNITYSDK_OFFSET(0x13C53A90)
#define KDKPABFKDFC__CTOR_OFFSET UNITYSDK_OFFSET(0x13C53A30)

inline static constexpr unsigned int KDKPABFKDFC_TypeDefinitionIndex = 83460;

class KDKPABFKDFC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* FEPHHHKKDOI; // 0x10
	::System::UInt32 NACGJJKHEJE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPABFKDFC__CTOR_OFFSET))(this);
	}

	::System::Boolean PFCCCNHLPIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPABFKDFC_PFCCCNHLPIK_OFFSET))(this);
	}

	::System::Int32 BNFAFIGKGOJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDKPABFKDFC_BNFAFIGKGOJ_OFFSET))(this);
	}
};
