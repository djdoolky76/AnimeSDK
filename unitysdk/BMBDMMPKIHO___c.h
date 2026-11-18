#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define BMBDMMPKIHO___C_OOBANKCJMKC_OFFSET UNITYSDK_OFFSET(0x10E0E6A0)
#define BMBDMMPKIHO___C_OONJFHBFGAH_OFFSET UNITYSDK_OFFSET(0x10E0E650)
#define BMBDMMPKIHO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10E0E600)
#define BMBDMMPKIHO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10E0E640)

inline static constexpr unsigned int BMBDMMPKIHO___c_TypeDefinitionIndex = 65321;

class BMBDMMPKIHO___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BMBDMMPKIHO___c_TypeDefinitionIndex)->GetStaticField(0x30EC0);
	}
	static ::System::Predicate_1<::MoleMole::Config::ConfigViewObjectTraitBase*>** StaticGet___9__44_0()
	{
		return (::System::Predicate_1<::MoleMole::Config::ConfigViewObjectTraitBase*>**)Il2CppClass::FromTypeDefinitionIndex(BMBDMMPKIHO___c_TypeDefinitionIndex)->GetStaticField(0x30EC8);
	}
	static ::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>** StaticGet___9__34_0()
	{
		return (::System::Func_2<::System::Object*, ::System::Nullable_1<::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(BMBDMMPKIHO___c_TypeDefinitionIndex)->GetStaticField(0x30ED0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBDMMPKIHO___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBDMMPKIHO___C__CTOR_OFFSET))(this);
	}

	::System::Boolean OONJFHBFGAH(::MoleMole::Config::ConfigViewObjectTraitBase* IMLLDOHDCNC)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectTraitBase*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO___C_OONJFHBFGAH_OFFSET))(this, IMLLDOHDCNC);
	}

	::System::Nullable_1<::System::Boolean> OOBANKCJMKC(::System::Object* JNDDJMAHNAI)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMBDMMPKIHO___C_OOBANKCJMKC_OFFSET))(this, JNDDJMAHNAI);
	}
};
