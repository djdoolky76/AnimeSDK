#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHOHODHOAIA;
class GPLMLPKBGGE;
class PMBMFHMKBNC;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IHCBCCNGOBL___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x16419AC0)
#define IHCBCCNGOBL___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET UNITYSDK_OFFSET(0x16419C20)

	class IHCBCCNGOBL___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::GPLMLPKBGGE*>* savedData; // 0x10
		::FHOHODHOAIA* session; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCBCCNGOBL___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _Save_b__0(::PMBMFHMKBNC* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + IHCBCCNGOBL___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET))(this, a1);
		}

	};
