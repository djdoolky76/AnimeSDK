#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODGEOHLNBIP;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define ODGEOHLNBIP___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBD92E20)
#define ODGEOHLNBIP___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET UNITYSDK_OFFSET(0xBD92E60)

inline static constexpr unsigned int ODGEOHLNBIP___c__DisplayClass4_0_TypeDefinitionIndex = 67503;

	class ODGEOHLNBIP___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::ODGEOHLNBIP* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* func; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __WrapDisposedCheck_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGEOHLNBIP___C__DISPLAYCLASS4_0___WRAPDISPOSEDCHECK_B__0_OFFSET))(this);
		}

	};
