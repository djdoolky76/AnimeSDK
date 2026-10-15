#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHOHODHOAIA;
class GPLMLPKBGGE;
class PMBMFHMKBNC;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define IHCBCCNGOBL___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1640C720)
#define IHCBCCNGOBL___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET UNITYSDK_OFFSET(0x1640C880)

inline static constexpr unsigned int IHCBCCNGOBL___c__DisplayClass13_0_TypeDefinitionIndex = 80219;

	class IHCBCCNGOBL___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::FHOHODHOAIA* session; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::GPLMLPKBGGE*>* savedData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHCBCCNGOBL___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _Save_b__0(::PMBMFHMKBNC* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::PMBMFHMKBNC*))((::PBYTE)hIl2Cpp + IHCBCCNGOBL___C__DISPLAYCLASS13_0__SAVE_B__0_OFFSET))(this, a1);
		}

	};
