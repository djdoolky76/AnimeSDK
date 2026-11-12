#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GFEDEMJFHGH_AFGOKEGCPFP_OFFSET UNITYSDK_OFFSET(0x16926B40)
#define GFEDEMJFHGH_ANHNNGJLLGD_OFFSET UNITYSDK_OFFSET(0x16926B80)
#define GFEDEMJFHGH_CTOR_OFFSET UNITYSDK_OFFSET(0x16926BD0)
#define GFEDEMJFHGH_INPNDMDOIKN_OFFSET UNITYSDK_OFFSET(0x16926AB0)
#define GFEDEMJFHGH_MAAEMMGFPNB_OFFSET UNITYSDK_OFFSET(0x16926B00)

inline static constexpr unsigned int GFEDEMJFHGH_TypeDefinitionIndex = 74187;

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
