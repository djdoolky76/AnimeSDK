#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionBase; }

#define GFEPMMAFPPN_AEJKGIGAKMN_OFFSET UNITYSDK_OFFSET(0x1C627BA0)
#define GFEPMMAFPPN_HBDLMPFGDJN_OFFSET UNITYSDK_OFFSET(0x1C63B810)

	class GFEPMMAFPPN : public ::System::Object
	{
	public:
		static ::System::Void AEJKGIGAKMN(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>*, ::PBGNKMMDBGD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GFEPMMAFPPN_AEJKGIGAKMN_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void HBDLMPFGDJN(::RPG::GameCore::CakeRaceActionBase* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::CakeRaceActionBase*, ::PBGNKMMDBGD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + GFEPMMAFPPN_HBDLMPFGDJN_OFFSET))(a1, a2, a3, a4);
		}

	};
