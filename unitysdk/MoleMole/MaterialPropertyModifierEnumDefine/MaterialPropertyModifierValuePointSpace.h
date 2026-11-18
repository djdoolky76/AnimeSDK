#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/PointSpace.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x12470360)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x6DEEC0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x6DEE50)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x6DEDF0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x6DED90)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValuePointSpace_TypeDefinitionIndex = 49697;

	struct alignas(4) MaterialPropertyModifierValuePointSpace
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace value; // 0x12

		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCVALUE_OFFSET))(this, to);
		}

		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCVALUE_1_OFFSET))(this, to);
		}

		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCENABLE_OFFSET))(this, to, stop);
		}

		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}

		/*
		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValuePointSpace(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::PointSpace))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEPOINTSPACE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
		*/
	};
}
