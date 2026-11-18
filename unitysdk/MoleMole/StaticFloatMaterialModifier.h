#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x7242E0)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x724330)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x7242D0)
#define MOLEMOLE_STATICFLOATMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7242B0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticFloatMaterialModifier_TypeDefinitionIndex = 58149;

	struct alignas(8) StaticFloatMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single value; // 0x1C
		::System::Single weight; // 0x20
		::System::Single targetVal; // 0x24
		::System::Single curveVal; // 0x28

		::System::Void _ctor(::System::String* BGJOPBCCMOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICFLOATMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}
	};
}
