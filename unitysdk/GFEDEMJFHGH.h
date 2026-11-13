#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFEDEMJFHGH_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x1B48A0B0)
#define GFEDEMJFHGH_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x1B48A0F0)
#define GFEDEMJFHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B48A140)
#define GFEDEMJFHGH_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x1B48A020)
#define GFEDEMJFHGH_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x1B48A070)

inline static constexpr unsigned int GFEDEMJFHGH_TypeDefinitionIndex = 74186;

	class GFEDEMJFHGH : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* KELNBCLEFDH; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEDEMJFHGH_CTOR_OFFSET))(this);
		}

		::System::Int32 INPNDMDOIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEDEMJFHGH_INPNDMDOIKN_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* MAAEMMGFPNB()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEDEMJFHGH_MAAEMMGFPNB_OFFSET))(this);
		}

		::System::Int32 AFGOKEGCPFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEDEMJFHGH_AFGOKEGCPFP_OFFSET))(this);
		}

		::System::Int32 ANHNNGJLLGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFEDEMJFHGH_ANHNNGJLLGD_OFFSET))(this);
		}

	};
