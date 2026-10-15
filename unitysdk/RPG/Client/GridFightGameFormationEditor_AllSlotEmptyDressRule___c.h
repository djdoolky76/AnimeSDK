#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD152930)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD152970)
#define RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CANDRESS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD152980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameFormationEditor_AllSlotEmptyDressRule___c_TypeDefinitionIndex = 64640;

	class GridFightGameFormationEditor_AllSlotEmptyDressRule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C770);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6C778);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanDress_b__2_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEFORMATIONEDITOR_ALLSLOTEMPTYDRESSRULE___C__CANDRESS_B__2_0_OFFSET))(this, a1);
		}

	};
}
