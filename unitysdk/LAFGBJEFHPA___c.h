#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define LAFGBJEFHPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE71520)
#define LAFGBJEFHPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE71550)
#define LAFGBJEFHPA___C___TRYCLOSEROGUETOURNENTRANCEPAGEINSTACK_B__11_0_OFFSET UNITYSDK_OFFSET(0xBE71560)

inline static constexpr unsigned int LAFGBJEFHPA___c_TypeDefinitionIndex = 69771;

	class LAFGBJEFHPA___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::RPG::Client::Promises::IPromise*>** StaticGet___9__11_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65640);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65648);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __TryCloseRogueTournEntrancePageInStack_b__11_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C___TRYCLOSEROGUETOURNENTRANCEPAGEINSTACK_B__11_0_OFFSET))(this);
		}

	};
