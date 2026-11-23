#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EAE43032A3C5FAE8;
namespace System { class String; }

#define F27C671C4D25A95E_EA28CF291EBB2931_1_OFFSET UNITYSDK_OFFSET(0x3B4EBB0)
#define F27C671C4D25A95E_F641C2FCC673DA96_OFFSET UNITYSDK_OFFSET(0x3B4EB90)
#define F27C671C4D25A95E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F27C671C4D25A95E_TypeDefinitionIndex = 10273;

class F27C671C4D25A95E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F27C671C4D25A95E__CTOR_OFFSET))(this);
	}

	::System::String* EA28CF291EBB2931_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + F27C671C4D25A95E_EA28CF291EBB2931_1_OFFSET))(this);
	}

	::System::String* F641C2FCC673DA96(::System::String* F57B154938238684, ::EAE43032A3C5FAE8* F8DAD9E0E63F5FE9)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::EAE43032A3C5FAE8*))((::PBYTE)hIl2Cpp + F27C671C4D25A95E_F641C2FCC673DA96_OFFSET))(this, F57B154938238684, F8DAD9E0E63F5FE9);
	}
};
