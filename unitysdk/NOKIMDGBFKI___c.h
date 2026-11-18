#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJDDGKFCNAJ_IGOPHLMOGAO.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define NOKIMDGBFKI___C_GBCEMHKLBKM_OFFSET UNITYSDK_OFFSET(0x105D1820)
#define NOKIMDGBFKI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105D17D0)
#define NOKIMDGBFKI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105D1810)

inline static constexpr unsigned int NOKIMDGBFKI___c_TypeDefinitionIndex = 60993;

class NOKIMDGBFKI___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NOKIMDGBFKI___c_TypeDefinitionIndex)->GetStaticField(0x48F50);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__7_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NOKIMDGBFKI___c_TypeDefinitionIndex)->GetStaticField(0x48F58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKIMDGBFKI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKIMDGBFKI___C__CTOR_OFFSET))(this);
	}

	::System::Void GBCEMHKLBKM(::DJDDGKFCNAJ_IGOPHLMOGAO PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::DJDDGKFCNAJ_IGOPHLMOGAO))((::PBYTE)hIl2Cpp + NOKIMDGBFKI___C_GBCEMHKLBKM_OFFSET))(this, PIIPCLCCOIG);
	}
};
