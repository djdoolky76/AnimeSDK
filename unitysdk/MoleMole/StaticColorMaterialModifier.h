#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICCOLORMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x7C5D60)
#define MOLEMOLE_STATICCOLORMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x7C5D10)
#define MOLEMOLE_STATICCOLORMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x7C5D00)
#define MOLEMOLE_STATICCOLORMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C5CD0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticColorMaterialModifier_TypeDefinitionIndex = 81609;

	struct alignas(8) StaticColorMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::Color value; // 0x1C
		::System::Single weight; // 0x2C
		::UnityEngine::Color targetVal; // 0x30
		::System::Single curveVal; // 0x40

		::System::Void _ctor(::System::String* BGJOPBCCMOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICCOLORMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICCOLORMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICCOLORMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICCOLORMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}
	};
}
