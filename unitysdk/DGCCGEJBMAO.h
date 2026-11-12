#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCCGEJBMAO_ReceiveMode.h"
#include "unitysdk/System/Object.h"
class HNNHKPKCMJD;
class JCFCFDIFPFB;
class PCOMPBCHHKC;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DGCCGEJBMAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76A600)
#define DGCCGEJBMAO_EIDJHELAEIF_OFFSET UNITYSDK_OFFSET(0x1D76AB40)
#define DGCCGEJBMAO_FAONPKIHDJF_OFFSET UNITYSDK_OFFSET(0x1D76A6C0)
#define DGCCGEJBMAO_MBAMPMNANII_OFFSET UNITYSDK_OFFSET(0x1D76A890)

inline static constexpr unsigned int DGCCGEJBMAO_TypeDefinitionIndex = 37830;

	class DGCCGEJBMAO : public ::System::Object
	{
	public:
		::System::Action_1<::PCOMPBCHHKC*>* MHGNKLFKMHA; // 0x10
		::System::Collections::Generic::List_1<::PCOMPBCHHKC*>* HJDCJIJJFCH; // 0x18
		::System::Action_1<::PCOMPBCHHKC*>* IFGNNFBOGIA; // 0x20
		::HNNHKPKCMJD* FLMODBLFAGD; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* AHGGAFJBEPH; // 0x30
		::DGCCGEJBMAO_ReceiveMode NMLENCDBHAA; // 0x38
		::System::Void _ctor(::HNNHKPKCMJD* a1, ::System::Action_1<::PCOMPBCHHKC*>* a2, ::System::Action_1<::PCOMPBCHHKC*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HNNHKPKCMJD*, ::System::Action_1<::PCOMPBCHHKC*>*, ::System::Action_1<::PCOMPBCHHKC*>*))((::PBYTE)hIl2Cpp + DGCCGEJBMAO_CTOR_OFFSET))(this, a1, a2, a3);
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
