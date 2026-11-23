#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B87A72D647E9A4B4_AE1594AA4F616855_OFFSET UNITYSDK_OFFSET(0x2A5E930)
#define B87A72D647E9A4B4_E323DD1D794D280F_OFFSET UNITYSDK_OFFSET(0x2A5E6C0)
#define B87A72D647E9A4B4_EE5DC6A76D2934CF_OFFSET UNITYSDK_OFFSET(0x2A5E8F0)
#define B87A72D647E9A4B4_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x2A5E970)
#define B87A72D647E9A4B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B87A72D647E9A4B4_TypeDefinitionIndex = 18364;

class B87A72D647E9A4B4 : public ::System::Object
{
public:
	::UnityEngine::Vector3 E137172C19FB2798; // 0x10
	::UnityEngine::Vector3 BA1BBA0AF3585989; // 0x1C
	::UnityEngine::Vector3 F79E7A3CA9A848D7; // 0x28
	::System::Boolean FEB155E359578E03; // 0x34
	::System::Byte _padding0[0x3];
	::System::Single B89B5EC44ADC94BA; // 0x38

	::System::Void E323DD1D794D280F(::UnityEngine::Vector3 A0C1F1E95D5F6CA9, ::System::Single EB5670302F34D4B7, ::System::Single AFAF97ADF509E295)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B87A72D647E9A4B4_E323DD1D794D280F_OFFSET))(this, A0C1F1E95D5F6CA9, EB5670302F34D4B7, AFAF97ADF509E295);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B87A72D647E9A4B4_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::UnityEngine::Vector3 AE1594AA4F616855(::System::Single AFAF97ADF509E295)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + B87A72D647E9A4B4_AE1594AA4F616855_OFFSET))(this, AFAF97ADF509E295);
	}

	::System::Void EE5DC6A76D2934CF(::UnityEngine::Vector3 A79C61B0EE319CDE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + B87A72D647E9A4B4_EE5DC6A76D2934CF_OFFSET))(this, A79C61B0EE319CDE);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B87A72D647E9A4B4__CTOR_OFFSET))(this);
	}
};
