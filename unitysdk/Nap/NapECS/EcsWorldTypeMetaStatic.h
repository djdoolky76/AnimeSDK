#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsWorldTypeMeta.h"
#include "unitysdk/System/Object.h"

#define NAP_NAPECS_ECSWORLDTYPEMETASTATIC_GETMETAINFO_OFFSET UNITYSDK_OFFSET(0x1CDFBB90)
#define NAP_NAPECS_ECSWORLDTYPEMETASTATIC_INITMETA_OFFSET UNITYSDK_OFFSET(0x1CE221F0)
#define NAP_NAPECS_ECSWORLDTYPEMETASTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE222A0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTypeMetaStatic_TypeDefinitionIndex = 36035;

	class EcsWorldTypeMetaStatic : public ::System::Object
	{
	public:
		static ::Nap::NapECS::EcsWorldTypeMeta* StaticGet__invalidMeta()
		{
			return (::Nap::NapECS::EcsWorldTypeMeta*)Il2CppClass::FromTypeDefinitionIndex(EcsWorldTypeMetaStatic_TypeDefinitionIndex)->GetStaticField(0x2B760);
		}
		static ::Il2CppArray<::Nap::NapECS::EcsWorldTypeMeta>** StaticGet__metas()
		{
			return (::Il2CppArray<::Nap::NapECS::EcsWorldTypeMeta>**)Il2CppClass::FromTypeDefinitionIndex(EcsWorldTypeMetaStatic_TypeDefinitionIndex)->GetStaticField(0x2B770);
		}
		static ::System::Int32* StaticGet_WorldTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EcsWorldTypeMetaStatic_TypeDefinitionIndex)->GetStaticField(0x8F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTYPEMETASTATIC__CCTOR_OFFSET))();
		}

		static ::System::Void InitMeta(::System::Int32 totalType)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTYPEMETASTATIC_INITMETA_OFFSET))(totalType);
		}

		static ::Nap::NapECS::EcsWorldTypeMeta& GetMetaInfo(::System::Int32 typeID)
		{
			return ((::Nap::NapECS::EcsWorldTypeMeta&(*)(::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSWORLDTYPEMETASTATIC_GETMETAINFO_OFFSET))(typeID);
		}
	};
}
