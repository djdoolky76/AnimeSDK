#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MFMEMCEICGJ___C_HPCOIPCKAJN_OFFSET UNITYSDK_OFFSET(0x16C7B920)
#define MFMEMCEICGJ___C_NJIODMCOJCC_OFFSET UNITYSDK_OFFSET(0x16C7B850)
#define MFMEMCEICGJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C7B800)
#define MFMEMCEICGJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7B840)

inline static constexpr unsigned int MFMEMCEICGJ___c_TypeDefinitionIndex = 72745;

class MFMEMCEICGJ___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__8_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFMEMCEICGJ___c_TypeDefinitionIndex)->GetStaticField(0x3BC60);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFMEMCEICGJ___c_TypeDefinitionIndex)->GetStaticField(0x3BC68);
	}
	static ::System::Action** StaticGet___9__8_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(MFMEMCEICGJ___c_TypeDefinitionIndex)->GetStaticField(0x3BC70);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFMEMCEICGJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ___C__CTOR_OFFSET))(this);
	}

	::System::Void NJIODMCOJCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ___C_NJIODMCOJCC_OFFSET))(this);
	}

	::System::Void HPCOIPCKAJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFMEMCEICGJ___C_HPCOIPCKAJN_OFFSET))(this);
	}
};
