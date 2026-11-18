#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoWayPath; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Renderer; }

#define GHJIOKAAJPK___C_LFMKOCMDDHC_OFFSET UNITYSDK_OFFSET(0x10FD8E70)
#define GHJIOKAAJPK___C_OKONLOEEHBN_OFFSET UNITYSDK_OFFSET(0x10FD8F20)
#define GHJIOKAAJPK___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10FD8E20)
#define GHJIOKAAJPK___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD8E60)

inline static constexpr unsigned int GHJIOKAAJPK___c_TypeDefinitionIndex = 55161;

class GHJIOKAAJPK___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(GHJIOKAAJPK___c_TypeDefinitionIndex)->GetStaticField(0x4F520);
	}
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>** StaticGet___9__107_1()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(GHJIOKAAJPK___c_TypeDefinitionIndex)->GetStaticField(0x4F528);
	}
	static ::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>** StaticGet___9__107_0()
	{
		return (::System::Func_2<::MoleMole::MonoWayPath*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GHJIOKAAJPK___c_TypeDefinitionIndex)->GetStaticField(0x4F530);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJIOKAAJPK___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJIOKAAJPK___C__CTOR_OFFSET))(this);
	}

	::UnityEngine::Renderer* LFMKOCMDDHC(::MoleMole::MonoWayPath* CJBJONJDOLI)
	{
		return ((::UnityEngine::Renderer*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK___C_LFMKOCMDDHC_OFFSET))(this, CJBJONJDOLI);
	}

	::System::String* OKONLOEEHBN(::MoleMole::MonoWayPath* CJBJONJDOLI)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::MonoWayPath*))((::PBYTE)hIl2Cpp + GHJIOKAAJPK___C_OKONLOEEHBN_OFFSET))(this, CJBJONJDOLI);
	}
};
