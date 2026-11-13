#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AssemblyPhase.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class GDCBKFDNOCL;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OIFNCDILIHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E075700)

inline static constexpr unsigned int OIFNCDILIHL_TypeDefinitionIndex = 44760;

	class OIFNCDILIHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GDCBKFDNOCL*>* JJJNPLOLJGE; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::IngredientKind>* HCLJONMCANI; // 0x18
		::System::UInt32 BGJMONEGGGO; // 0x20
		::RPG::Client::LittleGame::ComicDessert::AssemblyPhase PPOIJHJIMLL; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIFNCDILIHL_CTOR_OFFSET))(this);
		}

	};
