#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

class LHKMKCIPOLD;
template <typename T1, typename T2> class FPGOJPDAAAM_2;

#define CIHNIDOHCJN_ADBONMLBCOM_OFFSET UNITYSDK_OFFSET(0x159DC150)
#define CIHNIDOHCJN_ILEJLDBMGJO_OFFSET UNITYSDK_OFFSET(0x159DC130)
#define CIHNIDOHCJN_NDCNJHOOIKI_OFFSET UNITYSDK_OFFSET(0x159DC160)
#define CIHNIDOHCJN_ODAJFMCOAAK_OFFSET UNITYSDK_OFFSET(0x159DC140)
#define CIHNIDOHCJN_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x159DC080)
#define CIHNIDOHCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x159DC120)

inline static constexpr unsigned int CIHNIDOHCJN_TypeDefinitionIndex = 52308;

class CIHNIDOHCJN : public ::JJEJBPGJPJN
{
public:
	::FPGOJPDAAAM_2<::System::UInt32, ::System::UInt32>* _OLOOHPHCIIP_k__BackingField; // 0x88
	::FPGOJPDAAAM_2<::LHKMKCIPOLD*, ::System::UInt32>* _KKEAPIJBAEM_k__BackingField; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNIDOHCJN__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNIDOHCJN_ONCREATEPROPERTY_OFFSET))(this);
	}

	::System::Void ILEJLDBMGJO(::FPGOJPDAAAM_2<::LHKMKCIPOLD*, ::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FPGOJPDAAAM_2<::LHKMKCIPOLD*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CIHNIDOHCJN_ILEJLDBMGJO_OFFSET))(this, EGEGIMGMJHN);
	}

	::FPGOJPDAAAM_2<::System::UInt32, ::System::UInt32>* ODAJFMCOAAK()
	{
		return ((::FPGOJPDAAAM_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNIDOHCJN_ODAJFMCOAAK_OFFSET))(this);
	}

	::System::Void ADBONMLBCOM(::FPGOJPDAAAM_2<::System::UInt32, ::System::UInt32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FPGOJPDAAAM_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CIHNIDOHCJN_ADBONMLBCOM_OFFSET))(this, EGEGIMGMJHN);
	}

	::FPGOJPDAAAM_2<::LHKMKCIPOLD*, ::System::UInt32>* NDCNJHOOIKI()
	{
		return ((::FPGOJPDAAAM_2<::LHKMKCIPOLD*, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHNIDOHCJN_NDCNJHOOIKI_OFFSET))(this);
	}
};
