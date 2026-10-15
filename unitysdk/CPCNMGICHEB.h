#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class HLKPNJNJBPK;
class LJABAMCMDLI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CPCNMGICHEB_CPAHMGKNDOE_OFFSET UNITYSDK_OFFSET(0xDCD0560)
#define CPCNMGICHEB_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD0790)
#define CPCNMGICHEB_DPBKOKNCBHE_OFFSET UNITYSDK_OFFSET(0xDCD01A0)
#define CPCNMGICHEB_FFJMOKPAHBJ_OFFSET UNITYSDK_OFFSET(0xDCD00B0)
#define CPCNMGICHEB_JANCLFNGMHJ_OFFSET UNITYSDK_OFFSET(0xDCD0680)
#define CPCNMGICHEB_KAAAEJMAFOB_OFFSET UNITYSDK_OFFSET(0xDCCFFC0)
#define CPCNMGICHEB_LLJOHJBGEHM_OFFSET UNITYSDK_OFFSET(0xDCD0350)
#define CPCNMGICHEB_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xDCD0460)

inline static constexpr unsigned int CPCNMGICHEB_TypeDefinitionIndex = 71412;

	class CPCNMGICHEB : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::HLKPNJNJBPK*>* GANFMEPNBJK; // 0x60
		// static const ::System::String* GHHMIDHPMOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCNMGICHEB_CTOR_OFFSET))(this);
		}

		::System::Void KAAAEJMAFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCNMGICHEB_KAAAEJMAFOB_OFFSET))(this);
		}

		::System::Void FFJMOKPAHBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPCNMGICHEB_FFJMOKPAHBJ_OFFSET))(this);
		}

		::System::Void DPBKOKNCBHE(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CPCNMGICHEB_DPBKOKNCBHE_OFFSET))(this, a1, a2);
		}

		::System::Void NKPPGDENJAE(::System::Collections::Generic::List_1<::LJABAMCMDLI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LJABAMCMDLI*>*))((::PBYTE)hIl2Cpp + CPCNMGICHEB_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void CPAHMGKNDOE(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CPCNMGICHEB_CPAHMGKNDOE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JANCLFNGMHJ(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CPCNMGICHEB_JANCLFNGMHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LLJOHJBGEHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CPCNMGICHEB_LLJOHJBGEHM_OFFSET))(this, a1);
		}

	};
