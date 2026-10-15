#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2E3F00)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2E3F40)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__ISPROCESSING_B__49_0_OFFSET UNITYSDK_OFFSET(0xD2E3F90)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_0_OFFSET UNITYSDK_OFFSET(0xD2E3F50)
#define RPG_CLIENT_HANDBOOKCHAPTERDATA___C__SETMAINPATHLIST_B__48_1_OFFSET UNITYSDK_OFFSET(0xD2E3F70)

namespace RPG::Client
{
	inline static constexpr unsigned int HandbookChapterData___c_TypeDefinitionIndex = 65615;

	class HandbookChapterData___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_1()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10270);
		}

		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__49_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10278);
		}

		static ::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>** StaticGet___9__48_0()
		{
			return (::System::Predicate_1<::RPG::Client::MissionChronicleMainPathData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10280);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x10288);
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
