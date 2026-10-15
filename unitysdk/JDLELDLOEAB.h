#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDLELDLOEAB;

#define JDLELDLOEAB_AJDOGHFLPLK_OFFSET UNITYSDK_OFFSET(0x165D5890)
#define JDLELDLOEAB_CTOR_OFFSET UNITYSDK_OFFSET(0x165D5920)
#define JDLELDLOEAB_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x165D59E0)
#define JDLELDLOEAB_GGBGENILMNA_OFFSET UNITYSDK_OFFSET(0x165D5AA0)
#define JDLELDLOEAB_IJHFDHHGAHI_OFFSET UNITYSDK_OFFSET(0x165D5A60)
#define JDLELDLOEAB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x165D5A20)
#define JDLELDLOEAB_OHGMOCABAID_OFFSET UNITYSDK_OFFSET(0x165D5930)
#define JDLELDLOEAB_PABKEMGJJAO_OFFSET UNITYSDK_OFFSET(0x165D5AE0)
#define JDLELDLOEAB_PKEDBHLJBMJ_OFFSET UNITYSDK_OFFSET(0x165D5990)

	class JDLELDLOEAB : public ::System::Object
	{
	public:
		static ::JDLELDLOEAB** StaticGet_MKNGMMPGMCL()
		{
			return (::JDLELDLOEAB**)UnitySDK::FromName("", "JDLELDLOEAB")->GetStaticField(0x6F1C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_CTOR_OFFSET))(this);
		}

		static ::JDLELDLOEAB* AJDOGHFLPLK()
		{
			return ((::JDLELDLOEAB*(*)())((::PBYTE)hIl2Cpp + JDLELDLOEAB_AJDOGHFLPLK_OFFSET))();
		}

		::System::Single OHGMOCABAID(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDLELDLOEAB_OHGMOCABAID_OFFSET))(this, a1);
		}

		::System::Single PKEDBHLJBMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_PKEDBHLJBMJ_OFFSET))(this);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IJHFDHHGAHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_IJHFDHHGAHI_OFFSET))(this);
		}

		::System::Single GGBGENILMNA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLELDLOEAB_GGBGENILMNA_OFFSET))(this);
		}

		::System::Void PABKEMGJJAO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDLELDLOEAB_PABKEMGJJAO_OFFSET))(this, a1);
		}

	};
