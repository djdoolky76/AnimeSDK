#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LPPLKOIBNGP;
namespace MoleMole::Config { class ConfigCameraScreenOffsetDatas; }

#define LPPLKOIBNGP_MBDJLIEFHCL_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x125A4720)
#define LPPLKOIBNGP_MBDJLIEFHCL__CTOR_OFFSET UNITYSDK_OFFSET(0x125A4710)

inline static constexpr unsigned int LPPLKOIBNGP_MBDJLIEFHCL_TypeDefinitionIndex = 84099;

class LPPLKOIBNGP_MBDJLIEFHCL : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::LPPLKOIBNGP* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPPLKOIBNGP_MBDJLIEFHCL__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraScreenOffsetDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraScreenOffsetDatas*))((::PBYTE)hIl2Cpp + LPPLKOIBNGP_MBDJLIEFHCL_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
