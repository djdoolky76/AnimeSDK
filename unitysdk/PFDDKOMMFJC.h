#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define PFDDKOMMFJC_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE9FF0)
#define PFDDKOMMFJC_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0xCAE9B70)
#define PFDDKOMMFJC_INIT_OFFSET UNITYSDK_OFFSET(0xCAE9BB0)
#define PFDDKOMMFJC_MPAELIHNAGL_OFFSET UNITYSDK_OFFSET(0xCAE9D10)
#define PFDDKOMMFJC_REFRESH_OFFSET UNITYSDK_OFFSET(0xCAE9C20)
#define PFDDKOMMFJC_RESET_OFFSET UNITYSDK_OFFSET(0xCAE9C60)

inline static constexpr unsigned int PFDDKOMMFJC_TypeDefinitionIndex = 71547;

	class PFDDKOMMFJC : public ::System::Object
	{
	public:
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x10
		::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x18
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_REFRESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_RESET_OFFSET))(this);
		}

		::System::Void MPAELIHNAGL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFDDKOMMFJC_MPAELIHNAGL_OFFSET))(this);
		}

	};
