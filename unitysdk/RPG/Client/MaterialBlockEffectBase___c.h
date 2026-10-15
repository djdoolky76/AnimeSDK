#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD5CC6F0)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CC720)
#define RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET UNITYSDK_OFFSET(0xD5CC730)

namespace RPG::Client
{
	inline static constexpr unsigned int MaterialBlockEffectBase___c_TypeDefinitionIndex = 70651;

	class MaterialBlockEffectBase___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x43D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __cctor_b__35_0(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATERIALBLOCKEFFECTBASE___C___CCTOR_B__35_0_OFFSET))(this, a1);
		}

	};
}
