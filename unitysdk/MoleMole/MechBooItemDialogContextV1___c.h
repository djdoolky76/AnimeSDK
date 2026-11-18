#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EJAIHAJKGOB;
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EEDD10)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEDD50)
#define MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__GETPARTBUILDLIST_B__2_0_OFFSET UNITYSDK_OFFSET(0x13EEDD60)

namespace MoleMole
{
	inline static constexpr unsigned int MechBooItemDialogContextV1___c_TypeDefinitionIndex = 52263;

	class MechBooItemDialogContextV1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MechBooItemDialogContextV1___c_TypeDefinitionIndex)->GetStaticField(0x4AA40);
		}
		static ::System::Converter_2<::EJAIHAJKGOB*, ::System::Int32>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::EJAIHAJKGOB*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MechBooItemDialogContextV1___c_TypeDefinitionIndex)->GetStaticField(0x4AA48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetPartBuildList_b__2_0(::EJAIHAJKGOB* x)
		{
			return ((::System::Int32(*)(::PVOID, ::EJAIHAJKGOB*))((::PBYTE)hIl2Cpp + MOLEMOLE_MECHBOOITEMDIALOGCONTEXTV1___C__GETPARTBUILDLIST_B__2_0_OFFSET))(this, x);
		}
	};
}
