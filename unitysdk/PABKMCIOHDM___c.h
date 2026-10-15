#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PABKMCIOHDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFBDA50)
#define PABKMCIOHDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBFBDA90)
#define PABKMCIOHDM___C__UPDATEASSOCIATEFINISHCONDITIONMISSION_B__0_0_OFFSET UNITYSDK_OFFSET(0xBFBDAA0)

inline static constexpr unsigned int PABKMCIOHDM___c_TypeDefinitionIndex = 56497;

	class PABKMCIOHDM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x657C0);
		}

		static ::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*>** StaticGet___9__0_0()
		{
			return (::System::Action_1<::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x657C8);
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
