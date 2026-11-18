#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B450FD0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B4510D0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B450F60)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B451890)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B451350)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B4510C0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B4518F0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B4513D0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B451CB0)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B451750)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B451E40)
#define MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B451E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovErosionRegionTrait_TypeDefinitionIndex = 68404;

	class ZenkovErosionRegionTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* GroupIdList; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* MapIconTraitMemberConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovErosionRegionTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovErosionRegionTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovErosionRegionTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovErosionRegionTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEROSIONREGIONTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
