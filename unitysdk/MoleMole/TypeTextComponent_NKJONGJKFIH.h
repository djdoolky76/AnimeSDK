#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TypeTextComponent; }
namespace System { class String; }

#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18975720)
#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18976FD0)
#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18977030)
#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18976FE0)
#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18975710)
#define MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH__CTOR_OFFSET UNITYSDK_OFFSET(0x18975700)

namespace MoleMole
{
	inline static constexpr unsigned int TypeTextComponent_NKJONGJKFIH_TypeDefinitionIndex = 91394;

	class TypeTextComponent_NKJONGJKFIH : public ::System::Object
	{
	public:
		::MoleMole::TypeTextComponent* KLHPEBKNIFB; // 0x10
		::System::String* OKGEDIJAJLB; // 0x18
		::System::String* FCCLIEJAKLI; // 0x20
		::System::Object* IDBEJJEKGDI; // 0x28
		::System::Boolean MFCMOAIDFIH; // 0x30
		::System::Byte _padding0[0x3];
		::System::Int32 DEKFOHMDOBG; // 0x34
		::System::Int32 MDPILDGFNHN; // 0x38
		::System::Int32 NGIHDAOJHLI; // 0x3C
		::System::Single LGODPDPDBOC; // 0x40

		::System::Void _ctor(::System::Int32 MDPILDGFNHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH__CTOR_OFFSET))(this, MDPILDGFNHN);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TYPETEXTCOMPONENT_NKJONGJKFIH_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
