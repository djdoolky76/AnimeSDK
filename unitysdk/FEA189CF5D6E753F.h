#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B40C58B97EDE4B1C;

#define FEA189CF5D6E753F_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x3D003F0)
#define FEA189CF5D6E753F_F1C3E07C92727AEE_OFFSET UNITYSDK_OFFSET(0x1E1B4C0)
#define FEA189CF5D6E753F__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8060)

inline static constexpr unsigned int FEA189CF5D6E753F_TypeDefinitionIndex = 10863;

class FEA189CF5D6E753F : public ::System::Object
{
public:
	::B40C58B97EDE4B1C* E674806EB1CA31C9; // 0x10

	::System::Object* A4CFF253D56ECB2D()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEA189CF5D6E753F_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEA189CF5D6E753F__CTOR_OFFSET))(this);
	}

	::System::Boolean F1C3E07C92727AEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FEA189CF5D6E753F_F1C3E07C92727AEE_OFFSET))(this);
	}
};
