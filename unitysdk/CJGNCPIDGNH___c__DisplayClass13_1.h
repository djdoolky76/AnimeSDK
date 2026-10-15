#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }

#define CJGNCPIDGNH___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD209500)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_1__CHECKRECONNECTTOFIGHT_B__2_OFFSET UNITYSDK_OFFSET(0xD2095C0)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass13_1_TypeDefinitionIndex = 80267;

	template <typename T>
	class CJGNCPIDGNH___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Boolean isInFighting; // 0x18
		::System::Byte _padding0[0x3];
		::FJPMJPEKLJL reconnectGameMode; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_1__CHECKRECONNECTTOFIGHT_B__2_OFFSET))(this);
		}

	};
