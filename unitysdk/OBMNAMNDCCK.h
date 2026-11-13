#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define OBMNAMNDCCK_ABGIIPCBPNH_OFFSET UNITYSDK_OFFSET(0x1AB8C1F0)
#define OBMNAMNDCCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8C250)
#define OBMNAMNDCCK_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x1AB8C4D0)
#define OBMNAMNDCCK_GGBGENILMNA_OFFSET UNITYSDK_OFFSET(0x1AB8C200)
#define OBMNAMNDCCK_IJHFDHHGAHI_OFFSET UNITYSDK_OFFSET(0x1AB8C430)
#define OBMNAMNDCCK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1AB8C520)
#define OBMNAMNDCCK_OAKJFIHLFFC_OFFSET UNITYSDK_OFFSET(0x1AB8C2C0)
#define OBMNAMNDCCK_OHGMOCABAID_OFFSET UNITYSDK_OFFSET(0x1AB8C330)
#define OBMNAMNDCCK_PABKEMGJJAO_OFFSET UNITYSDK_OFFSET(0x1AB8C570)
#define OBMNAMNDCCK_PKEDBHLJBMJ_OFFSET UNITYSDK_OFFSET(0x1AB8C480)

inline static constexpr unsigned int OBMNAMNDCCK_TypeDefinitionIndex = 50485;

	class OBMNAMNDCCK : public ::System::Object
	{
	public:
		::System::Single DNDNDLODGMH; // 0x10
		::System::Single MJGNNOEHHMN; // 0x14
		::System::Single AMBDPONGHKO; // 0x18
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_CTOR_OFFSET))(this, a1);
		}

		::System::Single ABGIIPCBPNH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_ABGIIPCBPNH_OFFSET))(this);
		}

		::System::Single GGBGENILMNA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_GGBGENILMNA_OFFSET))(this);
		}

		::System::Single OHGMOCABAID(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_OHGMOCABAID_OFFSET))(this, a1);
		}

		::System::Single PKEDBHLJBMJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_PKEDBHLJBMJ_OFFSET))(this);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void OAKJFIHLFFC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_OAKJFIHLFFC_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IJHFDHHGAHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_IJHFDHHGAHI_OFFSET))(this);
		}

		::System::Void PABKEMGJJAO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OBMNAMNDCCK_PABKEMGJJAO_OFFSET))(this, a1);
		}

	};
