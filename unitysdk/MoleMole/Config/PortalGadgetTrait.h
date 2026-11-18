#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_BUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B9374B0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B936790)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B936890)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B936740)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B937010)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B936B10)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B936880)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B937070)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B936B90)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B937320)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B936ED0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT_POSTPROCESSENTITY_OFFSET UNITYSDK_OFFSET(0x1B937500)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9376A0)
#define MOLEMOLE_CONFIG_PORTALGADGETTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9376B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PortalGadgetTrait_TypeDefinitionIndex = 64694;

	class PortalGadgetTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* LinkTag; // 0x18
		::System::Boolean IsSource; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::PortalGadgetTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::PortalGadgetTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::PortalGadgetTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::PortalGadgetTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean BuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_BUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void PostProcessEntity(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT_POSTPROCESSENTITY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PORTALGADGETTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
