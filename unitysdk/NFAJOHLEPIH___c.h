#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { template <typename T> class Func_1; }

#define NFAJOHLEPIH___C_MEMFHNGDGIN_OFFSET UNITYSDK_OFFSET(0x105B5B10)
#define NFAJOHLEPIH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B5AC0)
#define NFAJOHLEPIH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105B5B00)

inline static constexpr unsigned int NFAJOHLEPIH___c_TypeDefinitionIndex = 79129;

class NFAJOHLEPIH___c : public ::System::Object
{
public:
	static ::System::Func_1<::MoleMole::SkinMapAnimationClipData*>** StaticGet___9__3_0()
	{
		return (::System::Func_1<::MoleMole::SkinMapAnimationClipData*>**)Il2CppClass::FromTypeDefinitionIndex(NFAJOHLEPIH___c_TypeDefinitionIndex)->GetStaticField(0x4AF30);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(NFAJOHLEPIH___c_TypeDefinitionIndex)->GetStaticField(0x4AF38);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAJOHLEPIH___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAJOHLEPIH___C__CTOR_OFFSET))(this);
	}

	::MoleMole::SkinMapAnimationClipData* MEMFHNGDGIN()
	{
		return ((::MoleMole::SkinMapAnimationClipData*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAJOHLEPIH___C_MEMFHNGDGIN_OFFSET))(this);
	}
};
