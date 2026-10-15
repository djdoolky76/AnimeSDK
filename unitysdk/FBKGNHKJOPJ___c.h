#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define FBKGNHKJOPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156A2AB0)
#define FBKGNHKJOPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156A2AE0)
#define FBKGNHKJOPJ___C___SHOWLAST_B__9_0_OFFSET UNITYSDK_OFFSET(0x156A2AF0)

inline static constexpr unsigned int FBKGNHKJOPJ___c_TypeDefinitionIndex = 73044;

	class FBKGNHKJOPJ___c : public ::System::Object
	{
	public:
		static ::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__9_0()
		{
			return (::System::Converter_2<::RPG::Client::UIController*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E310);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __ShowLast_b__9_0(::RPG::Client::UIController* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + FBKGNHKJOPJ___C___SHOWLAST_B__9_0_OFFSET))(this, a1);
		}

	};
