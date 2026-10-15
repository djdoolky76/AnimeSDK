#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace RPG::Client { class PlanetFesAvatarMoveController; }

#define BFGCPOGGCBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB163060)
#define BFGCPOGGCBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB163000)
#define BFGCPOGGCBD_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0xB162DE0)
#define BFGCPOGGCBD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB162D00)
#define BFGCPOGGCBD_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0xB162D60)
#define BFGCPOGGCBD_OLOIKBMODMD_OFFSET UNITYSDK_OFFSET(0xB162F90)
#define BFGCPOGGCBD_ONNHAFEOBBC_OFFSET UNITYSDK_OFFSET(0xB162E40)

	class BFGCPOGGCBD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::Client::PlanetFesAvatarMoveController* NJMJBABGLFJ; // 0x18
		// static const ::System::String* HHNDOOAICDE; // 0x0
		// static const ::System::String* LDLMMCFDHHE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PlanetFesAvatarMoveController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarMoveController*))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void LPFBANCOMPE(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_LPFBANCOMPE_OFFSET))(this, a1, a2);
		}

		::System::Void EBLMEKGAKAD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_EBLMEKGAKAD_OFFSET))(this, a1);
		}

		::System::Void ONNHAFEOBBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_ONNHAFEOBBC_OFFSET))(this);
		}

		::System::Boolean OLOIKBMODMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_OLOIKBMODMD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGCPOGGCBD_DISPOSE_OFFSET))(this);
		}

	};
