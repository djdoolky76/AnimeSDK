#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MFCAMPFHMCP___C_NEKEBCFIMKA_OFFSET UNITYSDK_OFFSET(0x17D1EFB0)
#define MFCAMPFHMCP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D1EF60)
#define MFCAMPFHMCP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17D1EFA0)

inline static constexpr unsigned int MFCAMPFHMCP___c_TypeDefinitionIndex = 57741;

class MFCAMPFHMCP___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>** StaticGet___9__300_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>, ::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(MFCAMPFHMCP___c_TypeDefinitionIndex)->GetStaticField(0x46A70);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MFCAMPFHMCP___c_TypeDefinitionIndex)->GetStaticField(0x46A78);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFCAMPFHMCP___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFCAMPFHMCP___C__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* NEKEBCFIMKA(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*> JNDDJMAHNAI)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::MoleMole::Battle::Entity*>))((::PBYTE)hIl2Cpp + MFCAMPFHMCP___C_NEKEBCFIMKA_OFFSET))(this, JNDDJMAHNAI);
	}
};
