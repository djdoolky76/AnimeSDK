#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CAPOIFLOACA___C_NBPDILGHAKP_OFFSET UNITYSDK_OFFSET(0x14523690)
#define CAPOIFLOACA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14523640)
#define CAPOIFLOACA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14523680)

inline static constexpr unsigned int CAPOIFLOACA___c_TypeDefinitionIndex = 67795;

class CAPOIFLOACA___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__9_11()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(CAPOIFLOACA___c_TypeDefinitionIndex)->GetStaticField(0x4CC80);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CAPOIFLOACA___c_TypeDefinitionIndex)->GetStaticField(0x4CC88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAPOIFLOACA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPOIFLOACA___C__CTOR_OFFSET))(this);
	}

	::System::Void NBPDILGHAKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAPOIFLOACA___C_NBPDILGHAKP_OFFSET))(this);
	}
};
