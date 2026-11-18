#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define IIMHFNMMBEA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9FBB0)

inline static constexpr unsigned int IIMHFNMMBEA_TypeDefinitionIndex = 62770;

class IIMHFNMMBEA : public ::System::Object
{
public:
	::System::String* MCOHLHMKLIP; // 0x10
	::System::Boolean CPHDDAGKHLB; // 0x18
	::System::Boolean FBILHHBPEHD; // 0x19
	::System::Boolean LKDCFIOKGEO; // 0x1A
	::System::Byte _padding0[0x1];
	::System::Single HLMLFHCLIGL; // 0x1C
	::System::Int32 DKOFFFNEFJC; // 0x20
	::UnityEngine::Vector3 OHOGDOMNHNK; // 0x24
	::System::UInt32 DKBGLBIECBN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHFNMMBEA__CTOR_OFFSET))(this);
	}
};
