#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }

#define KHPPABKBLAC_AMEGHCHMIOD_OFFSET UNITYSDK_OFFSET(0x1862A630)
#define KHPPABKBLAC_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x1862A0C0)
#define KHPPABKBLAC_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x1862A120)
#define KHPPABKBLAC_MPKNBCJENDJ_OFFSET UNITYSDK_OFFSET(0x1862A1A0)
#define KHPPABKBLAC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1862A5D0)
#define KHPPABKBLAC_PGALFPNDMLD_OFFSET UNITYSDK_OFFSET(0x1862A4F0)
#define KHPPABKBLAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1862A0B0)

inline static constexpr unsigned int KHPPABKBLAC_TypeDefinitionIndex = 47229;

class KHPPABKBLAC : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* JCLJIOFBHPL; // 0x10
	::System::Int32 JFFKPLIAGFK; // 0x18
	::UnityEngine::Vector3 GJLBPCDCCCF; // 0x1C
	::System::Boolean DMDEOOPKPGP; // 0x28
	::System::Byte _padding0[0x3];
	::System::UInt32 FLEDHKJGAEP; // 0x2C
	::System::UInt32 DEDOHCODKHN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC__CTOR_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC_FFCPIEDHBDP_OFFSET))(this);
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void PGALFPNDMLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC_PGALFPNDMLD_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void AMEGHCHMIOD(::MoleMole::Config::ConfigPosRot* NAMKHHBACEC, ::System::UInt32 DEDOHCODKHN, ::System::UInt32 FLEDHKJGAEP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KHPPABKBLAC_AMEGHCHMIOD_OFFSET))(this, NAMKHHBACEC, DEDOHCODKHN, FLEDHKJGAEP);
	}

	::System::Void MPKNBCJENDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPPABKBLAC_MPKNBCJENDJ_OFFSET))(this);
	}
};
