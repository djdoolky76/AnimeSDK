#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPLNDLJPMP_ELoadingWaitType.h"
#include "unitysdk/System/Object.h"

#define DAPLNDLJPMP_MKBHJHCIJFM_CCTOR_OFFSET UNITYSDK_OFFSET(0xDFD4DF0)
#define DAPLNDLJPMP_MKBHJHCIJFM_CGPBIGCEMCC_OFFSET UNITYSDK_OFFSET(0xDFD4D70)
#define DAPLNDLJPMP_MKBHJHCIJFM_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xDFCDD90)
#define DAPLNDLJPMP_MKBHJHCIJFM_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD4370)
#define DAPLNDLJPMP_MKBHJHCIJFM_IBCMCHCAELH_OFFSET UNITYSDK_OFFSET(0xDFD25B0)
#define DAPLNDLJPMP_MKBHJHCIJFM_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xDFD2480)
#define DAPLNDLJPMP_MKBHJHCIJFM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDFCC7F0)
#define DAPLNDLJPMP_MKBHJHCIJFM_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xDFD4D60)

inline static constexpr unsigned int DAPLNDLJPMP_MKBHJHCIJFM_TypeDefinitionIndex = 59688;

	class DAPLNDLJPMP_MKBHJHCIJFM : public ::System::Object
	{
	public:
		::DAPLNDLJPMP_ELoadingWaitType MLAIFKFKKAC; // 0x10
		::System::Single IFEPJHGNCOI; // 0x14
		static ::System::Single* StaticGet_NABECBBIMHH()
		{
			return (::System::Single*)UnitySDK::FromName("", "MKBHJHCIJFM")->GetStaticField(0x14150);
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
