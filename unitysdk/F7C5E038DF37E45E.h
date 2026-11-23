#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F7C5E038DF37E45E_A22C4AF83147BEE6_OFFSET UNITYSDK_OFFSET(0x1E90040)
#define F7C5E038DF37E45E_A673489DCAC6A665_OFFSET UNITYSDK_OFFSET(0x2A41780)
#define F7C5E038DF37E45E_B6A2656EC356AF04_OFFSET UNITYSDK_OFFSET(0x2A418C0)
#define F7C5E038DF37E45E_E266D81C22241F39_OFFSET UNITYSDK_OFFSET(0x2A41AD0)
#define F7C5E038DF37E45E_EE43099C9B68007E_OFFSET UNITYSDK_OFFSET(0x2A41910)
#define F7C5E038DF37E45E_F3131332FD1A6045_OFFSET UNITYSDK_OFFSET(0x2A41730)
#define F7C5E038DF37E45E_F77A2EEABE94D751_OFFSET UNITYSDK_OFFSET(0x2A414B0)
#define F7C5E038DF37E45E__CTOR_OFFSET UNITYSDK_OFFSET(0x2A41C90)

inline static constexpr unsigned int F7C5E038DF37E45E_TypeDefinitionIndex = 18289;

class F7C5E038DF37E45E : public ::System::Object
{
public:
	static ::System::Single* StaticGet_B8D3632F3B68561D()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(F7C5E038DF37E45E_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::Il2CppArray<::System::Object*>* FFB373C5FCA0C7AD; // 0x10
	::System::Int32 F92E08BB9E09B16D; // 0x18
	::System::Int32 BAA6D730AC442D35; // 0x1C
	::System::Int32 B3DDAAE34172A8FF; // 0x20
	::UnityEngine::Vector3 FD0A803586383109; // 0x24
	::System::Single E1D1BD01C65BC150; // 0x30
	::System::Single B87DD16167534D2D; // 0x34
	::UnityEngine::Vector3 B08C50747DAF4F9E; // 0x38

	::System::Void _ctor(::System::Int32 FEF859E5415FEABC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E__CTOR_OFFSET))(this, FEF859E5415FEABC);
	}

	::System::Void F3131332FD1A6045()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_F3131332FD1A6045_OFFSET))(this);
	}

	::System::Void A673489DCAC6A665()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_A673489DCAC6A665_OFFSET))(this);
	}

	::System::Void F77A2EEABE94D751(::UnityEngine::Vector3 E53F9540C727B4AB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_F77A2EEABE94D751_OFFSET))(this, E53F9540C727B4AB);
	}

	::System::Int32 A22C4AF83147BEE6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_A22C4AF83147BEE6_OFFSET))(this);
	}

	static ::System::Single B6A2656EC356AF04(::System::Single FF0A37159A523E06)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_B6A2656EC356AF04_OFFSET))(FF0A37159A523E06);
	}

	::UnityEngine::Vector3 EE43099C9B68007E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_EE43099C9B68007E_OFFSET))(this);
	}

	::System::Void E266D81C22241F39()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F7C5E038DF37E45E_E266D81C22241F39_OFFSET))(this);
	}
};
