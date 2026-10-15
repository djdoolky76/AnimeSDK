#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Entity.h"
#include "unitysdk/RPG/Client/LittleGame/MonopolyGameState.h"
class KGMBGMIGHOE;
class MMKLPBKJMCI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LGDKLEKKDLC_ABAKJJNCNOJ_OFFSET UNITYSDK_OFFSET(0x1C90DC30)
#define LGDKLEKKDLC_CKFBIFODCPJ_OFFSET UNITYSDK_OFFSET(0x1C90DB00)
#define LGDKLEKKDLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90DD90)
#define LGDKLEKKDLC_EJOKIAIEDPP_OFFSET UNITYSDK_OFFSET(0x1C90D9D0)
#define LGDKLEKKDLC_JKECHJIELDD_OFFSET UNITYSDK_OFFSET(0x1C90D8C0)
#define LGDKLEKKDLC_KMBDGONCGIN_OFFSET UNITYSDK_OFFSET(0x1C90D970)
#define LGDKLEKKDLC_MALHCDOEEEI_OFFSET UNITYSDK_OFFSET(0x1C90DC80)
#define LGDKLEKKDLC_MNKBDLLKLKB_OFFSET UNITYSDK_OFFSET(0x1C90DD30)

inline static constexpr unsigned int LGDKLEKKDLC_TypeDefinitionIndex = 42642;

	class LGDKLEKKDLC : public ::Entitas::Entity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_CTOR_OFFSET))(this);
		}

		::MMKLPBKJMCI* JKECHJIELDD()
		{
			return ((::MMKLPBKJMCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_JKECHJIELDD_OFFSET))(this);
		}

		::System::Boolean KMBDGONCGIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_KMBDGONCGIN_OFFSET))(this);
		}

		::System::Void EJOKIAIEDPP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* a3, ::KGMBGMIGHOE* a4, ::RPG::Client::LittleGame::MonopolyGameState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::KGMBGMIGHOE*>*, ::KGMBGMIGHOE*, ::RPG::Client::LittleGame::MonopolyGameState))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_EJOKIAIEDPP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CKFBIFODCPJ(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::List_1<::KGMBGMIGHOE*>* a3, ::KGMBGMIGHOE* a4, ::RPG::Client::LittleGame::MonopolyGameState a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::KGMBGMIGHOE*>*, ::KGMBGMIGHOE*, ::RPG::Client::LittleGame::MonopolyGameState))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_CKFBIFODCPJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ABAKJJNCNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_ABAKJJNCNOJ_OFFSET))(this);
		}

		::MMKLPBKJMCI* MALHCDOEEEI()
		{
			return ((::MMKLPBKJMCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_MALHCDOEEEI_OFFSET))(this);
		}

		::System::Boolean MNKBDLLKLKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDKLEKKDLC_MNKBDLLKLKB_OFFSET))(this);
		}

	};
