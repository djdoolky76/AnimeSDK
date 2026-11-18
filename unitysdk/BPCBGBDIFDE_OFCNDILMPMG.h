#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPCBGBDIFDE;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole::Cameras { class CameraTrackBlending; }

#define BPCBGBDIFDE_OFCNDILMPMG_DGNFPJBJADP_OFFSET UNITYSDK_OFFSET(0xFF95090)
#define BPCBGBDIFDE_OFCNDILMPMG_EDOIGDMNDIN_OFFSET UNITYSDK_OFFSET(0xFF950F0)
#define BPCBGBDIFDE_OFCNDILMPMG_FKPJBEOCGBG_OFFSET UNITYSDK_OFFSET(0xFF94F40)
#define BPCBGBDIFDE_OFCNDILMPMG_KADEHNONMKK_OFFSET UNITYSDK_OFFSET(0xFF950A0)
#define BPCBGBDIFDE_OFCNDILMPMG__CTOR_OFFSET UNITYSDK_OFFSET(0xFF94F30)

inline static constexpr unsigned int BPCBGBDIFDE_OFCNDILMPMG_TypeDefinitionIndex = 78647;

class BPCBGBDIFDE_OFCNDILMPMG : public ::System::Object
{
public:
	::MoleMole::MonoGamepadVirtualCursor* MLBOEALKNGH; // 0x10
	::BPCBGBDIFDE* KLHPEBKNIFB; // 0x18
	::MoleMole::Cameras::CameraTrackBlending* MBNOFPBEFAO; // 0x20
	::System::Single MJILMIEGKLH; // 0x28
	::System::Single MCJNJJFKIDO; // 0x2C
	::System::Single IMLLDOHDCNC; // 0x30
	::System::Single OGMHMCOMLLM; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OFCNDILMPMG__CTOR_OFFSET))(this);
	}

	::System::Void FKPJBEOCGBG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OFCNDILMPMG_FKPJBEOCGBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DGNFPJBJADP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OFCNDILMPMG_DGNFPJBJADP_OFFSET))(this);
	}

	::System::Void KADEHNONMKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OFCNDILMPMG_KADEHNONMKK_OFFSET))(this);
	}

	::System::Void EDOIGDMNDIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCBGBDIFDE_OFCNDILMPMG_EDOIGDMNDIN_OFFSET))(this);
	}
};
