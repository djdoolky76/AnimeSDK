#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC0DA90)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC0DAC0)
#define RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__INIT_B__5_0_OFFSET UNITYSDK_OFFSET(0xDC0DAD0)

namespace RPG::Client::Progress
{
	inline static constexpr unsigned int CakeRaceProgressInfo___c_TypeDefinitionIndex = 74850;

	class CakeRaceProgressInfo___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Converter_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client.Progress", "<>c")->GetStaticField(0x3F290);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Progress", "<>c")->GetStaticField(0x3F298);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _Init_b__5_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROGRESS_CAKERACEPROGRESSINFO___C__INIT_B__5_0_OFFSET))(this, a1);
		}

	};
}
