#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class AEMCAOEICDG;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EFFECTCASTRECORDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1418CF30)
#define EFFECTCASTRECORDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1418CF70)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_0_OFFSET UNITYSDK_OFFSET(0x1418CF80)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_1_OFFSET UNITYSDK_OFFSET(0x1418CFD0)
#define EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_2_OFFSET UNITYSDK_OFFSET(0x1418CFE0)

inline static constexpr unsigned int EffectCastRecorder___c_TypeDefinitionIndex = 89821;

class EffectCastRecorder___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x376A0);
	}
	static ::System::Func_2<::AEMCAOEICDG*, ::System::Boolean>** StaticGet___9__18_1()
	{
		return (::System::Func_2<::AEMCAOEICDG*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x376A8);
	}
	static ::System::Func_2<::MoleMole::Battle::Entity*, ::AEMCAOEICDG*>** StaticGet___9__18_0()
	{
		return (::System::Func_2<::MoleMole::Battle::Entity*, ::AEMCAOEICDG*>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x376B0);
	}
	static ::System::Func_2<::AEMCAOEICDG*, ::Foundation::AssetPath>** StaticGet___9__18_2()
	{
		return (::System::Func_2<::AEMCAOEICDG*, ::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(EffectCastRecorder___c_TypeDefinitionIndex)->GetStaticField(0x376B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__CTOR_OFFSET))(this);
	}

	::AEMCAOEICDG* _WriteFileIfNeed_b__18_0(::MoleMole::Battle::Entity* e)
	{
		return ((::AEMCAOEICDG*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_0_OFFSET))(this, e);
	}

	::System::Boolean _WriteFileIfNeed_b__18_1(::AEMCAOEICDG* c)
	{
		return ((::System::Boolean(*)(::PVOID, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_1_OFFSET))(this, c);
	}

	::Foundation::AssetPath _WriteFileIfNeed_b__18_2(::AEMCAOEICDG* c)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::AEMCAOEICDG*))((::PBYTE)hIl2Cpp + EFFECTCASTRECORDER___C__WRITEFILEIFNEED_B__18_2_OFFSET))(this, c);
	}
};
