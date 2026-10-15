#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystemV2Space/EnvCallbackCurveType.h"
class IACCMBNBAOE;
class PNEMLMAGOMM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KMJGLFDGPCG_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB5558C0)
#define KMJGLFDGPCG_CFIDLKLIEBK_OFFSET UNITYSDK_OFFSET(0xB555EF0)
#define KMJGLFDGPCG_CTOR_OFFSET UNITYSDK_OFFSET(0xB5561F0)
#define KMJGLFDGPCG_DHFBDMHFNIK_OFFSET UNITYSDK_OFFSET(0xB555D90)
#define KMJGLFDGPCG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB555A70)
#define KMJGLFDGPCG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5556F0)
#define KMJGLFDGPCG_MCIJCNJKGAK_OFFSET UNITYSDK_OFFSET(0xB556060)
#define KMJGLFDGPCG_MOKNCFJICIC_OFFSET UNITYSDK_OFFSET(0xB555BF0)

inline static constexpr unsigned int KMJGLFDGPCG_TypeDefinitionIndex = 49563;

	class KMJGLFDGPCG
	{
	public:
		::System::Collections::Generic::Dictionary_2<::EnviromentSystemV2Space::EnvCallbackCurveType, ::IACCMBNBAOE*>* IKDOLBLOJBC; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void MOKNCFJICIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_MOKNCFJICIC_OFFSET))(this);
		}

		::System::Void DHFBDMHFNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_DHFBDMHFNIK_OFFSET))(this);
		}

		::System::Void CFIDLKLIEBK(::EnviromentSystemV2Space::EnvCallbackCurveType a1, ::PNEMLMAGOMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvCallbackCurveType, ::PNEMLMAGOMM*))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_CFIDLKLIEBK_OFFSET))(this, a1, a2);
		}

		::System::Void MCIJCNJKGAK(::EnviromentSystemV2Space::EnvCallbackCurveType a1, ::PNEMLMAGOMM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystemV2Space::EnvCallbackCurveType, ::PNEMLMAGOMM*))((::PBYTE)hIl2Cpp + KMJGLFDGPCG_MCIJCNJKGAK_OFFSET))(this, a1, a2);
		}

	};
