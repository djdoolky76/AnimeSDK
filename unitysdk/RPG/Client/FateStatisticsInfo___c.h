#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
class HJHMNDBJPND;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_FATESTATISTICSINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD95A740)
#define RPG_CLIENT_FATESTATISTICSINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD95A780)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0xD95A790)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET UNITYSDK_OFFSET(0xD95A830)

namespace RPG::Client
{
	inline static constexpr unsigned int FateStatisticsInfo___c_TypeDefinitionIndex = 65577;

	class FateStatisticsInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*>>** StaticGet___9__4_2()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*>>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65E90);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65E98);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x65EA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C_CTOR_OFFSET))(this);
		}

		::System::String* __SyncDifficultyInfo_b__4_0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET))(this);
		}

		::System::Int32 __SyncDifficultyInfo_b__4_2(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*> a1, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*>, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::HJHMNDBJPND*>))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET))(this, a1, a2);
		}

	};
}
