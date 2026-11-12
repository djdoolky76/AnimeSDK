#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EICPEEPHOMI_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x163FB8D0)
#define EICPEEPHOMI_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x163FB920)
#define EICPEEPHOMI_CTOR_OFFSET UNITYSDK_OFFSET(0x163FB970)
#define EICPEEPHOMI_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x163FB840)
#define EICPEEPHOMI_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x163FB890)

inline static constexpr unsigned int EICPEEPHOMI_TypeDefinitionIndex = 74188;

	class EICPEEPHOMI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* KELNBCLEFDH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EICPEEPHOMI_CTOR_OFFSET))(this);
		}

		::System::Int32 INPNDMDOIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICPEEPHOMI_INPNDMDOIKN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MAAEMMGFPNB()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EICPEEPHOMI_MAAEMMGFPNB_OFFSET))(this);
		}

		::System::Int32 AFGOKEGCPFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICPEEPHOMI_AFGOKEGCPFP_OFFSET))(this);
		}

		::System::Int32 ANHNNGJLLGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EICPEEPHOMI_ANHNNGJLLGD_OFFSET))(this);
		}

	};
