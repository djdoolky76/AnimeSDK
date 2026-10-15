#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLPPDCIBMIH;
class KFAGEHPLMJB;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LHOBLLEMGHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C70E040)
#define LHOBLLEMGHB_IMJBBMDHELL_OFFSET UNITYSDK_OFFSET(0x1C70DFA0)
#define LHOBLLEMGHB_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1C70DDC0)

inline static constexpr unsigned int LHOBLLEMGHB_TypeDefinitionIndex = 36406;

	class LHOBLLEMGHB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KFAGEHPLMJB*>* LLMFAKCDCAN; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* LAOFHIFKIHP; // 0x18
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* LALCKJHOKNM; // 0x20
		::System::Collections::Generic::Dictionary_2<::GLPPDCIBMIH*, ::GLPPDCIBMIH*>* HNIAIOODBPM; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* LGPMMEKDJBI; // 0x30
		::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* IIPKOGDAGDB; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* MDFPEIGHPGB; // 0x40
		::System::Single GCAAKFMGBCD; // 0x48
		::System::Single GPBBCJJAKBA; // 0x4C
		::System::Boolean JECEBPGHPEL; // 0x50
		::System::Boolean IJFFGFMPBMC; // 0x51
		::System::Boolean IKEEBEEMGKF; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single JGLCJOFEHDC; // 0x54
		::System::Single AGEPOJNIINL; // 0x58
		::System::Single BNBDNCAMJMP; // 0x5C
		::System::Single AMCIECIDIMJ; // 0x60
		::System::Single OHIBNOLMGJD; // 0x64
		::System::Int32 EKIFEEDFHFE; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBLLEMGHB_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBLLEMGHB_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void IMJBBMDHELL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHOBLLEMGHB_IMJBBMDHELL_OFFSET))(this);
		}

	};
