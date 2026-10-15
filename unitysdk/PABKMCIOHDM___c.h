#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SubMissionData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PABKMCIOHDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFC4F40)
#define PABKMCIOHDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC4F80)
#define PABKMCIOHDM___C__UPDATEASSOCIATEFINISHCONDITIONMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0xBFC4F90)

	class PABKMCIOHDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E50);
		}

		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60E58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PABKMCIOHDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PABKMCIOHDM___C_CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAssociateFinishConditionMission_b__0_0(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + PABKMCIOHDM___C__UPDATEASSOCIATEFINISHCONDITIONMISSION_B__0_0_OFFSET))(this, a1);
		}

	};
