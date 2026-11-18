#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DPNKMCKEDNE_OJAPPJBMAKE.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPNKMCKEDNE_KINHOBNPBIA_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x13532A70)
#define DPNKMCKEDNE_KINHOBNPBIA_MMIBGPPNMNM_OFFSET UNITYSDK_OFFSET(0x135327C0)
#define DPNKMCKEDNE_KINHOBNPBIA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13532960)
#define DPNKMCKEDNE_KINHOBNPBIA_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x13532B30)
#define DPNKMCKEDNE_KINHOBNPBIA__CTOR_OFFSET UNITYSDK_OFFSET(0x135326C0)

inline static constexpr unsigned int DPNKMCKEDNE_KINHOBNPBIA_TypeDefinitionIndex = 89171;

class DPNKMCKEDNE_KINHOBNPBIA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* PGOBKCGNOBO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::DPKOIBEFPAO>* AJONODKGDME; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_KINHOBNPBIA__CTOR_OFFSET))(this);
	}

	::System::Boolean MMIBGPPNMNM(::DPNKMCKEDNE_OJAPPJBMAKE JMINOGAOFIL)
	{
		return ((::System::Boolean(*)(::PVOID, ::DPNKMCKEDNE_OJAPPJBMAKE))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_KINHOBNPBIA_MMIBGPPNMNM_OFFSET))(this, JMINOGAOFIL);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_KINHOBNPBIA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean IBBLCAOMCKF(::System::String* MCOHLHMKLIP, ::DPKOIBEFPAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_KINHOBNPBIA_IBBLCAOMCKF_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean OMPFLKCBFHF(::System::String* DCJCHGOGLMF, ::DPKOIBEFPAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_KINHOBNPBIA_OMPFLKCBFHF_OFFSET))(this, DCJCHGOGLMF, EGEGIMGMJHN);
	}
};
