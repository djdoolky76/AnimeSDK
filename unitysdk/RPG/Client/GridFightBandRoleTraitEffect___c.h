#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72F230)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C72F270)
#define RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C72F280)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBandRoleTraitEffect___c_TypeDefinitionIndex = 67146;

	class GridFightBandRoleTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FBC0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6FBC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetShowMemberUIDs_b__5_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBANDROLETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__5_0_OFFSET))(this, a1);
		}

	};
}
