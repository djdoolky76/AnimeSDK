#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseGachaGroupData; }
namespace RPG::Client { class GachaItemData; }
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_GACHAMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD09C5D0)
#define RPG_CLIENT_GACHAMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD09C600)
#define RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__28_0_OFFSET UNITYSDK_OFFSET(0xD09C610)
#define RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__33_0_OFFSET UNITYSDK_OFFSET(0xD09C620)
#define RPG_CLIENT_GACHAMODULE___C___GETLINKEDGACHAGROUPORDER_B__63_0_OFFSET UNITYSDK_OFFSET(0xD09C660)

namespace RPG::Client
{
	class GachaModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::RPG::Client::GachaItemData*, ::RPG::Client::GachaItemData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60390);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x60398);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x603A0);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__63_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x603A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GachaItemData* _GetSortedGachaItemDatas_b__28_0(::RPG::Client::GachaItemData* a1)
		{
			return ((::RPG::Client::GachaItemData*(*)(::PVOID, ::RPG::Client::GachaItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__GETSORTEDGACHAITEMDATAS_B__28_0_OFFSET))(this, a1);
		}

		::System::Boolean _RefreshGachaPoolsData_b__33_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C__REFRESHGACHAPOOLSDATA_B__33_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetLinkedGachaGroupOrder_b__63_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHAMODULE___C___GETLINKEDGACHAGROUPORDER_B__63_0_OFFSET))(this, a1);
		}

	};
}
