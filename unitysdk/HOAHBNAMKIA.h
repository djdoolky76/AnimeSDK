#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HOAHBNAMKIA_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x1A380A10)
#define HOAHBNAMKIA_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x1A380A60)
#define HOAHBNAMKIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A380AB0)
#define HOAHBNAMKIA_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x1A380980)
#define HOAHBNAMKIA_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x1A3809D0)

inline static constexpr unsigned int HOAHBNAMKIA_TypeDefinitionIndex = 74185;

	class HOAHBNAMKIA : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* KELNBCLEFDH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAHBNAMKIA_CTOR_OFFSET))(this);
		}

		::System::Int32 INPNDMDOIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAHBNAMKIA_INPNDMDOIKN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MAAEMMGFPNB()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAHBNAMKIA_MAAEMMGFPNB_OFFSET))(this);
		}

		::System::Int32 AFGOKEGCPFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAHBNAMKIA_AFGOKEGCPFP_OFFSET))(this);
		}

		::System::Int32 ANHNNGJLLGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOAHBNAMKIA_ANHNNGJLLGD_OFFSET))(this);
		}

	};
