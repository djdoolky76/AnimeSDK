#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HLFNGCCDKGE;
namespace MoleMole::Config { class ConfigEntitySharedAnimEvents; }

#define HLFNGCCDKGE_PIBFDJIEOJL_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x14708D00)
#define HLFNGCCDKGE_PIBFDJIEOJL__CTOR_OFFSET UNITYSDK_OFFSET(0x14708CF0)

inline static constexpr unsigned int HLFNGCCDKGE_PIBFDJIEOJL_TypeDefinitionIndex = 62454;

class HLFNGCCDKGE_PIBFDJIEOJL : public ::System::Object
{
public:
	::HLFNGCCDKGE* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLFNGCCDKGE_PIBFDJIEOJL__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigEntitySharedAnimEvents* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySharedAnimEvents*))((::PBYTE)hIl2Cpp + HLFNGCCDKGE_PIBFDJIEOJL_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
