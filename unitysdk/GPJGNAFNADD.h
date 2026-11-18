#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUIHideItem_ShowStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRealtimeQTEButtonBaseController; }
namespace MoleMole { class UIWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class RectTransform; }

#define GPJGNAFNADD_CPIKOFPGFCJ_OFFSET UNITYSDK_OFFSET(0x10FFAC90)
#define GPJGNAFNADD_GFGLHFDGDND_OFFSET UNITYSDK_OFFSET(0x10FFA320)
#define GPJGNAFNADD_IBILOPNDMLM_OFFSET UNITYSDK_OFFSET(0x10FFAD40)
#define GPJGNAFNADD_KHCENADDHMI_OFFSET UNITYSDK_OFFSET(0x10FFA5E0)
#define GPJGNAFNADD_KPEAALGHDEA_OFFSET UNITYSDK_OFFSET(0x10FFAAB0)
#define GPJGNAFNADD_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x10FFA690)
#define GPJGNAFNADD_MBKANDBFLDA_OFFSET UNITYSDK_OFFSET(0x10FFA950)
#define GPJGNAFNADD__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFA1C0)

inline static constexpr unsigned int GPJGNAFNADD_TypeDefinitionIndex = 50694;

class GPJGNAFNADD : public ::System::Object
{
public:
	::UnityEngine::RectTransform* CPPNBBNOKND; // 0x10
	::MoleMole::UIWindowController* MAMPMBFMOIP; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::UIRealtimeQTEButtonBaseController*>* IKBNFJJEMFB; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* OFOIIBBGMOF; // 0x28
	::MonoUIHideItem_ShowStatus BBOHLDAGGMF; // 0x30

	::System::Void _ctor(::MoleMole::UIWindowController* FKJAHOHKHAK, ::UnityEngine::RectTransform* BEACCICIIFN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + GPJGNAFNADD__CTOR_OFFSET))(this, FKJAHOHKHAK, BEACCICIIFN);
	}

	::System::Void GFGLHFDGDND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJGNAFNADD_GFGLHFDGDND_OFFSET))(this);
	}

	::System::Void KHCENADDHMI(::System::String* AELLPLBJELA, ::MonoUIHideItem_ShowStatus PPIEKMKPHAD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MonoUIHideItem_ShowStatus))((::PBYTE)hIl2Cpp + GPJGNAFNADD_KHCENADDHMI_OFFSET))(this, AELLPLBJELA, PPIEKMKPHAD);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPJGNAFNADD_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void MBKANDBFLDA(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPJGNAFNADD_MBKANDBFLDA_OFFSET))(this, AELLPLBJELA);
	}

	::System::Void KPEAALGHDEA(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPJGNAFNADD_KPEAALGHDEA_OFFSET))(this, AELLPLBJELA);
	}

	static ::System::Boolean CPIKOFPGFCJ(::System::String* AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + GPJGNAFNADD_CPIKOFPGFCJ_OFFSET))(AELLPLBJELA);
	}

	::System::Void IBILOPNDMLM(::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPJGNAFNADD_IBILOPNDMLM_OFFSET))(this, AELLPLBJELA);
	}
};
