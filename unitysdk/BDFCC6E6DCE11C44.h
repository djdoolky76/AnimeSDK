#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F37EA96937710617/BF28CE3F1BFBE948.h"
#include "unitysdk/System/Object.h"

class E702A542455CF5D3;
namespace System { class String; }
namespace System { class Type; }

#define BDFCC6E6DCE11C44_A3369A09C0585970_OFFSET UNITYSDK_OFFSET(0x3C3C410)
#define BDFCC6E6DCE11C44__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB8490)

inline static constexpr unsigned int BDFCC6E6DCE11C44_TypeDefinitionIndex = 11597;

class BDFCC6E6DCE11C44 : public ::System::Object
{
public:
	::System::String* FC1D29B360A1527E; // 0x10
	::System::String* EC2038339CE86133; // 0x18
	::Il2CppArray<::System::Object*>* F0D3F87128A7C4CA; // 0x20
	::System::Object* F4AA3B885BA7CEE6; // 0x28
	::Il2CppArray<::System::Type*>* BB06DD9D5A1B2E60; // 0x30
	::System::Boolean F4FFD7387E8EA314; // 0x38
	::System::Byte _padding0[0x3];
	::F37EA96937710617::BF28CE3F1BFBE948 FAF031F6A028659B; // 0x3C

	::System::Void A3369A09C0585970(::E702A542455CF5D3* B46B7303C006179F)
	{
		return ((::System::Void(*)(::PVOID, ::E702A542455CF5D3*))((::PBYTE)hIl2Cpp + BDFCC6E6DCE11C44_A3369A09C0585970_OFFSET))(this, B46B7303C006179F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDFCC6E6DCE11C44__CTOR_OFFSET))(this);
	}
};
