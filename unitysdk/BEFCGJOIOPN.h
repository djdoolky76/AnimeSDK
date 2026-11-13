#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BEFCGJOIOPN_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x1A934510)
#define BEFCGJOIOPN_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x1A934550)
#define BEFCGJOIOPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A934590)
#define BEFCGJOIOPN_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x1A934490)
#define BEFCGJOIOPN_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x1A9344D0)

inline static constexpr unsigned int BEFCGJOIOPN_TypeDefinitionIndex = 74184;

	class BEFCGJOIOPN : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* KELNBCLEFDH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFCGJOIOPN_CTOR_OFFSET))(this);
		}

		::System::Int32 INPNDMDOIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFCGJOIOPN_INPNDMDOIKN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MAAEMMGFPNB()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFCGJOIOPN_MAAEMMGFPNB_OFFSET))(this);
		}

		::System::Int32 AFGOKEGCPFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFCGJOIOPN_AFGOKEGCPFP_OFFSET))(this);
		}

		::System::Int32 ANHNNGJLLGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFCGJOIOPN_ANHNNGJLLGD_OFFSET))(this);
		}

	};
