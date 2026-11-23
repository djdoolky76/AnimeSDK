#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F37EA96937710617/BF28CE3F1BFBE948.h"
#include "unitysdk/System/Object.h"

class E702A542455CF5D3;
namespace System { class Type; }

#define F162887AB9430EDF_A3369A09C0585970_OFFSET UNITYSDK_OFFSET(0x3C3C590)
#define F162887AB9430EDF__CCTOR_OFFSET UNITYSDK_OFFSET(0x3C3C720)
#define F162887AB9430EDF__CTOR_OFFSET UNITYSDK_OFFSET(0x3C3C7D0)

inline static constexpr unsigned int F162887AB9430EDF_TypeDefinitionIndex = 11600;

class F162887AB9430EDF : public ::System::Object
{
public:
	static ::System::Object** StaticGet_A866646DC6CB6408()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(F162887AB9430EDF_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Object* EB36E27EC61F9A82; // 0x10
	::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA; // 0x18
	::System::Object* F4AA3B885BA7CEE6; // 0x20
	::Il2CppArray<::System::Type*>* BB06DD9D5A1B2E60; // 0x28
	::System::Boolean F4FFD7387E8EA314; // 0x30
	::System::Byte _padding0[0x3];
	::F37EA96937710617::BF28CE3F1BFBE948 FAF031F6A028659B; // 0x34
	::System::Type* A45AE7F564EA0518; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F162887AB9430EDF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F162887AB9430EDF__CTOR_OFFSET))(this);
	}

	::System::Void A3369A09C0585970(::E702A542455CF5D3* B46B7303C006179F)
	{
		return ((::System::Void(*)(::PVOID, ::E702A542455CF5D3*))((::PBYTE)hIl2Cpp + F162887AB9430EDF_A3369A09C0585970_OFFSET))(this, B46B7303C006179F);
	}
};
