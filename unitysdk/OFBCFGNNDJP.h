#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFBCFGNNDJP;

#define OFBCFGNNDJP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBE34510)
#define OFBCFGNNDJP_CTOR_OFFSET UNITYSDK_OFFSET(0xBE343A0)
#define OFBCFGNNDJP_DADCFBHGLOH_OFFSET UNITYSDK_OFFSET(0xBE343E0)
#define OFBCFGNNDJP_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xBE34650)
#define OFBCFGNNDJP_MBCKHKAIAMI_OFFSET UNITYSDK_OFFSET(0xBE34760)
#define OFBCFGNNDJP_NCOLBFBALEJ_OFFSET UNITYSDK_OFFSET(0xBE34470)
#define OFBCFGNNDJP_OHJPCAPBGLJ_OFFSET UNITYSDK_OFFSET(0xBE346D0)
#define OFBCFGNNDJP_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBE34590)

inline static constexpr unsigned int OFBCFGNNDJP_TypeDefinitionIndex = 73745;

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
