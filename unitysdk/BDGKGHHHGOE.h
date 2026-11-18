#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraMoveModeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDGKGHHHGOE_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x15069720)
#define BDGKGHHHGOE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15069640)
#define BDGKGHHHGOE__CTOR_OFFSET UNITYSDK_OFFSET(0x15069590)

inline static constexpr unsigned int BDGKGHHHGOE_TypeDefinitionIndex = 79066;

class BDGKGHHHGOE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Cameras::CameraMoveModeData*>* FDAAEBOADFM; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* NMNJPPKHFPC; // 0x18
	::System::Boolean JPEKLBJJCNM; // 0x20
	::System::Boolean KAIPNNAHAJM; // 0x21
	::System::Byte _padding0[0x2];
	::MoleMole::Config::CameraDelayMoveMode EEDPBGENLMM; // 0x24
	::System::Int32 IEGAJAAHDHK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGKGHHHGOE__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGKGHHHGOE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDGKGHHHGOE_JCFJOKPIFPL_OFFSET))(this);
	}
};
