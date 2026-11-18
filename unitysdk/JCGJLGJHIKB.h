#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCGJLGJHIKB_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1306BEF0)
#define JCGJLGJHIKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1306BCE0)

inline static constexpr unsigned int JCGJLGJHIKB_TypeDefinitionIndex = 50881;

class JCGJLGJHIKB : public ::IPNCFCFIKCF
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* FGIJGLMKNBB; // 0x20
	::System::Int32 NACGJJKHEJE; // 0x28

	::System::Void _ctor(::System::Int32 NACGJJKHEJE, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + JCGJLGJHIKB__CTOR_OFFSET))(this, NACGJJKHEJE, GLOIMHAJJIE);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + JCGJLGJHIKB_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
