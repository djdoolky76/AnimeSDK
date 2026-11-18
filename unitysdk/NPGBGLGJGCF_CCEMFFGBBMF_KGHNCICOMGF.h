#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_EBAAGFGJMDA_OFFSET UNITYSDK_OFFSET(0x10600390)
#define NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x10600330)
#define NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_GHBPNGDLDJE_OFFSET UNITYSDK_OFFSET(0x106002B0)
#define NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10600440)
#define NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF__CTOR_OFFSET UNITYSDK_OFFSET(0x106001F0)

inline static constexpr unsigned int NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_TypeDefinitionIndex = 59318;

class NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF : public ::System::Object
{
public:
	// static const ::System::Single OMDNMIOFDBJ; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* KPBCAPFLEIG; // 0x10
	::System::Nullable_1<::System::Object*> OBIPHBKODPP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF__CTOR_OFFSET))(this);
	}

	::System::Void GHBPNGDLDJE(::System::Int32 DFPJIBPFIKM, ::System::Single IOCDCGJIMHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_GHBPNGDLDJE_OFFSET))(this, DFPJIBPFIKM, IOCDCGJIMHB);
	}

	::System::Void FLHNGDLANDC(::System::Int32 DFPJIBPFIKM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_FLHNGDLANDC_OFFSET))(this, DFPJIBPFIKM);
	}

	::System::Boolean EBAAGFGJMDA(::System::Int32 DFPJIBPFIKM, ::System::Single HDKFMIAEAGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_EBAAGFGJMDA_OFFSET))(this, DFPJIBPFIKM, HDKFMIAEAGP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_CCEMFFGBBMF_KGHNCICOMGF_NPOLNFDBOOD_OFFSET))(this);
	}
};
