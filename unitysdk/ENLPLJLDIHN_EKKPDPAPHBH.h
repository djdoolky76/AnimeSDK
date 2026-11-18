#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ENLPLJLDIHN;
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }

#define ENLPLJLDIHN_EKKPDPAPHBH_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x141821A0)
#define ENLPLJLDIHN_EKKPDPAPHBH__CTOR_OFFSET UNITYSDK_OFFSET(0x14182190)

inline static constexpr unsigned int ENLPLJLDIHN_EKKPDPAPHBH_TypeDefinitionIndex = 43112;

class ENLPLJLDIHN_EKKPDPAPHBH : public ::System::Object
{
public:
	::ENLPLJLDIHN* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_EKKPDPAPHBH__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::ConfigGalGameAvatarShowSettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*))((::PBYTE)hIl2Cpp + ENLPLJLDIHN_EKKPDPAPHBH_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
