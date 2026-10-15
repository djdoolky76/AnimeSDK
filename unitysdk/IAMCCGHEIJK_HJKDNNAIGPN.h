#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMCCGHEIJK;

#define IAMCCGHEIJK_HJKDNNAIGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x15E0E390)
#define IAMCCGHEIJK_HJKDNNAIGPN_ENTER_OFFSET UNITYSDK_OFFSET(0x15E10820)
#define IAMCCGHEIJK_HJKDNNAIGPN_EXIT_OFFSET UNITYSDK_OFFSET(0x15E108C0)
#define IAMCCGHEIJK_HJKDNNAIGPN_TICK_OFFSET UNITYSDK_OFFSET(0x15E10870)

inline static constexpr unsigned int IAMCCGHEIJK_HJKDNNAIGPN_TypeDefinitionIndex = 62285;

	class IAMCCGHEIJK_HJKDNNAIGPN : public ::System::Object
	{
	public:
		::IAMCCGHEIJK* CFKHNPGEAJA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_HJKDNNAIGPN_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_HJKDNNAIGPN_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::IAMCCGHEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAMCCGHEIJK*))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_HJKDNNAIGPN_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMCCGHEIJK_HJKDNNAIGPN_EXIT_OFFSET))(this);
		}

	};
