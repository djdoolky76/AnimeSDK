#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define HDHBEJEBEJF___C_DPPDOJCMFNM_OFFSET UNITYSDK_OFFSET(0x16CE5370)
#define HDHBEJEBEJF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CE5320)
#define HDHBEJEBEJF___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16CE5360)

inline static constexpr unsigned int HDHBEJEBEJF___c_TypeDefinitionIndex = 61208;

class HDHBEJEBEJF___c : public ::System::Object
{
public:
	static ::System::Action_1<::System::Boolean>** StaticGet___9__30_30()
	{
		return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HDHBEJEBEJF___c_TypeDefinitionIndex)->GetStaticField(0x37AD0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(HDHBEJEBEJF___c_TypeDefinitionIndex)->GetStaticField(0x37AD8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDHBEJEBEJF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDHBEJEBEJF___C__CTOR_OFFSET))(this);
	}

	::System::Void DPPDOJCMFNM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HDHBEJEBEJF___C_DPPDOJCMFNM_OFFSET))(this, EGEGIMGMJHN);
	}
};
