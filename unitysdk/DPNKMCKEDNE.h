#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/DPNKMCKEDNE_OJAPPJBMAKE.h"

class ADCLLHCLMOH;
class DPNKMCKEDNE_KINHOBNPBIA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DPNKMCKEDNE_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x3E4300)
#define DPNKMCKEDNE_CJNDMPANBJI_OFFSET UNITYSDK_OFFSET(0x363D90)
#define DPNKMCKEDNE_GLADIDGMIBE_OFFSET UNITYSDK_OFFSET(0x3E40A0)
#define DPNKMCKEDNE_IBBLCAOMCKF_OFFSET UNITYSDK_OFFSET(0x3E4230)
#define DPNKMCKEDNE_MMIBGPPNMNM_1_OFFSET UNITYSDK_OFFSET(0x3E4310)
#define DPNKMCKEDNE_MMIBGPPNMNM_OFFSET UNITYSDK_OFFSET(0x3E40D0)
#define DPNKMCKEDNE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x3E40C0)
#define DPNKMCKEDNE_OMPFLKCBFHF_OFFSET UNITYSDK_OFFSET(0x3E40E0)

inline static constexpr unsigned int DPNKMCKEDNE_TypeDefinitionIndex = 89169;

struct alignas(8) DPNKMCKEDNE
{
	::DPNKMCKEDNE_KINHOBNPBIA* FNEKMIEDMEP; // 0x10

	::System::Collections::Generic::Dictionary_2<::System::String*, ::DPKOIBEFPAO>*& GLADIDGMIBE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::DPKOIBEFPAO>*&(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_GLADIDGMIBE_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean MMIBGPPNMNM(::ADCLLHCLMOH* OHKILGAMLDE)
	{
		return ((::System::Boolean(*)(::PVOID, ::ADCLLHCLMOH*))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_MMIBGPPNMNM_OFFSET))(this, OHKILGAMLDE);
	}

	::System::Boolean OMPFLKCBFHF(::System::String* MCOHLHMKLIP, ::DPKOIBEFPAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_OMPFLKCBFHF_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Boolean CJNDMPANBJI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_CJNDMPANBJI_OFFSET))(this);
	}

	::System::Boolean IBBLCAOMCKF(::System::String* MCOHLHMKLIP, ::DPKOIBEFPAO& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::DPKOIBEFPAO&))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_IBBLCAOMCKF_OFFSET))(this, MCOHLHMKLIP, EGEGIMGMJHN);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Boolean MMIBGPPNMNM_1(::DPNKMCKEDNE_OJAPPJBMAKE JMINOGAOFIL)
	{
		return ((::System::Boolean(*)(::PVOID, ::DPNKMCKEDNE_OJAPPJBMAKE))((::PBYTE)hIl2Cpp + DPNKMCKEDNE_MMIBGPPNMNM_1_OFFSET))(this, JMINOGAOFIL);
	}
};
