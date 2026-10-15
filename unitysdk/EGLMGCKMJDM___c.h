#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BlendConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EGLMGCKMJDM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1451EB70)
#define EGLMGCKMJDM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1451EBB0)
#define EGLMGCKMJDM___C___ENSUREBLENDCONFIGSLOADED_B__13_0_OFFSET UNITYSDK_OFFSET(0x1451EBC0)
#define EGLMGCKMJDM___C___ENSUREBLENDCONFIGSLOADED_B__13_1_OFFSET UNITYSDK_OFFSET(0x1451EBE0)

inline static constexpr unsigned int EGLMGCKMJDM___c_TypeDefinitionIndex = 81763;

	class EGLMGCKMJDM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::BlendConfig*, ::RPG::Client::BlendConfig*>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::RPG::Client::BlendConfig*, ::RPG::Client::BlendConfig*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D98);
		}

		static ::System::Func_2<::RPG::Client::BlendConfig*, ::System::String*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::RPG::Client::BlendConfig*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGLMGCKMJDM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLMGCKMJDM___C_CTOR_OFFSET))(this);
		}

		::System::String* __EnsureBlendConfigsLoaded_b__13_0(::RPG::Client::BlendConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::BlendConfig*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM___C___ENSUREBLENDCONFIGSLOADED_B__13_0_OFFSET))(this, a1);
		}

		::RPG::Client::BlendConfig* __EnsureBlendConfigsLoaded_b__13_1(::RPG::Client::BlendConfig* a1)
		{
			return ((::RPG::Client::BlendConfig*(*)(::PVOID, ::RPG::Client::BlendConfig*))((::PBYTE)hIl2Cpp + EGLMGCKMJDM___C___ENSUREBLENDCONFIGSLOADED_B__13_1_OFFSET))(this, a1);
		}

	};
