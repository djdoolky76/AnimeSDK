#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEJKAOKHPPL;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGENODE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E175B00)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E175B40)
#define RPG_CLIENT_GRIDFIGHTSTAGENODE___C__GET_PETPALID_B__130_0_OFFSET UNITYSDK_OFFSET(0x1E175B50)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStageNode___c_TypeDefinitionIndex = 67005;

	class GridFightStageNode___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::OEJKAOKHPPL*, ::System::Boolean>** StaticGet___9__130_0()
		{
			return (::System::Func_2<::OEJKAOKHPPL*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11650);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x11658);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_PetPalID_b__130_0(::OEJKAOKHPPL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEJKAOKHPPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGENODE___C__GET_PETPALID_B__130_0_OFFSET))(this, a1);
		}

	};
}
