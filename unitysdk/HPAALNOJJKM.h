#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPAALNOJJKM_KFFBHFFIAKH_OFFSET UNITYSDK_OFFSET(0x17B1D290)
#define HPAALNOJJKM_MMMIPPJMGJN_OFFSET UNITYSDK_OFFSET(0x17B1D270)
#define HPAALNOJJKM_NADMOPHJOBB_OFFSET UNITYSDK_OFFSET(0x17B1D2A0)
#define HPAALNOJJKM_OGOANPHKEND_OFFSET UNITYSDK_OFFSET(0x17B1D280)
#define HPAALNOJJKM__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1D260)

inline static constexpr unsigned int HPAALNOJJKM_TypeDefinitionIndex = 81810;

class HPAALNOJJKM : public ::System::Object
{
public:
	::System::UInt32 _CJFJPECLLOG_k__BackingField; // 0x10
	::System::Int32 _OEIJOPCBEFO_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAALNOJJKM__CTOR_OFFSET))(this);
	}

	::System::Void MMMIPPJMGJN(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HPAALNOJJKM_MMMIPPJMGJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OGOANPHKEND()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAALNOJJKM_OGOANPHKEND_OFFSET))(this);
	}

	::System::Void KFFBHFFIAKH(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPAALNOJJKM_KFFBHFFIAKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 NADMOPHJOBB()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPAALNOJJKM_NADMOPHJOBB_OFFSET))(this);
	}
};
