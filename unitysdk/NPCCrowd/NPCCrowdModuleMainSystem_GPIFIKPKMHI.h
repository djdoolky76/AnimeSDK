#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GPIFIKPKMHI__CCTOR_OFFSET UNITYSDK_OFFSET(0xF158C60)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdModuleMainSystem_GPIFIKPKMHI_TypeDefinitionIndex = 66627;

	class NPCCrowdModuleMainSystem_GPIFIKPKMHI : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_PCOOFBBFPMC()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_GPIFIKPKMHI_TypeDefinitionIndex)->GetStaticField(0x10000);
		}
		static ::System::Boolean* StaticGet_LBLNFMLDCDG()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_GPIFIKPKMHI_TypeDefinitionIndex)->GetStaticField(0x10001);
		}
		static ::System::Boolean* StaticGet_DGDAFEIFFBH()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_GPIFIKPKMHI_TypeDefinitionIndex)->GetStaticField(0x10002);
		}
		static ::System::Boolean* StaticGet_EPBGAJNKNGM()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdModuleMainSystem_GPIFIKPKMHI_TypeDefinitionIndex)->GetStaticField(0x10003);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDMODULEMAINSYSTEM_GPIFIKPKMHI__CCTOR_OFFSET))();
		}
	};
}
