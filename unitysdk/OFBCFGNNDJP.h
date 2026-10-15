#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFBCFGNNDJP;

#define OFBCFGNNDJP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBE3BDC0)
#define OFBCFGNNDJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE3BC50)
#define OFBCFGNNDJP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xBE3BC90)
#define OFBCFGNNDJP_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xBE3BF00)
#define OFBCFGNNDJP_MBCKHKAIAMI_OFFSET UNITYSDK_OFFSET(0xBE3C010)
#define OFBCFGNNDJP_NCOLBFBALEJ_OFFSET UNITYSDK_OFFSET(0xBE3BD20)
#define OFBCFGNNDJP_OHJPCAPBGLJ_OFFSET UNITYSDK_OFFSET(0xBE3BF80)
#define OFBCFGNNDJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBE3BE40)

inline static constexpr unsigned int OFBCFGNNDJP_TypeDefinitionIndex = 73746;

	class OFBCFGNNDJP : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int64>* OHNIPOOJLJE; // 0x10
		// static const ::System::Object AOMNOMFEDDJ; // 0x0
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_CTOR_OFFSET))(this, a1);
		}

		::System::Void DADCFBHGLOH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_DADCFBHGLOH_OFFSET))(this, a1);
		}

		::System::Boolean ACMKLFOMPFC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_ACMKLFOMPFC_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::Boolean OHJPCAPBGLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_OHJPCAPBGLJ_OFFSET))(this);
		}

		::System::Boolean MBCKHKAIAMI(::OFBCFGNNDJP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFBCFGNNDJP*))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_MBCKHKAIAMI_OFFSET))(this, a1);
		}

		::System::Void NCOLBFBALEJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFBCFGNNDJP_NCOLBFBALEJ_OFFSET))(this, a1);
		}

	};
