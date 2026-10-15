#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD2CF5B0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2CF5F0)
#define RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__TRYGETVALUEFROMTEAM_B__3_0_OFFSET UNITYSDK_OFFSET(0xD2CF600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightValueComponent___c_TypeDefinitionIndex = 65184;

	class GridFightValueComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEEC0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEEC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _TryGetValueFromTeam_b__3_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTVALUECOMPONENT___C__TRYGETVALUEFROMTEAM_B__3_0_OFFSET))(this, a1);
		}

	};
}
