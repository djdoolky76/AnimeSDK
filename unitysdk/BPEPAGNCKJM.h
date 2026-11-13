#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILPPBGLJABD.h"
class BPEPAGNCKJM;

#define BPEPAGNCKJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B600F90)
#define BPEPAGNCKJM_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0x1B600E50)
#define BPEPAGNCKJM_HKDKHAJDONC_OFFSET UNITYSDK_OFFSET(0x1B601030)
#define BPEPAGNCKJM_JGJONOPAOJK_OFFSET UNITYSDK_OFFSET(0x1B601070)
#define BPEPAGNCKJM_OPMHNOIKBGA_OFFSET UNITYSDK_OFFSET(0x1B6010B0)

inline static constexpr unsigned int BPEPAGNCKJM_TypeDefinitionIndex = 63716;

	class BPEPAGNCKJM : public ::ILPPBGLJABD
	{
	public:
		static ::BPEPAGNCKJM** StaticGet_CJOGBBKCCPA()
		{
			return (::BPEPAGNCKJM**)UnitySDK::FromName("", "BPEPAGNCKJM")->GetStaticField(0x70440);
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
