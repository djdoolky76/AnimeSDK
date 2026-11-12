#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJJKNHPLHDI.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/ComicDessertGamePhase.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/PhaseScope.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/DPFEPCCHCND.h"
#include "unitysdk/System/Nullable_1.h"
class HLJNBBHKKMI;
class MJAOHLLPLGK;
namespace Entitas { class IExecuteSystem; }
namespace Entitas { class ISystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFLJOAMPADJ_CTOR_OFFSET UNITYSDK_OFFSET(0xD5C63A0)
#define AFLJOAMPADJ_DBCJCOGGODF_OFFSET UNITYSDK_OFFSET(0xD5C7410)
#define AFLJOAMPADJ_EGCCPPPNMLM_OFFSET UNITYSDK_OFFSET(0xD5C75C0)
#define AFLJOAMPADJ_EXECUTE_OFFSET UNITYSDK_OFFSET(0xD5C76D0)

inline static constexpr unsigned int AFLJOAMPADJ_TypeDefinitionIndex = 79992;

	class AFLJOAMPADJ : public ::DJJKNHPLHDI
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* EAJHANHPIMJ; // 0x30
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x38
		::System::Collections::Generic::List_1<::System::ValueTuple_3<::Entitas::IExecuteSystem*, ::RPG::Client::LittleGame::ComicDessert::PhaseScope, ::System::Boolean>>* ECIKLDGMMNJ; // 0x40
		::System::Void _ctor(::MJAOHLLPLGK* a1, ::HLJNBBHKKMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MJAOHLLPLGK*, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + AFLJOAMPADJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void DBCJCOGGODF(::Entitas::ISystem* a1, ::RPG::Client::LittleGame::ComicDessert::PhaseScope a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::ISystem*, ::RPG::Client::LittleGame::ComicDessert::PhaseScope, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLJOAMPADJ_DBCJCOGGODF_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::LittleGame::ComicDessert::PhaseScope EGCCPPPNMLM(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase a1, ::System::Nullable_1<::DPFEPCCHCND> a2)
		{
			return ((::RPG::Client::LittleGame::ComicDessert::PhaseScope(*)(::RPG::Client::LittleGame::ComicDessert::ComicDessertGamePhase, ::System::Nullable_1<::DPFEPCCHCND>))((::PBYTE)hIl2Cpp + AFLJOAMPADJ_EGCCPPPNMLM_OFFSET))(a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFLJOAMPADJ_EXECUTE_OFFSET))(this);
		}

	};
