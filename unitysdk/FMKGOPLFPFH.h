#pragma once
#include "unitysdk/unitysdk.h"
class IFBFJDCECML;
class PAPOPANPGIJ;
namespace RPG::Client::LittleGameShare { class ST_CakeRaceByCanEnterLock; }

#define FMKGOPLFPFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C624710)
#define FMKGOPLFPFH_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C624790)

inline static constexpr unsigned int FMKGOPLFPFH_TypeDefinitionIndex = 36979;

	class FMKGOPLFPFH
	{
	public:
		::IFBFJDCECML* JMMECHDFLKH; // 0x28
		::System::Void _ctor(::PAPOPANPGIJ* a1, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PAPOPANPGIJ*, ::RPG::Client::LittleGameShare::ST_CakeRaceByCanEnterLock*))((::PBYTE)hIl2Cpp + FMKGOPLFPFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKGOPLFPFH_EVALUATE_OFFSET))(this);
		}

	};
