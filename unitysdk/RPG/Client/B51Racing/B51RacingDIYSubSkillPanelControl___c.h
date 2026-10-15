#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJELEGLGHCN;
namespace System { class Object; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC791830)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC791870)
#define RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C___GETSELECTEDITEMINDEX_B__25_0_OFFSET UNITYSDK_OFFSET(0xC791880)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDIYSubSkillPanelControl___c_TypeDefinitionIndex = 81785;

	class B51RacingDIYSubSkillPanelControl___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::PJELEGLGHCN*>** StaticGet___9__25_0()
		{
			return (::System::Predicate_1<::PJELEGLGHCN*>**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x53AE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.B51Racing", "<>c")->GetStaticField(0x53AE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __GetSelectedItemIndex_b__25_0(::PJELEGLGHCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJELEGLGHCN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDIYSUBSKILLPANELCONTROL___C___GETSELECTEDITEMINDEX_B__25_0_OFFSET))(this, a1);
		}

	};
}
