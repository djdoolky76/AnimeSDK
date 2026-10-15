#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHBGCPNJAMK;
class HGLIEOIBAFD;
class JAANHJGOINJ;
class JAANHJGOINJ_DBGHEJKBHCG;
class KFDKOGMNCEL;

#define KKDHAKPAGEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB45F3D0)
#define KKDHAKPAGEG_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xB45F340)
#define KKDHAKPAGEG_GET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xB45F2E0)
#define KKDHAKPAGEG_GET_REMOTEPLAYERCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xB45F300)
#define KKDHAKPAGEG_GET_REMOTEPLAYEROUTFITSTEP_OFFSET UNITYSDK_OFFSET(0xB45F320)
#define KKDHAKPAGEG_SET_BASECONFIGURATOR_OFFSET UNITYSDK_OFFSET(0xB45F2F0)
#define KKDHAKPAGEG_SET_REMOTEPLAYERCOMPONENTSTEP_OFFSET UNITYSDK_OFFSET(0xB45F310)
#define KKDHAKPAGEG_SET_REMOTEPLAYEROUTFITSTEP_OFFSET UNITYSDK_OFFSET(0xB45F330)

inline static constexpr unsigned int KKDHAKPAGEG_TypeDefinitionIndex = 62733;

	class KKDHAKPAGEG : public ::System::Object
	{
	public:
		::HGLIEOIBAFD* _RemotePlayerOutfitStep_k__BackingField; // 0x10
		::BHBGCPNJAMK* _RemotePlayerComponentStep_k__BackingField; // 0x18
		::KFDKOGMNCEL* _BaseConfigurator_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_CTOR_OFFSET))(this);
		}

		::KFDKOGMNCEL* get_BaseConfigurator()
		{
			return ((::KFDKOGMNCEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_GET_BASECONFIGURATOR_OFFSET))(this);
		}

		::System::Void set_BaseConfigurator(::KFDKOGMNCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDKOGMNCEL*))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_SET_BASECONFIGURATOR_OFFSET))(this, a1);
		}

		::BHBGCPNJAMK* get_RemotePlayerComponentStep()
		{
			return ((::BHBGCPNJAMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_GET_REMOTEPLAYERCOMPONENTSTEP_OFFSET))(this);
		}

		::System::Void set_RemotePlayerComponentStep(::BHBGCPNJAMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHBGCPNJAMK*))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_SET_REMOTEPLAYERCOMPONENTSTEP_OFFSET))(this, a1);
		}

		::HGLIEOIBAFD* get_RemotePlayerOutfitStep()
		{
			return ((::HGLIEOIBAFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_GET_REMOTEPLAYEROUTFITSTEP_OFFSET))(this);
		}

		::System::Void set_RemotePlayerOutfitStep(::HGLIEOIBAFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGLIEOIBAFD*))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_SET_REMOTEPLAYEROUTFITSTEP_OFFSET))(this, a1);
		}

		::JAANHJGOINJ_DBGHEJKBHCG* EPCCCIKOHJI(::JAANHJGOINJ* a1)
		{
			return ((::JAANHJGOINJ_DBGHEJKBHCG*(*)(::PVOID, ::JAANHJGOINJ*))((::PBYTE)hIl2Cpp + KKDHAKPAGEG_EPCCCIKOHJI_OFFSET))(this, a1);
		}

	};
