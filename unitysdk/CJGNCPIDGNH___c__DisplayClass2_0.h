#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CJGNCPIDGNH;
class FMHEHLIFNGJ;
class MBJOEPEGLII;
class PJMGBLIFDFP;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20BCB0)
#define CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD211420)
#define CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD211560)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass2_0_TypeDefinitionIndex = 80271;

	class CJGNCPIDGNH___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::CJGNCPIDGNH* __4__this; // 0x10
		::FMHEHLIFNGJ* extInfo; // 0x18
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__1; // 0x20
		::MBJOEPEGLII* session; // 0x28
		::PJMGBLIFDFP* roomExtInfo; // 0x30
		::System::UInt32 createParam; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__0(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS2_0__CREATELOBBY_B__1_OFFSET))(this);
		}

	};
