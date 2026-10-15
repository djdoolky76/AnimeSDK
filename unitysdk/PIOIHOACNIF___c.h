#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOIHOACNIF;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define PIOIHOACNIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC26E5B0)
#define PIOIHOACNIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC26E5F0)
#define PIOIHOACNIF___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET UNITYSDK_OFFSET(0xC26E600)
#define PIOIHOACNIF___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET UNITYSDK_OFFSET(0xC26E680)

inline static constexpr unsigned int PIOIHOACNIF___c_TypeDefinitionIndex = 52836;

	class PIOIHOACNIF___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::PIOIHOACNIF*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::PIOIHOACNIF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD30);
		}

		static ::System::Action_1<::PIOIHOACNIF*>** StaticGet___9__9_0()
		{
			return (::System::Action_1<::PIOIHOACNIF*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOIHOACNIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C_CTOR_OFFSET))(this);
		}

		::System::Void _get__OnPlayerCreateAction_b__9_0(::PIOIHOACNIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOIHOACNIF*))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C__GET__ONPLAYERCREATEACTION_B__9_0_OFFSET))(this, a1);
		}

		::System::Void _get__OnPlayerDestroyAction_b__11_0(::PIOIHOACNIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOIHOACNIF*))((::PBYTE)hIl2Cpp + PIOIHOACNIF___C__GET__ONPLAYERDESTROYACTION_B__11_0_OFFSET))(this, a1);
		}

	};
