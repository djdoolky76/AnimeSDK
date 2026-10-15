#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD262380)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD2623C0)
#define RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__GET_HPADDEDRATIO2_B__32_0_OFFSET UNITYSDK_OFFSET(0xD2623D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleStarConfig___c_TypeDefinitionIndex = 65123;

	class GridFightRoleStarConfig___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6EA70);
		}

		static ::System::Func_2<::RPG::GameCore::AvatarPropertyValue*, ::System::Boolean>** StaticGet___9__32_0()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyValue*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6EA78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HPAddedRatio2_b__32_0(::RPG::GameCore::AvatarPropertyValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AvatarPropertyValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESTARCONFIG___C__GET_HPADDEDRATIO2_B__32_0_OFFSET))(this, a1);
		}

	};
}
