#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierEnumDefine/DistortionChannelType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/MoleMole/StaticFloatMaterialModifier.h"
#include "unitysdk/MoleMole/StaticKeywordFloatMaterialModifier.h"

#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_GETCLONEFROMENUM_OFFSET UNITYSDK_OFFSET(0x135A4E30)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCENABLE_1_OFFSET UNITYSDK_OFFSET(0x7078D0)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCENABLE_OFFSET UNITYSDK_OFFSET(0x707860)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCVALUE_1_OFFSET UNITYSDK_OFFSET(0x707800)
#define MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCVALUE_OFFSET UNITYSDK_OFFSET(0x7077A0)

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int MaterialPropertyModifierValueDistortionChannelType_TypeDefinitionIndex = 75856;

	struct alignas(4) MaterialPropertyModifierValueDistortionChannelType
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType value; // 0x12

		::System::Void SyncValue(::MoleMole::StaticFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCVALUE_OFFSET))(this, to);
		}

		::System::Void SyncValue_1(::MoleMole::StaticKeywordFloatMaterialModifier& to)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCVALUE_1_OFFSET))(this, to);
		}

		::System::Void SyncEnable(::MoleMole::StaticFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCENABLE_OFFSET))(this, to, stop);
		}

		::System::Void SyncEnable_1(::MoleMole::StaticKeywordFloatMaterialModifier& to, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::StaticKeywordFloatMaterialModifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_SYNCENABLE_1_OFFSET))(this, to, stop);
		}

		/*
		static ::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType GetCloneFromEnum(::System::Boolean useIt, ::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType enumVal)
		{
			return ((::MoleMole::MaterialPropertyModifierEnumDefine::MaterialPropertyModifierValueDistortionChannelType(*)(::System::Boolean, ::MoleMole::MaterialPropertyModifierEnumDefine::DistortionChannelType))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALPROPERTYMODIFIERENUMDEFINE_MATERIALPROPERTYMODIFIERVALUEDISTORTIONCHANNELTYPE_GETCLONEFROMENUM_OFFSET))(useIt, enumVal);
		}
		*/
	};
}
