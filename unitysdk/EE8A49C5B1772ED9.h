#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define EE8A49C5B1772ED9_A58CE643B05A10B9_OFFSET UNITYSDK_OFFSET(0x3C650C0)
#define EE8A49C5B1772ED9_A5A0352A1DF06476_OFFSET UNITYSDK_OFFSET(0x3ED3820)
#define EE8A49C5B1772ED9_A7F02F4AFBA91554_OFFSET UNITYSDK_OFFSET(0x27F80D0)
#define EE8A49C5B1772ED9_B0B7BABB96BB8E30_OFFSET UNITYSDK_OFFSET(0x3ED3B80)
#define EE8A49C5B1772ED9_BB45667C0FC196EF_OFFSET UNITYSDK_OFFSET(0x3C651C0)
#define EE8A49C5B1772ED9_F031F2E355964E9B_OFFSET UNITYSDK_OFFSET(0x3C65140)
#define EE8A49C5B1772ED9_F28FCD7D466BA88C_OFFSET UNITYSDK_OFFSET(0x3ED3900)
#define EE8A49C5B1772ED9_FC34A639BA3B60FE_OFFSET UNITYSDK_OFFSET(0x3C65180)
#define EE8A49C5B1772ED9_FD2BE139BB21C24A_OFFSET UNITYSDK_OFFSET(0x3ED3D70)
#define EE8A49C5B1772ED9__CCTOR_OFFSET UNITYSDK_OFFSET(0x3ED3DE0)
#define EE8A49C5B1772ED9__CTOR_OFFSET UNITYSDK_OFFSET(0x3ED3F80)

inline static constexpr unsigned int EE8A49C5B1772ED9_TypeDefinitionIndex = 15151;

class EE8A49C5B1772ED9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_B1306FE72813B131()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EE8A49C5B1772ED9_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::String* A6E476DEDB99637C; // 0x10
	::System::Int32 A96B867D8BBB8B00; // 0x18
	::System::Int32 A0C1F1E95D5F6CA9; // 0x1C
	::Il2CppArray<::System::String*>* BFC23782BAD1518D; // 0x20

	::System::Void FD2BE139BB21C24A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_FD2BE139BB21C24A_OFFSET))(this);
	}

	::System::String* A7F02F4AFBA91554()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_A7F02F4AFBA91554_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9__CCTOR_OFFSET))();
	}

	::System::String* A5A0352A1DF06476()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_A5A0352A1DF06476_OFFSET))(this);
	}

	::System::String* FC34A639BA3B60FE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_FC34A639BA3B60FE_OFFSET))(this);
	}

	::System::Boolean B0B7BABB96BB8E30()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_B0B7BABB96BB8E30_OFFSET))(this);
	}

	::System::Boolean F28FCD7D466BA88C(::System::String*& A5C299C395D3E1B2, ::System::String*& E937D4885DAA1AE8)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_F28FCD7D466BA88C_OFFSET))(this, A5C299C395D3E1B2, E937D4885DAA1AE8);
	}

	::System::Void _ctor(::System::String* A6E476DEDB99637C)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9__CTOR_OFFSET))(this, A6E476DEDB99637C);
	}

	::System::String* F031F2E355964E9B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_F031F2E355964E9B_OFFSET))(this);
	}

	::System::String* A58CE643B05A10B9()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_A58CE643B05A10B9_OFFSET))(this);
	}

	::System::String* BB45667C0FC196EF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE8A49C5B1772ED9_BB45667C0FC196EF_OFFSET))(this);
	}
};
