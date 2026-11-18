#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }

#define MOLEMOLE_STATICKEYWORDMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x7E8A00)
#define MOLEMOLE_STATICKEYWORDMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x7E89F0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticKeywordMaterialModifier_TypeDefinitionIndex = 58576;

	struct alignas(8) StaticKeywordMaterialModifier
	{
		::System::String* keyword; // 0x10
		::System::Boolean enable; // 0x18
		::System::Boolean value; // 0x19

		::System::Void _ctor(::System::String* ENODHLBGNJH)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDMATERIALMODIFIER__CTOR_OFFSET))(this, ENODHLBGNJH);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICKEYWORDMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}
	};
}
