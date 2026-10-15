#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SilverWolfGroupData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_SILVERWOLFMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE0BEB10)
#define RPG_CLIENT_SILVERWOLFMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE0BEB50)
#define RPG_CLIENT_SILVERWOLFMODULE___C__GETSORTEDSILVERWOLFGROUPDATAS_B__1_0_OFFSET UNITYSDK_OFFSET(0xE0BEB60)

namespace RPG::Client
{
	inline static constexpr unsigned int SilverWolfModule___c_TypeDefinitionIndex = 67965;

	class SilverWolfModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F210);
		}

		static ::System::Comparison_1<::RPG::Client::SilverWolfGroupData*>** StaticGet___9__1_0()
		{
			return (::System::Comparison_1<::RPG::Client::SilverWolfGroupData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetSortedSilverWolfGroupDatas_b__1_0(::RPG::Client::SilverWolfGroupData* a1, ::RPG::Client::SilverWolfGroupData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::SilverWolfGroupData*, ::RPG::Client::SilverWolfGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SILVERWOLFMODULE___C__GETSORTEDSILVERWOLFGROUPDATAS_B__1_0_OFFSET))(this, a1, a2);
		}

	};
}
