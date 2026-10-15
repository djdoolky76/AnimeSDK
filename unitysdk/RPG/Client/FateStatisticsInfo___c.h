#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJHMNDBJPND;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_FATESTATISTICSINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCFD9110)
#define RPG_CLIENT_FATESTATISTICSINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCFD9150)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_0_OFFSET UNITYSDK_OFFSET(0xCFD9160)
#define RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET UNITYSDK_OFFSET(0xCFD9200)

namespace RPG::Client
{
	class FateStatisticsInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59B80);
		}

		static ::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>** StaticGet___9__4_2()
		{
			return (::System::Comparison_1<::System::Collections::Generic::KeyValuePair*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59B88);
		}

		static ::System::Func_1<::System::String*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x59B90);
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

		::System::Int32 __SyncDifficultyInfo_b__4_2(::System::Collections::Generic::KeyValuePair* a1, ::System::Collections::Generic::KeyValuePair* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATESTATISTICSINFO___C___SYNCDIFFICULTYINFO_B__4_2_OFFSET))(this, a1, a2);
		}

	};
}
