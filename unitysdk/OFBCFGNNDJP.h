#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFBCFGNNDJP;

#define OFBCFGNNDJP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xC6F47E0)
#define OFBCFGNNDJP_CTOR_OFFSET UNITYSDK_OFFSET(0xC6F4670)
#define OFBCFGNNDJP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xC6F46B0)
#define OFBCFGNNDJP_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xC6F4920)
#define OFBCFGNNDJP_MBCKHKAIAMI_OFFSET UNITYSDK_OFFSET(0xC6F4A30)
#define OFBCFGNNDJP_NCOLBFBALEJ_OFFSET UNITYSDK_OFFSET(0xC6F4740)
#define OFBCFGNNDJP_OHJPCAPBGLJ_OFFSET UNITYSDK_OFFSET(0xC6F49A0)
#define OFBCFGNNDJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xC6F4860)

inline static constexpr unsigned int OFBCFGNNDJP_TypeDefinitionIndex = 75870;

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
