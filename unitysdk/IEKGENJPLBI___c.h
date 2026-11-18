#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T> class Func_1; }

#define IEKGENJPLBI___C_NFAJBGGCBIL_OFFSET UNITYSDK_OFFSET(0x15EACB60)
#define IEKGENJPLBI___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EACB10)
#define IEKGENJPLBI___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15EACB50)

inline static constexpr unsigned int IEKGENJPLBI___c_TypeDefinitionIndex = 87674;

class IEKGENJPLBI___c : public ::System::Object
{
public:
	static ::System::Func_1<::UnityEngine::Vector2>** StaticGet___9__21_3()
	{
		return (::System::Func_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(IEKGENJPLBI___c_TypeDefinitionIndex)->GetStaticField(0x37CC0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEKGENJPLBI___c_TypeDefinitionIndex)->GetStaticField(0x37CC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEKGENJPLBI___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGENJPLBI___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 NFAJBGGCBIL()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKGENJPLBI___C_NFAJBGGCBIL_OFFSET))(this);
	}
};
