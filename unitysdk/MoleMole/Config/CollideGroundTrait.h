#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x11A64930)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A64A30)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A64920)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A653B0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11A64D90)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11A64A20)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A65410)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11A64E10)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x11A65970)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11A657E0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11A65270)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x11A65AD0)
#define MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x11A65AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CollideGroundTrait_TypeDefinitionIndex = 66087;

	class CollideGroundTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean MuteGroundCheck; // 0x18
		::System::Boolean MuteFreeFall; // 0x19
		::System::Boolean MuteFlyHeightLimit; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::CollideGroundTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::CollideGroundTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::CollideGroundTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::CollideGroundTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COLLIDEGROUNDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
