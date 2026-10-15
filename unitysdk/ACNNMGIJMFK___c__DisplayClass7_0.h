#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define ACNNMGIJMFK___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1274B0)
#define ACNNMGIJMFK___C__DISPLAYCLASS7_0___CONFIRMAVATARONLYCONFLICTCLEAR_B__0_OFFSET UNITYSDK_OFFSET(0xB128A30)

inline static constexpr unsigned int ACNNMGIJMFK___c__DisplayClass7_0_TypeDefinitionIndex = 81511;

	class ACNNMGIJMFK___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::System::Boolean>* result; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __ConfirmAvatarOnlyConflictClear_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ACNNMGIJMFK___C__DISPLAYCLASS7_0___CONFIRMAVATARONLYCONFLICTCLEAR_B__0_OFFSET))(this, a1);
		}

	};
