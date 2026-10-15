#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define HGAAAOGMIJB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15C820D0)
#define HGAAAOGMIJB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15C82110)
#define HGAAAOGMIJB___C___PLAYSTORY_B__4_0_OFFSET UNITYSDK_OFFSET(0x15C82120)

inline static constexpr unsigned int HGAAAOGMIJB___c_TypeDefinitionIndex = 67400;

	class HGAAAOGMIJB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13950);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__4_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __PlayStory_b__4_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGAAAOGMIJB___C___PLAYSTORY_B__4_0_OFFSET))(this);
		}

	};
