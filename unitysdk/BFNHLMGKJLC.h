#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOAMFCJHNH.h"
class KPBPOKHFDOM;
class ODGPPIHLOFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFNHLMGKJLC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x151B1130)
#define BFNHLMGKJLC_ANHDEECJEIO_OFFSET UNITYSDK_OFFSET(0x151B1450)
#define BFNHLMGKJLC_BBLFBKOJICH_OFFSET UNITYSDK_OFFSET(0x151B0F10)
#define BFNHLMGKJLC_CTOR_OFFSET UNITYSDK_OFFSET(0x151B0B70)
#define BFNHLMGKJLC_EBCALPMCMIK_OFFSET UNITYSDK_OFFSET(0x151B0C10)
#define BFNHLMGKJLC_JMBNCPKAAIK_OFFSET UNITYSDK_OFFSET(0x151B0E10)
#define BFNHLMGKJLC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x151B10D0)
#define BFNHLMGKJLC_LADMGDAOLOD_1_OFFSET UNITYSDK_OFFSET(0x151B1010)
#define BFNHLMGKJLC_LADMGDAOLOD_OFFSET UNITYSDK_OFFSET(0x151B0F90)
#define BFNHLMGKJLC_LOLCEELNPEG_OFFSET UNITYSDK_OFFSET(0x151B0C20)

inline static constexpr unsigned int BFNHLMGKJLC_TypeDefinitionIndex = 50274;

	class BFNHLMGKJLC : public ::DKOAMFCJHNH
	{
	public:
		::System::Action* HFPLJBAPGGA; // 0x40
		::System::Collections::Generic::List_1<::KPBPOKHFDOM*>* IJLKCIMDOKH; // 0x48
		::System::Boolean MMEPNDLAAKL; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_CTOR_OFFSET))(this);
		}

		::System::Boolean EBCALPMCMIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_EBCALPMCMIK_OFFSET))(this);
		}

		::System::Void LOLCEELNPEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_LOLCEELNPEG_OFFSET))(this);
		}

		::System::Void JMBNCPKAAIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_JMBNCPKAAIK_OFFSET))(this);
		}

		::System::Void BBLFBKOJICH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_BBLFBKOJICH_OFFSET))(this);
		}

		::System::Void LADMGDAOLOD(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_LADMGDAOLOD_OFFSET))(this, a1);
		}

		::System::Void LADMGDAOLOD_1(::KPBPOKHFDOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBPOKHFDOM*))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_LADMGDAOLOD_1_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_KHGIKBFDLFB_OFFSET))(this);
		}

		static ::ODGPPIHLOFF* ACMKLFOMPFC()
		{
			return ((::ODGPPIHLOFF*(*)())((::PBYTE)hIl2Cpp + BFNHLMGKJLC_ACMKLFOMPFC_OFFSET))();
		}

		::System::Void ANHDEECJEIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFNHLMGKJLC_ANHDEECJEIO_OFFSET))(this);
		}

	};
