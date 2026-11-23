#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDF7D296447401FC_MainThreadDispatcher;
namespace System { class Action; }

#define EDF7D296447401FC_EEEF6E542B97E58D_OFFSET UNITYSDK_OFFSET(0x39E2660)
#define EDF7D296447401FC_F7B0A23335A3DB16_OFFSET UNITYSDK_OFFSET(0x39E2700)
#define EDF7D296447401FC__CTOR_OFFSET UNITYSDK_OFFSET(0x39E2680)

inline static constexpr unsigned int EDF7D296447401FC_TypeDefinitionIndex = 12695;

class EDF7D296447401FC : public ::System::Object
{
public:
	static ::EDF7D296447401FC** StaticGet_F2EC524D6D748B5F()
	{
		return (::EDF7D296447401FC**)Il2CppClass::FromTypeDefinitionIndex(EDF7D296447401FC_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::EDF7D296447401FC_MainThreadDispatcher* B03E4B018E236AB1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDF7D296447401FC__CTOR_OFFSET))(this);
	}

	static ::EDF7D296447401FC* F7B0A23335A3DB16()
	{
		return ((::EDF7D296447401FC*(*)())((::PBYTE)hIl2Cpp + EDF7D296447401FC_F7B0A23335A3DB16_OFFSET))();
	}

	::System::Void EEEF6E542B97E58D(::System::Action* BC288918C940C7A6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + EDF7D296447401FC_EEEF6E542B97E58D_OFFSET))(this, BC288918C940C7A6);
	}
};
