#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AnniversaryCollectionGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC68D370)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC68D3A0)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__GETANNIVERSARY3RDCOLLECTIONGROUPDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0xC68D3B0)

namespace RPG::Client
{
	class AnniversaryCollectionModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x567A0);
		}

		static ::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x567A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetAnniversary3RDCollectionGroupData_b__22_0(::RPG::Client::AnniversaryCollectionGroupData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AnniversaryCollectionGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__GETANNIVERSARY3RDCOLLECTIONGROUPDATA_B__22_0_OFFSET))(this, a1);
		}

	};
}
