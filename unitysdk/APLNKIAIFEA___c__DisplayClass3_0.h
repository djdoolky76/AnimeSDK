#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APLNKIAIFEA;
class LHHHDBGHDCF;
class MONJFDPKFBA;
namespace RPG::Client::Promises { class IPromise; }

#define APLNKIAIFEA___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BA65E0)
#define APLNKIAIFEA___C__DISPLAYCLASS3_0__DEVELOPCARASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x15BA8520)

inline static constexpr unsigned int APLNKIAIFEA___c__DisplayClass3_0_TypeDefinitionIndex = 81811;

	class APLNKIAIFEA___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MONJFDPKFBA* carBeforeDevelop; // 0x10
		::APLNKIAIFEA* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _DevelopCarAsync_b__0(::LHHHDBGHDCF* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::LHHHDBGHDCF*))((::PBYTE)hIl2Cpp + APLNKIAIFEA___C__DISPLAYCLASS3_0__DEVELOPCARASYNC_B__0_OFFSET))(this, a1);
		}

	};
