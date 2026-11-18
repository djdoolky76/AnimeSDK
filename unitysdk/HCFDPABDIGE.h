#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNCFCFIKCF.h"

class HGAJKHIMKJP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCFDPABDIGE_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x17E34430)
#define HCFDPABDIGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E34370)

inline static constexpr unsigned int HCFDPABDIGE_TypeDefinitionIndex = 61139;

class HCFDPABDIGE : public ::IPNCFCFIKCF
{
public:
	::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::HGAJKHIMKJP*>* GLOIMHAJJIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HGAJKHIMKJP*>*))((::PBYTE)hIl2Cpp + HCFDPABDIGE__CTOR_OFFSET))(this, GLOIMHAJJIE);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HCFDPABDIGE_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}
};
