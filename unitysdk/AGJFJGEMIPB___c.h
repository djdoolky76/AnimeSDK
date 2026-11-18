#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define AGJFJGEMIPB___C_EIAHLANNLGE_OFFSET UNITYSDK_OFFSET(0x16FE5920)
#define AGJFJGEMIPB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE58D0)
#define AGJFJGEMIPB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE5910)

inline static constexpr unsigned int AGJFJGEMIPB___c_TypeDefinitionIndex = 91429;

class AGJFJGEMIPB___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__120_0()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AGJFJGEMIPB___c_TypeDefinitionIndex)->GetStaticField(0x30A80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AGJFJGEMIPB___c_TypeDefinitionIndex)->GetStaticField(0x30A88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGJFJGEMIPB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGJFJGEMIPB___C__CTOR_OFFSET))(this);
	}

	::System::Void EIAHLANNLGE(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGJFJGEMIPB___C_EIAHLANNLGE_OFFSET))(this, HFMHOELKCAJ);
	}
};
