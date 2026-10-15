#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AnniversaryCollectionGroupData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC686D60)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC686D90)
#define RPG_CLIENT_ANNIVERSARYCOLLECTIONMODULE___C__GETANNIVERSARY3RDCOLLECTIONGROUPDATA_B__22_0_OFFSET UNITYSDK_OFFSET(0xC686DA0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnniversaryCollectionModule___c_TypeDefinitionIndex = 62397;

	class AnniversaryCollectionModule___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>** StaticGet___9__22_0()
		{
			return (::System::Func_2<::RPG::Client::AnniversaryCollectionGroupData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x456E0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x456E8);
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
