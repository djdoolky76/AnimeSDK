#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define NFDPLOKOFCP___C_EIEBKOAGEGM_OFFSET UNITYSDK_OFFSET(0x105B5B70)
#define NFDPLOKOFCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B5B20)
#define NFDPLOKOFCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105B5B60)

inline static constexpr unsigned int NFDPLOKOFCP___c_TypeDefinitionIndex = 87682;

class NFDPLOKOFCP___c : public ::System::Object
{
public:
	static ::UnityEngine::Events::UnityAction** StaticGet___9__11_8()
	{
		return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(NFDPLOKOFCP___c_TypeDefinitionIndex)->GetStaticField(0x39840);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NFDPLOKOFCP___c_TypeDefinitionIndex)->GetStaticField(0x39848);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFDPLOKOFCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDPLOKOFCP___C__CTOR_OFFSET))(this);
	}

	::System::Void EIEBKOAGEGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFDPLOKOFCP___C_EIEBKOAGEGM_OFFSET))(this);
	}
};
