#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCMFHHKJDEE;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_STORYLINEDATA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE142C50)
#define RPG_CLIENT_STORYLINEDATA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE142C80)
#define RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET UNITYSDK_OFFSET(0xE142C90)
#define RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__44_0_OFFSET UNITYSDK_OFFSET(0xE142CF0)

namespace RPG::Client
{
	class StoryLineData___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::MCMFHHKJDEE*, ::System::UInt32>** StaticGet___9__37_0()
		{
			return (::System::Converter_2<::MCMFHHKJDEE*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F7C0);
		}

		static ::System::Func_2<::MCMFHHKJDEE*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::MCMFHHKJDEE*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F7C8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6F7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetAllFloorIDs_b__37_0(::MCMFHHKJDEE* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::MCMFHHKJDEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C__GETALLFLOORIDS_B__37_0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __PrepareFloorData_b__44_0(::MCMFHHKJDEE* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MCMFHHKJDEE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STORYLINEDATA___C___PREPAREFLOORDATA_B__44_0_OFFSET))(this, a1);
		}

	};
}
