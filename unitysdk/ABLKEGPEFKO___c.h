#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SubMissionData; }
namespace System { class Action; }
namespace System { class Object; }

#define ABLKEGPEFKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB107920)
#define ABLKEGPEFKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB107960)
#define ABLKEGPEFKO___C__SETTRACKINGSUBMISSION_B__4_0_OFFSET UNITYSDK_OFFSET(0xB107970)

	class ABLKEGPEFKO___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43260);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABLKEGPEFKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABLKEGPEFKO___C_CTOR_OFFSET))(this);
		}

		::System::Void _SetTrackingSubMission_b__4_0(::RPG::Client::SubMissionData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + ABLKEGPEFKO___C__SETTRACKINGSUBMISSION_B__4_0_OFFSET))(this, a1);
		}

	};
