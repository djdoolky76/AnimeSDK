#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FindChestData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FINDCHESTMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD004410)
#define RPG_CLIENT_FINDCHESTMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD004440)
#define RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET UNITYSDK_OFFSET(0xD004450)

namespace RPG::Client
{
	class FindChestModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FindChestData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::FindChestData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5BC50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x5BC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedFindChestDataList_b__9_0(::RPG::Client::FindChestData* a1, ::RPG::Client::FindChestData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FindChestData*, ::RPG::Client::FindChestData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FINDCHESTMODULE___C__GETSORTEDFINDCHESTDATALIST_B__9_0_OFFSET))(this, a1, a2);
		}

	};
}
