#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/System/ValueType.h"

class OGJNHDLJIBM;
namespace Foundation { class FunctionalObject; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIHPPIOGEHJ_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x5ED3A0)
#define IIHPPIOGEHJ_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x5ED320)
#define IIHPPIOGEHJ_KMMIPNMJILI_OFFSET UNITYSDK_OFFSET(0x5ED330)
#define IIHPPIOGEHJ_LHLLFJDCOOF_1_OFFSET UNITYSDK_OFFSET(0xF875D10)
#define IIHPPIOGEHJ_LHLLFJDCOOF_OFFSET UNITYSDK_OFFSET(0xF875A10)
#define IIHPPIOGEHJ_LOIDBHKDEPO_OFFSET UNITYSDK_OFFSET(0x5ED260)
#define IIHPPIOGEHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x5ED240)

inline static constexpr unsigned int IIHPPIOGEHJ_TypeDefinitionIndex = 68433;

struct alignas(8) IIHPPIOGEHJ
{
	::OGJNHDLJIBM* IACAHMDOGAK; // 0x10
	::System::Action* PLGLKDMLBLE; // 0x18
	::Foundation::FunctionalObject* PEHFCAJMBAB; // 0x20

	::System::Void _ctor(::OGJNHDLJIBM* LIMJMNLDICJ, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::OGJNHDLJIBM*, ::System::Action*))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ__CTOR_OFFSET))(this, LIMJMNLDICJ, EJGDHCIBCJH);
	}

	::System::Void LOIDBHKDEPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_LOIDBHKDEPO_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM(::PAMPOBIPLCE DCCDGIDJFKB)
	{
		return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_KKFNPONHGEM_OFFSET))(this, DCCDGIDJFKB);
	}

	::System::Void KMMIPNMJILI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_KMMIPNMJILI_OFFSET))(this);
	}

	/*
	static ::IIHPPIOGEHJ LHLLFJDCOOF(::System::Collections::Generic::List_1<::PAMPOBIPLCE>* OAEIEGCFDNA, ::System::Action* EJGDHCIBCJH)
	{
		return ((::IIHPPIOGEHJ(*)(::System::Collections::Generic::List_1<::PAMPOBIPLCE>*, ::System::Action*))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_LHLLFJDCOOF_OFFSET))(OAEIEGCFDNA, EJGDHCIBCJH);
	}
	*/

	/*
	static ::IIHPPIOGEHJ LHLLFJDCOOF_1(::PAMPOBIPLCE DCCDGIDJFKB, ::System::Action* EJGDHCIBCJH)
	{
		return ((::IIHPPIOGEHJ(*)(::PAMPOBIPLCE, ::System::Action*))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_LHLLFJDCOOF_1_OFFSET))(DCCDGIDJFKB, EJGDHCIBCJH);
	}
	*/

	::System::Void DIEPHAJCGOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IIHPPIOGEHJ_DIEPHAJCGOE_OFFSET))(this, KOIBHLHLMFC);
	}
};
