#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGBIMGEFJCE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

class MOELDGPPDPM;
namespace MoleMole { class MonoRenderHandler; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_JFPIGHKJHPO_OFFSET UNITYSDK_OFFSET(0x783EE0)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_MFLAMFHHBEP_OFFSET UNITYSDK_OFFSET(0x783F30)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x783ED0)
#define MOLEMOLE_STATICTEXTUREMATERIALMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x783EA0)

namespace MoleMole
{
	inline static constexpr unsigned int StaticTextureMaterialModifier_TypeDefinitionIndex = 59838;

	struct alignas(8) StaticTextureMaterialModifier
	{
		::System::String* propertyKey; // 0x10
		::System::Boolean enable; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture* value; // 0x20
		::System::Boolean tillingEnable; // 0x28
		::System::Boolean offsetEnable; // 0x29
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 tilling; // 0x2C
		::UnityEngine::Vector2 offset; // 0x34

		::System::Void _ctor(::System::String* BGJOPBCCMOC)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER__CTOR_OFFSET))(this, BGJOPBCCMOC);
		}

		::MOELDGPPDPM* NMBJIKEJKCK(::LGBIMGEFJCE MDLHJONGOPK, ::MoleMole::MonoRenderHandler* AOKHOHCJNFJ)
		{
			return ((::MOELDGPPDPM*(*)(::PVOID, ::LGBIMGEFJCE, ::MoleMole::MonoRenderHandler*))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_NMBJIKEJKCK_OFFSET))(this, MDLHJONGOPK, AOKHOHCJNFJ);
		}

		::System::Collections::Generic::List_1<::System::String*>* JFPIGHKJHPO()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_JFPIGHKJHPO_OFFSET))(this);
		}

		::System::String* MFLAMFHHBEP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_STATICTEXTUREMATERIALMODIFIER_MFLAMFHHBEP_OFFSET))(this);
		}
	};
}
