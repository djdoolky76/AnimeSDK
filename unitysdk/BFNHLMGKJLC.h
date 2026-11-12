#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DKOAMFCJHNH.h"
class KPBPOKHFDOM;
class ODGPPIHLOFF;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFNHLMGKJLC_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0xBAFBA80)
#define BFNHLMGKJLC_ANHDEECJEIO_OFFSET UNITYSDK_OFFSET(0xBAFBDA0)
#define BFNHLMGKJLC_BBLFBKOJICH_OFFSET UNITYSDK_OFFSET(0xBAFB860)
#define BFNHLMGKJLC_CTOR_OFFSET UNITYSDK_OFFSET(0xBAFB4C0)
#define BFNHLMGKJLC_EBCALPMCMIK_OFFSET UNITYSDK_OFFSET(0xBAFB560)
#define BFNHLMGKJLC_JMBNCPKAAIK_OFFSET UNITYSDK_OFFSET(0xBAFB760)
#define BFNHLMGKJLC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xBAFBA20)
#define BFNHLMGKJLC_LADMGDAOLOD_1_OFFSET UNITYSDK_OFFSET(0xBAFB960)
#define BFNHLMGKJLC_LADMGDAOLOD_OFFSET UNITYSDK_OFFSET(0xBAFB8E0)
#define BFNHLMGKJLC_LOLCEELNPEG_OFFSET UNITYSDK_OFFSET(0xBAFB570)

inline static constexpr unsigned int BFNHLMGKJLC_TypeDefinitionIndex = 50274;

	class BFNHLMGKJLC : public ::DKOAMFCJHNH
	{
	public:
		::System::Collections::Generic::List_1<::KPBPOKHFDOM*>* IJLKCIMDOKH; // 0x40
		::System::Action* HFPLJBAPGGA; // 0x48
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
