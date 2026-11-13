#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define KMICHODBLBN_CTOR_OFFSET UNITYSDK_OFFSET(0x18F77490)
#define KMICHODBLBN_FIOBFGIGDGA_OFFSET UNITYSDK_OFFSET(0x18F76AA0)
#define KMICHODBLBN_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x18F77450)
#define KMICHODBLBN_INIT_OFFSET UNITYSDK_OFFSET(0x18F76990)
#define KMICHODBLBN_REFRESH_OFFSET UNITYSDK_OFFSET(0x18F77410)
#define KMICHODBLBN_RESET_OFFSET UNITYSDK_OFFSET(0x18F76A00)

inline static constexpr unsigned int KMICHODBLBN_TypeDefinitionIndex = 71548;

	class KMICHODBLBN : public ::System::Object
	{
	public:
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x10
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x18
		::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMICHODBLBN_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + KMICHODBLBN_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMICHODBLBN_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMICHODBLBN_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMICHODBLBN_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void FIOBFGIGDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMICHODBLBN_FIOBFGIGDGA_OFFSET))(this);
		}

	};
