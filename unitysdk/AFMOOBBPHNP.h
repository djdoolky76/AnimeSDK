#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFMOOBBPHNP_ILHIIDBCNEC_OFFSET UNITYSDK_OFFSET(0x181F0940)
#define AFMOOBBPHNP_KDOIBCBFBAG_OFFSET UNITYSDK_OFFSET(0x181F0930)
#define AFMOOBBPHNP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x181F08B0)
#define AFMOOBBPHNP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x181F0870)
#define AFMOOBBPHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x181F08F0)

inline static constexpr unsigned int AFMOOBBPHNP_TypeDefinitionIndex = 90767;

class AFMOOBBPHNP
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FGPNKIOLAEA; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* HGKBDPJCHHJ; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* PBNGOLHPOHH; // 0x38
	::System::String* EKHLGDLPONJ; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* EFIKLIAECPE; // 0x48
	::System::Int32 HCHOGCCIINJ; // 0x50
	::System::Int32 MKIBAHLCKJN; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMOOBBPHNP__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMOOBBPHNP_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMOOBBPHNP_ONDISABLE_OFFSET))(this);
	}

	::System::Void KDOIBCBFBAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMOOBBPHNP_KDOIBCBFBAG_OFFSET))(this);
	}

	::System::Void ILHIIDBCNEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMOOBBPHNP_ILHIIDBCNEC_OFFSET))(this);
	}
};
