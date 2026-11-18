#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LJEOIAJKOCP;
namespace MoleMole::Config { class ConfigCameraCutsceneGroups; }

#define LJEOIAJKOCP_FFIONHJLACJ_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0xD431BF0)
#define LJEOIAJKOCP_FFIONHJLACJ__CTOR_OFFSET UNITYSDK_OFFSET(0xD431BE0)

inline static constexpr unsigned int LJEOIAJKOCP_FFIONHJLACJ_TypeDefinitionIndex = 43680;

class LJEOIAJKOCP_FFIONHJLACJ : public ::System::Object
{
public:
	::LJEOIAJKOCP* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEOIAJKOCP_FFIONHJLACJ__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraCutsceneGroups* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraCutsceneGroups*))((::PBYTE)hIl2Cpp + LJEOIAJKOCP_FFIONHJLACJ_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
