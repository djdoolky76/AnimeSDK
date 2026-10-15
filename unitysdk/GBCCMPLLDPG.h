#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MazeBuffType.h"
#include "unitysdk/System/Object.h"
class DCEHAGKAHFE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GBCCMPLLDPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1594AE20)

inline static constexpr unsigned int GBCCMPLLDPG_TypeDefinitionIndex = 71618;

	class GBCCMPLLDPG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::DCEHAGKAHFE*>* AGMDLHDNBGK; // 0x10
		::RPG::GameCore::MazeBuffType GMPGDEINODK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBCCMPLLDPG_CTOR_OFFSET))(this);
		}

	};
