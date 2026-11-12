#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABGOCJPFBI;
class DIBNPCGEPAC;
class DIBNPCGEPAC_NECNAEDALDK;
class OCOAGBCDNBC;

#define DIBNPCGEPAC_HDIFLBCAGPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFA5C80)
#define DIBNPCGEPAC_HDIFLBCAGPJ_ENTER_OFFSET UNITYSDK_OFFSET(0x1EFAC690)
#define DIBNPCGEPAC_HDIFLBCAGPJ_EXIT_OFFSET UNITYSDK_OFFSET(0x1EFACBF0)
#define DIBNPCGEPAC_HDIFLBCAGPJ_TICK_OFFSET UNITYSDK_OFFSET(0x1EFAC6A0)

inline static constexpr unsigned int DIBNPCGEPAC_HDIFLBCAGPJ_TypeDefinitionIndex = 45017;

	class DIBNPCGEPAC_HDIFLBCAGPJ : public ::System::Object
	{
	public:
		::DIBNPCGEPAC_NECNAEDALDK* HINLDHLJEOG; // 0x10
		::DABGOCJPFBI* NODDCAJHNGO; // 0x18
		::System::Void _ctor(::OCOAGBCDNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCOAGBCDNBC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HDIFLBCAGPJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void Enter(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HDIFLBCAGPJ_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::DIBNPCGEPAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIBNPCGEPAC*))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HDIFLBCAGPJ_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIBNPCGEPAC_HDIFLBCAGPJ_EXIT_OFFSET))(this);
		}

	};
