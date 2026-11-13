#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class PFFMOOLAIHJ;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOKOBANBMCF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B4E2AA0)
#define JOKOBANBMCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4E2D10)
#define JOKOBANBMCF_ECNNDACGNBF_OFFSET UNITYSDK_OFFSET(0x1B4E2BB0)

inline static constexpr unsigned int JOKOBANBMCF_TypeDefinitionIndex = 58948;

	class JOKOBANBMCF : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PFFMOOLAIHJ*>* KONGEOCCIHA; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKOBANBMCF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOKOBANBMCF_CLEAR_OFFSET))(this);
		}

		::System::Void ECNNDACGNBF(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + JOKOBANBMCF_ECNNDACGNBF_OFFSET))(this, a1, a2, a3);
		}

	};
