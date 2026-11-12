#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDA59D90)
#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDA59DD0)
#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__7_0_OFFSET UNITYSDK_OFFSET(0xDA59DE0)
#define RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__7_1_OFFSET UNITYSDK_OFFSET(0xDA59E40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAdditionalTraitRoleChooseTraitEffect___c_TypeDefinitionIndex = 67143;

	class GridFightAdditionalTraitRoleChooseTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ACF0);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6ACF8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6AD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetShowMemberUIDs_b__7_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetShowMemberUIDs_b__7_1(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTADDITIONALTRAITROLECHOOSETRAITEFFECT___C__GETSHOWMEMBERUIDS_B__7_1_OFFSET))(this, a1);
		}

	};
}
