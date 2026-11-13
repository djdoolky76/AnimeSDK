#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJAPFAECMBN_VirtualCameraConfig;
namespace Cinemachine { class CinemachineVirtualCamera; }

#define MJAPFAECMBN_BKJEHMFHBEH_OFFSET UNITYSDK_OFFSET(0x1A39DF30)
#define MJAPFAECMBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A39DFD0)
#define MJAPFAECMBN_KGNOLLBFAAH_OFFSET UNITYSDK_OFFSET(0x1A39D7E0)
#define MJAPFAECMBN_LGJGKIBHGAN_OFFSET UNITYSDK_OFFSET(0x1A39DC80)

inline static constexpr unsigned int MJAPFAECMBN_TypeDefinitionIndex = 81209;

	class MJAPFAECMBN : public ::System::Object
	{
	public:
		::MJAPFAECMBN_VirtualCameraConfig* LMAGNOACOGP; // 0x10
		::Cinemachine::CinemachineVirtualCamera* GLKOKAONKDI; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPFAECMBN_CTOR_OFFSET))(this);
		}

		::System::Void KGNOLLBFAAH(::MJAPFAECMBN_VirtualCameraConfig* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAPFAECMBN_VirtualCameraConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + MJAPFAECMBN_KGNOLLBFAAH_OFFSET))(this, a1, a2);
		}

		::System::Void LGJGKIBHGAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPFAECMBN_LGJGKIBHGAN_OFFSET))(this);
		}

		::System::Void BKJEHMFHBEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJAPFAECMBN_BKJEHMFHBEH_OFFSET))(this);
		}

	};
