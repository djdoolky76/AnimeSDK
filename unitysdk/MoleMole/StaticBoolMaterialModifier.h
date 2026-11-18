#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x7C5BC0)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x7C5B70)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x7C5B60)
#define MOLEMOLE_STATICBOOLMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C5B40)

namespace MoleMole
{
	inline static constexpr unsigned int StaticBoolMaterialModifier_TypeDefinitionIndex = 53548;

	struct alignas(8) StaticBoolMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::String* keyword; // 0x18
		::System::Boolean enable; // 0x20
		::System::Boolean value; // 0x21

		::System::Void _ctor(::System::String* BGJOPBCCMOC, ::System::String* ENODHLBGNJH, ::System::Boolean FBILHHBPEHD, ::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC, ENODHLBGNJH, FBILHHBPEHD, EGEGIMGMJHN);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICBOOLMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}
	};
}
