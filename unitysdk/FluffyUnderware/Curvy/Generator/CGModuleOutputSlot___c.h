#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::Generator { class CGData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F203380)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2033C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__SETDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x1F2033D0)

namespace FluffyUnderware::Curvy::Generator
{
	inline static constexpr unsigned int CGModuleOutputSlot___c_TypeDefinitionIndex = 37514;

	class CGModuleOutputSlot___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CGModuleOutputSlot___c_TypeDefinitionIndex)->GetStaticField(0x2C0D0);
		}
		static ::System::Func_2<::FluffyUnderware::Curvy::Generator::CGData*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::FluffyUnderware::Curvy::Generator::CGData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CGModuleOutputSlot___c_TypeDefinitionIndex)->GetStaticField(0x2C0D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetData_b__17_0(::FluffyUnderware::Curvy::Generator::CGData* d)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::Generator::CGData*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_CGMODULEOUTPUTSLOT___C__SETDATA_B__17_0_OFFSET))(this, d);
		}
	};
}
