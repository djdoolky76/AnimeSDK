#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GCDKMHIIJMO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JMOKAJOLANN.h"

class CEBAOHFKOJI;
class DBEEELCGJOA;
class KBBMNEOODNE;
class KKKGEINKDJK;
class MHNMKCKALOP;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MBEJCKOGGMB_BMHLHFCGCAN_OFFSET UNITYSDK_OFFSET(0x1D99C4E0)
#define MBEJCKOGGMB_DAMAFCMFDDF_OFFSET UNITYSDK_OFFSET(0x1D99C430)
#define MBEJCKOGGMB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1D99BFE0)
#define MBEJCKOGGMB_GNBCBKLBBLI_OFFSET UNITYSDK_OFFSET(0x1D99BD90)
#define MBEJCKOGGMB_ICCJEICBEPO_OFFSET UNITYSDK_OFFSET(0x1D99C2F0)
#define MBEJCKOGGMB_LOHCNELPAHA_OFFSET UNITYSDK_OFFSET(0x1D99BC30)
#define MBEJCKOGGMB_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1D99C3D0)
#define MBEJCKOGGMB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D99C160)
#define MBEJCKOGGMB_PPFPFPJIJGF_OFFSET UNITYSDK_OFFSET(0x1D99C020)
#define MBEJCKOGGMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D99B880)
#define MBEJCKOGGMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D99BC90)

inline static constexpr unsigned int MBEJCKOGGMB_TypeDefinitionIndex = 93423;

class MBEJCKOGGMB : public ::System::Object
{
public:
	::DBEEELCGJOA* DJHFOGHIFEJ; // 0x10
	::KBBMNEOODNE* NJDJBEKLLLE; // 0x18
	::DBEEELCGJOA* MNBFHEJELDO; // 0x20
	::MHNMKCKALOP* HMPEEAAAGHE; // 0x28
	::System::Collections::Generic::List_1<::GCDKMHIIJMO>* AEAFLLDMMPH; // 0x30
	::System::Collections::Generic::List_1<::DBEEELCGJOA*>* GDBGKNLCAAN; // 0x38
	::System::Collections::Generic::List_1<::System::UInt32>* GMIKICBOJCM; // 0x40
	::System::Collections::Generic::List_1<::CEBAOHFKOJI*>* CJFBOENKOLI; // 0x48
	::System::Int32 IFPCGBJDKCH; // 0x50
	::System::Single KLIDKECANKA; // 0x54
	::System::Boolean LKFPEDKOBIE; // 0x58
	::System::Boolean KCJAJFCELJG; // 0x59
	::System::Byte _padding0[0x2];
	::System::Single OEGPOCNNPIK; // 0x5C
	::System::UInt32 OONMJECGOHH; // 0x60
	::System::UInt32 JLLGDJPLHPB; // 0x64
	::System::Single IOMPEGPDBHB; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_TOSTRING_OFFSET))(this);
	}

	::System::UInt32 LOHCNELPAHA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_LOHCNELPAHA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::DBEEELCGJOA*>* GNBCBKLBBLI()
	{
		return ((::System::Collections::Generic::List_1<::DBEEELCGJOA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_GNBCBKLBBLI_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_DPIHOJBBGLA_OFFSET))(this);
	}

	::DBEEELCGJOA* PPFPFPJIJGF()
	{
		return ((::DBEEELCGJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_PPFPFPJIJGF_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_PHOADBJGFBE_OFFSET))(this);
	}

	::JMOKAJOLANN ICCJEICBEPO()
	{
		return ((::JMOKAJOLANN(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_ICCJEICBEPO_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_NPOLNFDBOOD_OFFSET))(this);
	}

	::KKKGEINKDJK* DAMAFCMFDDF()
	{
		return ((::KKKGEINKDJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_DAMAFCMFDDF_OFFSET))(this);
	}

	::DBEEELCGJOA* BMHLHFCGCAN()
	{
		return ((::DBEEELCGJOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEJCKOGGMB_BMHLHFCGCAN_OFFSET))(this);
	}
};
