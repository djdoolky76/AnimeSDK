#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DLPMECNNAAH;
namespace System { template <typename T> class Action_1; }

#define KNLAGJIPLKN___C_PLACCFJJGGK_OFFSET UNITYSDK_OFFSET(0x1A2D6BC0)
#define KNLAGJIPLKN___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2D6B70)
#define KNLAGJIPLKN___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2D6BB0)

inline static constexpr unsigned int KNLAGJIPLKN___c_TypeDefinitionIndex = 40262;

class KNLAGJIPLKN___c : public ::System::Object
{
public:
	static ::System::Action_1<::DLPMECNNAAH*>** StaticGet___9__2_0()
	{
		return (::System::Action_1<::DLPMECNNAAH*>**)Il2CppClass::FromTypeDefinitionIndex(KNLAGJIPLKN___c_TypeDefinitionIndex)->GetStaticField(0x38370);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(KNLAGJIPLKN___c_TypeDefinitionIndex)->GetStaticField(0x38378);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNLAGJIPLKN___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLAGJIPLKN___C__CTOR_OFFSET))(this);
	}

	::System::Void PLACCFJJGGK(::DLPMECNNAAH* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::DLPMECNNAAH*))((::PBYTE)hIl2Cpp + KNLAGJIPLKN___C_PLACCFJJGGK_OFFSET))(this, GBELIHABEDH);
	}
};
