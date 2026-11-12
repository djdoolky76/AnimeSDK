#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD21F80)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDD21FC0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET UNITYSDK_OFFSET(0xDD22010)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET UNITYSDK_OFFSET(0xDD21FD0)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET UNITYSDK_OFFSET(0xDD21FF0)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData___c_TypeDefinitionIndex = 67539;

	class HandbookChapterData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18C90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18C98);
		}

		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18CA0);
		}

		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_1()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x18CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _SetMainPathList_b__48_0(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET))(this, a1);
		}

		::System::Boolean _SetMainPathList_b__48_1(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET))(this, a1);
		}

		::System::Boolean _IsProcessing_b__49_0(::RPG::Client::MissionChronicleMainPathData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET))(this, a1);
		}

	};
}
