#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EGenericMonsterIdType.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ANOKJGCCGAO;
class EPJAODADCEA;
class LCDNBAKJFKF;
class PJBCFAALBFG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CANRESOLVEMONSTERID_OFFSET UNITYSDK_OFFSET(0x116D18F0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CREATELOCALGROUPDATA_OFFSET UNITYSDK_OFFSET(0x116D13D0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CREATELOCALMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x116D15B0)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_READMONSTERIDFROMMEMBERCONFIG_OFFSET UNITYSDK_OFFSET(0x116D1870)
#define FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_TOLOCALINTPROTO_OFFSET UNITYSDK_OFFSET(0x116D17B0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupLocalDataFactory_TypeDefinitionIndex = 49552;

	class GenericGroupLocalDataFactory : public ::System::Object
	{
	public:
		static ::LCDNBAKJFKF* CreateLocalGroupData(::System::UInt32 groupId, ::System::Collections::Generic::List_1<::System::UInt32>* createdMemberIds)
		{
			return ((::LCDNBAKJFKF*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CREATELOCALGROUPDATA_OFFSET))(groupId, createdMemberIds);
		}

		static ::EPJAODADCEA* CreateLocalMemberData(::System::UInt32 groupId, ::System::UInt32 memberId, ::System::UInt32 entityRid, ::UnityEngine::Vector3 position, ::UnityEngine::Vector3 rotation, ::MDANEEPAJKA memberType, ::System::Int32 monsterId, ::Foundation::ViewObject::EGenericMonsterIdType monsterIdType)
		{
			return ((::EPJAODADCEA*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::MDANEEPAJKA, ::System::Int32, ::Foundation::ViewObject::EGenericMonsterIdType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CREATELOCALMEMBERDATA_OFFSET))(groupId, memberId, entityRid, position, rotation, memberType, monsterId, monsterIdType);
		}

		static ::PJBCFAALBFG* ToLocalIntProto(::UnityEngine::Vector3 value)
		{
			return ((::PJBCFAALBFG*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_TOLOCALINTPROTO_OFFSET))(value);
		}

		static ::System::Void ReadMonsterIdFromMemberConfig(::ANOKJGCCGAO* memberConfig, ::System::Int32& monsterId, ::Foundation::ViewObject::EGenericMonsterIdType& monsterIdType)
		{
			return ((::System::Void(*)(::ANOKJGCCGAO*, ::System::Int32&, ::Foundation::ViewObject::EGenericMonsterIdType&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_READMONSTERIDFROMMEMBERCONFIG_OFFSET))(memberConfig, monsterId, monsterIdType);
		}

		static ::System::Boolean CanResolveMonsterId(::System::Int32 monsterId, ::Foundation::ViewObject::EGenericMonsterIdType monsterIdType)
		{
			return ((::System::Boolean(*)(::System::Int32, ::Foundation::ViewObject::EGenericMonsterIdType))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GENERICGROUPLOCALDATAFACTORY_CANRESOLVEMONSTERID_OFFSET))(monsterId, monsterIdType);
		}
	};
}
