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

#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192924B0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192925B0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192924A0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19292AE0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19292750)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19292F40)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192925A0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19292B40)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192927D0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19292DB0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192929A0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19292FE0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19292FF0)
#define MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19293000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AvatarTrackIconTrait_TypeDefinitionIndex = 86110;

	class AvatarTrackIconTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 PartnerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::AvatarTrackIconTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::AvatarTrackIconTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::AvatarTrackIconTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::AvatarTrackIconTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARTRACKICONTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
