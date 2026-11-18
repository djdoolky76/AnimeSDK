#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x12762850)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12762950)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12762840)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12762D80)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x127629F0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x127631A0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12762940)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12762DE0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12762A70)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x127631F0)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12763010)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12762C40)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x12763300)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x12763310)
#define MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x12763320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AIPathPointTrait_TypeDefinitionIndex = 82955;

	class AIPathPointTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsSlideAILevel; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AIPathPointTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AIPathPointTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AIPathPointTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AIPATHPOINTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
