#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EPropertyType.h"
#include "unitysdk/Share/EScenePropertyType.h"
#include "unitysdk/Share/ESkillPropertyType.h"
#include "unitysdk/System/Object.h"

#define SHARE_CPROPERTYHELPER_GETDIVISOR_1_OFFSET UNITYSDK_OFFSET(0x17FF7C00)
#define SHARE_CPROPERTYHELPER_GETDIVISOR_2_OFFSET UNITYSDK_OFFSET(0x17FF7C50)
#define SHARE_CPROPERTYHELPER_GETDIVISOR_3_OFFSET UNITYSDK_OFFSET(0x17FF7CF0)
#define SHARE_CPROPERTYHELPER_GETDIVISOR_OFFSET UNITYSDK_OFFSET(0x17FF7B60)
#define SHARE_CPROPERTYHELPER_GET_PROPERTYPERSISTENCE_OFFSET UNITYSDK_OFFSET(0x17FF7700)
#define SHARE_CPROPERTYHELPER_GET_SCENEPROPERTYPERSISTENCE_OFFSET UNITYSDK_OFFSET(0x17FF7760)
#define SHARE_CPROPERTYHELPER_ISPERSISTENCEPROPERTY_1_OFFSET UNITYSDK_OFFSET(0x17FF7F00)
#define SHARE_CPROPERTYHELPER_ISPERSISTENCEPROPERTY_OFFSET UNITYSDK_OFFSET(0x17FF7D40)
#define SHARE_CPROPERTYHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17FF77C0)

namespace Share
{
	inline static constexpr unsigned int CPropertyHelper_TypeDefinitionIndex = 15473;

	class CPropertyHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet__PropertyPersistence_k__BackingField()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x7750);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet__ScenePropertyPersistence_k__BackingField()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x7758);
		}
		static ::System::Int32* StaticGet_TenDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x3DD0);
		}
		static ::System::Int32* StaticGet_TenThousandDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x3DD4);
		}
		static ::System::Int32* StaticGet_OneThousandDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x3DD8);
		}
		static ::System::Int32* StaticGet_OneHundredDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x3DDC);
		}
		static ::System::Int32* StaticGet_OneDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CPropertyHelper_TypeDefinitionIndex)->GetStaticField(0x3DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Boolean>* get_PropertyPersistence()
		{
			return ((::Il2CppArray<::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GET_PROPERTYPERSISTENCE_OFFSET))();
		}

		static ::Il2CppArray<::System::Boolean>* get_ScenePropertyPersistence()
		{
			return ((::Il2CppArray<::System::Boolean>*(*)())((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GET_SCENEPROPERTYPERSISTENCE_OFFSET))();
		}

		static ::System::Int32 GetDivisor(::Share::EPropertyType ePropertyType)
		{
			return ((::System::Int32(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GETDIVISOR_OFFSET))(ePropertyType);
		}

		static ::System::Int32 GetDivisor_1(::System::Int32 ePropertyType)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GETDIVISOR_1_OFFSET))(ePropertyType);
		}

		static ::System::Int32 GetDivisor_2(::Share::EScenePropertyType eScenePropertyType)
		{
			return ((::System::Int32(*)(::Share::EScenePropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GETDIVISOR_2_OFFSET))(eScenePropertyType);
		}

		static ::System::Int32 GetDivisor_3(::Share::ESkillPropertyType ePropertyType)
		{
			return ((::System::Int32(*)(::Share::ESkillPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_GETDIVISOR_3_OFFSET))(ePropertyType);
		}

		static ::System::Boolean IsPersistenceProperty(::Share::EPropertyType ePropertyType)
		{
			return ((::System::Boolean(*)(::Share::EPropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_ISPERSISTENCEPROPERTY_OFFSET))(ePropertyType);
		}

		static ::System::Boolean IsPersistenceProperty_1(::Share::EScenePropertyType ePropertyType)
		{
			return ((::System::Boolean(*)(::Share::EScenePropertyType))((::PBYTE)hIl2Cpp + SHARE_CPROPERTYHELPER_ISPERSISTENCEPROPERTY_1_OFFSET))(ePropertyType);
		}
	};
}
