#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"
class BPEPAGNCKJM;

#define BPEPAGNCKJM_CTOR_OFFSET UNITYSDK_OFFSET(0xCB44BE0)
#define BPEPAGNCKJM_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0xCB44AA0)
#define BPEPAGNCKJM_HKDKHAJDONC_OFFSET UNITYSDK_OFFSET(0xCB44C80)
#define BPEPAGNCKJM_JGJONOPAOJK_OFFSET UNITYSDK_OFFSET(0xCB44CC0)
#define BPEPAGNCKJM_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0xCB44D00)

inline static constexpr unsigned int BPEPAGNCKJM_TypeDefinitionIndex = 63716;

	class BPEPAGNCKJM : public ::ILPPBGLJABD
	{
	public:
		static ::BPEPAGNCKJM** StaticGet_CJOGBBKCCPA()
		{
			return (::BPEPAGNCKJM**)UnitySDK::FromName("", "BPEPAGNCKJM")->GetStaticField(0x73100);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPAGNCKJM_CTOR_OFFSET))(this);
		}

		static ::BPEPAGNCKJM* FMJPMFEDIJL()
		{
			return ((::BPEPAGNCKJM*(*)())((::PBYTE)hIl2Cpp + BPEPAGNCKJM_FMJPMFEDIJL_OFFSET))();
		}

		::System::Boolean HKDKHAJDONC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPAGNCKJM_HKDKHAJDONC_OFFSET))(this);
		}

		::System::Boolean JGJONOPAOJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPAGNCKJM_JGJONOPAOJK_OFFSET))(this);
		}

		::System::Boolean OPMHNOIKBGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPEPAGNCKJM_OPMHNOIKBGA_OFFSET))(this);
		}

	};
