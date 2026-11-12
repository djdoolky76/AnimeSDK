#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAMCCGHEIJK;

#define IAMCCGHEIJK_HJKDNNAIGPN_CTOR_OFFSET UNITYSDK_OFFSET(0x16DC4A80)
#define IAMCCGHEIJK_HJKDNNAIGPN_ENTER_OFFSET UNITYSDK_OFFSET(0x16DC6FE0)
#define IAMCCGHEIJK_HJKDNNAIGPN_EXIT_OFFSET UNITYSDK_OFFSET(0x16DC7080)
#define IAMCCGHEIJK_HJKDNNAIGPN_TICK_OFFSET UNITYSDK_OFFSET(0x16DC7030)

inline static constexpr unsigned int IAMCCGHEIJK_HJKDNNAIGPN_TypeDefinitionIndex = 63698;

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
