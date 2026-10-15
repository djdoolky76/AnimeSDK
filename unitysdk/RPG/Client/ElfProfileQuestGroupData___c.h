#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD9FE70)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCD9FEB0)
#define RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C___ISGROUPCLOSED_B__5_0_OFFSET UNITYSDK_OFFSET(0xCD9FEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfProfileQuestGroupData___c_TypeDefinitionIndex = 63713;

	class ElfProfileQuestGroupData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37FF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x37FF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __IsGroupClosed_b__5_0(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFPROFILEQUESTGROUPDATA___C___ISGROUPCLOSED_B__5_0_OFFSET))(this, a1);
		}

	};
}
