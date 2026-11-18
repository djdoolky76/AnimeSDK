#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PMLCKJBHLLB;
namespace System { class Action; }

#define EIMLPOHLDBE_HKDDPELAGIB_DLBMDFDDJBI_OFFSET UNITYSDK_OFFSET(0x1D9F6050)
#define EIMLPOHLDBE_HKDDPELAGIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F6040)

inline static constexpr unsigned int EIMLPOHLDBE_HKDDPELAGIB_TypeDefinitionIndex = 93286;

class EIMLPOHLDBE_HKDDPELAGIB : public ::System::Object
{
public:
	::PMLCKJBHLLB* HBMGHPEPBNC; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMLPOHLDBE_HKDDPELAGIB__CTOR_OFFSET))(this);
	}

	::System::Void DLBMDFDDJBI(::System::Int32 BHCIOLMNDPO, ::System::UInt32 LONODJEPPGL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + EIMLPOHLDBE_HKDDPELAGIB_DLBMDFDDJBI_OFFSET))(this, BHCIOLMNDPO, LONODJEPPGL);
	}
};
