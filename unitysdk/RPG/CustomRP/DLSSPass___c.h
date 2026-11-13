#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define RPG_CUSTOMRP_DLSSPASS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x198BF930)
#define RPG_CUSTOMRP_DLSSPASS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x198BF960)
#define RPG_CUSTOMRP_DLSSPASS___C__WARMUP_B__4_0_OFFSET UNITYSDK_OFFSET(0x198BF970)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass___c_TypeDefinitionIndex = 38491;

	class DLSSPass___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x27F00);
		}

		static ::System::Action** StaticGet___9__4_0()
		{
			return (::System::Action**)UnitySDK::FromName("RPG.CustomRP", "<>c")->GetStaticField(0x27F08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C_CTOR_OFFSET))(this);
		}

		::System::Void _Warmup_b__4_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DLSSPASS___C__WARMUP_B__4_0_OFFSET))(this);
		}

	};
}
