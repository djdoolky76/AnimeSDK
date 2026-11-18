#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PONEGOPCLPF.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CDNLGHNHLAA_EBLIFADEDEI_OFFSET UNITYSDK_OFFSET(0x15326640)
#define CDNLGHNHLAA_IIFALHGJDCJ_OFFSET UNITYSDK_OFFSET(0x15326B20)
#define CDNLGHNHLAA_KFIOLEPJEGK_OFFSET UNITYSDK_OFFSET(0x15326B30)
#define CDNLGHNHLAA_KPPGGCFCFMA_OFFSET UNITYSDK_OFFSET(0x15326680)
#define CDNLGHNHLAA_NIIHMPMKICM_OFFSET UNITYSDK_OFFSET(0x153267B0)
#define CDNLGHNHLAA_NKLKPJGEELL_OFFSET UNITYSDK_OFFSET(0x153265D0)
#define CDNLGHNHLAA_PHIGMMHGJNE_OFFSET UNITYSDK_OFFSET(0x15326630)
#define CDNLGHNHLAA__CCTOR_OFFSET UNITYSDK_OFFSET(0x15326850)
#define CDNLGHNHLAA__CTOR_OFFSET UNITYSDK_OFFSET(0x15326810)

inline static constexpr unsigned int CDNLGHNHLAA_TypeDefinitionIndex = 54394;

class CDNLGHNHLAA
{
public:
	static ::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>** StaticGet_DLNCHPKIJIB()
	{
		return (::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(CDNLGHNHLAA_TypeDefinitionIndex)->GetStaticField(0x3A550);
	}
	// static const ::System::Int32 FHDFOGGJPCK = 0x1E; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGHNHLAA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDNLGHNHLAA__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>* NKLKPJGEELL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::PONEGOPCLPF, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_NKLKPJGEELL_OFFSET))(this);
	}

	::System::Int32 PHIGMMHGJNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_PHIGMMHGJNE_OFFSET))(this);
	}

	::PONEGOPCLPF EBLIFADEDEI()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_EBLIFADEDEI_OFFSET))(this);
	}

	::System::Int32 KPPGGCFCFMA(::PONEGOPCLPF GCKMEOLFCHH)
	{
		return ((::System::Int32(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_KPPGGCFCFMA_OFFSET))(this, GCKMEOLFCHH);
	}

	::System::Int32 NIIHMPMKICM(::PONEGOPCLPF FFKBEGIHIGG, ::PONEGOPCLPF CKADGLGJJAB)
	{
		return ((::System::Int32(*)(::PVOID, ::PONEGOPCLPF, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_NIIHMPMKICM_OFFSET))(this, FFKBEGIHIGG, CKADGLGJJAB);
	}

	::System::Int32 IIFALHGJDCJ(::PONEGOPCLPF MIALFKCCCPI)
	{
		return ((::System::Int32(*)(::PVOID, ::PONEGOPCLPF))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_IIFALHGJDCJ_OFFSET))(this, MIALFKCCCPI);
	}

	::PONEGOPCLPF KFIOLEPJEGK()
	{
		return ((::PONEGOPCLPF(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNLGHNHLAA_KFIOLEPJEGK_OFFSET))(this);
	}
};
