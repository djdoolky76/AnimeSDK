#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x190C0CB0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190C0DB0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190C0CA0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190C12E0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190C0F50)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190C1740)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190C0DA0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190C1340)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190C0FD0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190C15B0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190C11A0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_TRYGETAVATARID_OFFSET UNITYSDK_OFFSET(0x190C1810)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_UPDATETRAITS_OFFSET UNITYSDK_OFFSET(0x190C1960)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x190C1C60)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x190C1C70)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x190C1C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovSplitTeamMemberTrait_TypeDefinitionIndex = 46094;

	class ZenkovSplitTeamMemberTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PanelID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovSplitTeamMemberTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamMemberTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovSplitTeamMemberTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamMemberTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void UpdateTraits(::EKHEOJOFLLA* context, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* traits)
		{
			return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*, ::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_UPDATETRAITS_OFFSET))(this, context, traits);
		}

		static ::System::Boolean TryGetAvatarId(::System::UInt32 groupId, ::System::UInt32 memberId, ::System::UInt32& avatarId)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT_TRYGETAVATARID_OFFSET))(groupId, memberId, avatarId);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMMEMBERTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
