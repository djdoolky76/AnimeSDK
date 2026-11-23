#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }

#define F66367DB6EE0A887_EFBFCEF668337064_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3C2B650)
#define F66367DB6EE0A887_EFBFCEF668337064_EB0354AC58FB077D_OFFSET UNITYSDK_OFFSET(0x3C2B7E0)
#define F66367DB6EE0A887_EFBFCEF668337064_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x3C2B6F0)
#define F66367DB6EE0A887_EFBFCEF668337064__CTOR_OFFSET UNITYSDK_OFFSET(0x3C2B780)

inline static constexpr unsigned int F66367DB6EE0A887_EFBFCEF668337064_TypeDefinitionIndex = 11506;

class F66367DB6EE0A887_EFBFCEF668337064 : public ::System::Object
{
public:
	::System::Collections::IEnumerator* F2043E839D947BB8; // 0x10
	::System::Collections::IEnumerator* E57C1246BFA607AE; // 0x18
	::System::Collections::IEnumerator* F6E56DD3600B04A4; // 0x20

	::System::Void _ctor(::System::Collections::IEnumerator* F36371476A75CAD6, ::System::Collections::IEnumerator* B0FA0F25986C991D)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerator*, ::System::Collections::IEnumerator*))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_EFBFCEF668337064__CTOR_OFFSET))(this, F36371476A75CAD6, B0FA0F25986C991D);
	}

	::System::Boolean E6CAD58306FCDCB5()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_EFBFCEF668337064_E6CAD58306FCDCB5_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_EFBFCEF668337064_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::System::Object* EB0354AC58FB077D()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + F66367DB6EE0A887_EFBFCEF668337064_EB0354AC58FB077D_OFFSET))(this);
	}
};
