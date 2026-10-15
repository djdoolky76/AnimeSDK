#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS14_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD207C80)
#define CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD209DF0)
#define CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xD209F90)
#define CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xD209FB0)
#define CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0xD209FD0)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass14_0_TypeDefinitionIndex = 80268;

	class CJGNCPIDGNH___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__2; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x18
		::MBJOEPEGLII* session; // 0x20
		::CJGNCPIDGNH* __4__this; // 0x28
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x30
		::FJPMJPEKLJL gameMode; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS14_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _TryReconnectToFight_b__3()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS14_0__TRYRECONNECTTOFIGHT_B__3_OFFSET))(this);
		}

	};
