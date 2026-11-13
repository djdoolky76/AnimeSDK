#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightGridMember; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC34540)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC34580)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__CANEDIT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1CC34590)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CC34620)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_1_OFFSET UNITYSDK_OFFSET(0x1CC34640)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_2_OFFSET UNITYSDK_OFFSET(0x1CC34650)
#define RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C___GETMEMBERSONBOARDAFFECTED_B__15_0_OFFSET UNITYSDK_OFFSET(0x1CC34600)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMemberLinkTraitEffect___c_TypeDefinitionIndex = 67258;

	class GridFightMemberLinkTraitEffect___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::String*>** StaticGet___9__23_2()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72230);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72238);
		}

		static ::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::UInt32>** StaticGet___9__23_1()
		{
			return (::System::Func_2<::System::ValueTuple_2<::System::UInt32, ::System::String*>, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72240);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72248);
		}

		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72250);
		}

		static ::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGridMember*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x72258);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanEdit_b__11_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__CANEDIT_B__11_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMembersOnBoardAffected_b__15_0(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C___GETMEMBERSONBOARDAFFECTED_B__15_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetFrontRemarkText_b__23_0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetFrontRemarkText_b__23_1(::System::ValueTuple_2<::System::UInt32, ::System::String*> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_1_OFFSET))(this, a1);
		}

		::System::String* _GetFrontRemarkText_b__23_2(::System::ValueTuple_2<::System::UInt32, ::System::String*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::String*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMEMBERLINKTRAITEFFECT___C__GETFRONTREMARKTEXT_B__23_2_OFFSET))(this, a1);
		}

	};
}
