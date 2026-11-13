#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPLNDLJPMP_ELoadingWaitType.h"
#include "unitysdk/System/Object.h"

#define DAPLNDLJPMP_MKBHJHCIJFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B13C760)
#define DAPLNDLJPMP_MKBHJHCIJFM_CGPBIGCEMCC_OFFSET UNITYSDK_OFFSET(0x1B13C680)
#define DAPLNDLJPMP_MKBHJHCIJFM_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x1B1391C0)
#define DAPLNDLJPMP_MKBHJHCIJFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B13B020)
#define DAPLNDLJPMP_MKBHJHCIJFM_IBCMCHCAELH_OFFSET UNITYSDK_OFFSET(0x1B139160)
#define DAPLNDLJPMP_MKBHJHCIJFM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B139030)
#define DAPLNDLJPMP_MKBHJHCIJFM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1B13C700)
#define DAPLNDLJPMP_MKBHJHCIJFM_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0x1B13C670)

inline static constexpr unsigned int DAPLNDLJPMP_MKBHJHCIJFM_TypeDefinitionIndex = 60965;

	class DAPLNDLJPMP_MKBHJHCIJFM : public ::System::Object
	{
	public:
		::System::Single IFEPJHGNCOI; // 0x10
		::DAPLNDLJPMP_ELoadingWaitType MLAIFKFKKAC; // 0x14
		static ::System::Single* StaticGet_NABECBBIMHH()
		{
			return (::System::Single*)UnitySDK::FromName("", "MKBHJHCIJFM")->GetStaticField(0x11C30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_CCTOR_OFFSET))();
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Single CGPBIGCEMCC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_CGPBIGCEMCC_OFFSET))(this);
		}

		::System::Single IBCMCHCAELH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_IBCMCHCAELH_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::DAPLNDLJPMP_ELoadingWaitType a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAPLNDLJPMP_ELoadingWaitType))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Single CIHFGJDCHIA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DAPLNDLJPMP_MKBHJHCIJFM_CIHFGJDCHIA_OFFSET))(this);
		}

	};
