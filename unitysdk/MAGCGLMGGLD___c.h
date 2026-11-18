#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define MAGCGLMGGLD___C_CGHHPPGDDEK_OFFSET UNITYSDK_OFFSET(0x14041530)
#define MAGCGLMGGLD___C_NOAAEDDPIAH_OFFSET UNITYSDK_OFFSET(0x14041680)
#define MAGCGLMGGLD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x140414E0)
#define MAGCGLMGGLD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14041520)

inline static constexpr unsigned int MAGCGLMGGLD___c_TypeDefinitionIndex = 80041;

class MAGCGLMGGLD___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Int64>** StaticGet___9__25_5()
	{
		return (::System::Func_1<::System::Int64>**)Il2CppClass::FromTypeDefinitionIndex(MAGCGLMGGLD___c_TypeDefinitionIndex)->GetStaticField(0x447F0);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MAGCGLMGGLD___c_TypeDefinitionIndex)->GetStaticField(0x447F8);
	}
	static ::System::Func_1<::System::Boolean>** StaticGet___9__25_18()
	{
		return (::System::Func_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MAGCGLMGGLD___c_TypeDefinitionIndex)->GetStaticField(0x44800);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAGCGLMGGLD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD___C__CTOR_OFFSET))(this);
	}

	::System::Int64 CGHHPPGDDEK()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD___C_CGHHPPGDDEK_OFFSET))(this);
	}

	::System::Boolean NOAAEDDPIAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MAGCGLMGGLD___C_NOAAEDDPIAH_OFFSET))(this);
	}
};
