#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class InteractionPoint; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOINTERACTIONPOINT___C_NKECGAPINAL_OFFSET UNITYSDK_OFFSET(0x181027C0)
#define MOLEMOLE_MONOINTERACTIONPOINT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18102770)
#define MOLEMOLE_MONOINTERACTIONPOINT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x181027B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInteractionPoint___c_TypeDefinitionIndex = 77343;

	class MonoInteractionPoint___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>** StaticGet___9__5_0()
		{
			return (::System::Comparison_1<::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>>**)Il2CppClass::FromTypeDefinitionIndex(MonoInteractionPoint___c_TypeDefinitionIndex)->GetStaticField(0x46CD0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoInteractionPoint___c_TypeDefinitionIndex)->GetStaticField(0x46CD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C__CTOR_OFFSET))(this);
		}

		::System::Int32 NKECGAPINAL(::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single> EJCBEJMGFAJ, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single> EBFCACIEKBC)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>, ::System::ValueTuple_2<::MoleMole::InteractionPoint*, ::System::Single>))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINTERACTIONPOINT___C_NKECGAPINAL_OFFSET))(this, EJCBEJMGFAJ, EBFCACIEKBC);
		}
	};
}
