#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x7468A0)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x746850)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x746840)
#define MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7467B0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticKeywordFloatMaterialModifier_TypeDefinitionIndex = 68802;

	struct alignas(8) StaticKeywordFloatMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single value; // 0x1C
		::Il2CppArray<::System::String*>* keywords; // 0x20

		::System::Void _ctor(::System::String* BGJOPBCCMOC, ::Il2CppArray<::System::String*>* NGEJBPHKICI)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC, NGEJBPHKICI);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDFLOATMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}
	};
}
