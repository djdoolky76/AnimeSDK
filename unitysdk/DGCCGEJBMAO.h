#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCCGEJBMAO_ReceiveMode.h"
#include "unitysdk/System/Object.h"
class HNNHKPKCMJD;
class JCFCFDIFPFB;
class PCOMPBCHHKC;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGCCGEJBMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E8EB0)
#define DGCCGEJBMAO_EIDJHELAEIF_OFFSET UNITYSDK_OFFSET(0x1C5E93F0)
#define DGCCGEJBMAO_FAONPKIHDJF_OFFSET UNITYSDK_OFFSET(0x1C5E8F70)
#define DGCCGEJBMAO_MBAMPMNANII_OFFSET UNITYSDK_OFFSET(0x1C5E9140)

	class DGCCGEJBMAO : public ::System::Object
	{
	public:
		::System::Action* MHGNKLFKMHA; // 0x10
		::System::Collections::Generic::List_1<::System::Int32>* AHGGAFJBEPH; // 0x18
		::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* HJDCJIJJFCH; // 0x20
		::System::Action* IFGNNFBOGIA; // 0x28
		::HNNHKPKCMJD* FLMODBLFAGD; // 0x30
		::DGCCGEJBMAO_ReceiveMode NMLENCDBHAA; // 0x38
		::System::Void _ctor(::HNNHKPKCMJD* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HNNHKPKCMJD*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + DGCCGEJBMAO_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FAONPKIHDJF(::JCFCFDIFPFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCFCFDIFPFB*))((::PBYTE)hIl2Cpp + DGCCGEJBMAO_FAONPKIHDJF_OFFSET))(this, a1);
		}

		::System::Void EIDJHELAEIF(::PCOMPBCHHKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCOMPBCHHKC*))((::PBYTE)hIl2Cpp + DGCCGEJBMAO_EIDJHELAEIF_OFFSET))(this, a1);
		}

		::PCOMPBCHHKC* MBAMPMNANII(::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* a1)
		{
			return ((::PCOMPBCHHKC*(*)(::PVOID, ::System::Collections::Generic::List_1<::PCOMPBCHHKC*>*))((::PBYTE)hIl2Cpp + DGCCGEJBMAO_MBAMPMNANII_OFFSET))(this, a1);
		}

	};
