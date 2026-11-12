#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define FCAIGPNHFFB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x165C6E20)
#define FCAIGPNHFFB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x165C6E60)
#define FCAIGPNHFFB___C___SHOWFADEINEFFECTS_B__2_0_OFFSET UNITYSDK_OFFSET(0x165C6E70)

inline static constexpr unsigned int FCAIGPNHFFB___c_TypeDefinitionIndex = 59480;

	class FCAIGPNHFFB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48530);
		}

		static ::System::Action** StaticGet___9__2_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCAIGPNHFFB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB___C_CTOR_OFFSET))(this);
		}

		::System::Void __ShowFadeInEffects_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAIGPNHFFB___C___SHOWFADEINEFFECTS_B__2_0_OFFSET))(this);
		}

	};
