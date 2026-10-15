#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CJGNCPIDGNH;
class FMHEHLIFNGJ;
class MBJOEPEGLII;
class PJMGBLIFDFP;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD204AB0)
#define CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD20A220)
#define CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD20A340)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass2_0_TypeDefinitionIndex = 80270;

	class CJGNCPIDGNH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MBJOEPEGLII* session; // 0x10
		::CJGNCPIDGNH* __4__this; // 0x18
		::FMHEHLIFNGJ* extInfo; // 0x20
		::PJMGBLIFDFP* roomExtInfo; // 0x28
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__1; // 0x30
		::System::UInt32 createParam; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET))(this);
		}

	};
