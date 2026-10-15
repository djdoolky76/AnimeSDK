#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/CakeRace/CakeRaceEventType.h"
#include "unitysdk/System/Object.h"
class AJNIEDDIKOI;
class JBACCAGFHON;
class OLLGLJCHNDI;
class PAIKIFFPMNH;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAIKIFFPMNH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFC2DA0)
#define PAIKIFFPMNH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC2EB0)
#define PAIKIFFPMNH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFC2F50)
#define PAIKIFFPMNH_FCDKEMLBFJO_OFFSET UNITYSDK_OFFSET(0xBFC3660)
#define PAIKIFFPMNH_JFBMIFAJICC_OFFSET UNITYSDK_OFFSET(0xBFC34B0)
#define PAIKIFFPMNH_MPJMGHJLHMO_OFFSET UNITYSDK_OFFSET(0xBFC2F90)
#define PAIKIFFPMNH_ODLECNLFPLE_OFFSET UNITYSDK_OFFSET(0xBFC39C0)
#define PAIKIFFPMNH_ONFCJOECHHJ_OFFSET UNITYSDK_OFFSET(0xBFC3190)

inline static constexpr unsigned int PAIKIFFPMNH_TypeDefinitionIndex = 78036;

	class PAIKIFFPMNH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Collections::Generic::List_1<::AJNIEDDIKOI*>*>* EFBHGNCEAEE; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_CTOR_OFFSET))(this, a1);
		}

		static ::PAIKIFFPMNH* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::PAIKIFFPMNH*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_DISPOSE_OFFSET))(this);
		}

		::System::Void MPJMGHJLHMO(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::System::Object*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_MPJMGHJLHMO_OFFSET))(this, a1, a2);
		}

		::System::Void ONFCJOECHHJ(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::OLLGLJCHNDI* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::OLLGLJCHNDI*, ::System::Object*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_ONFCJOECHHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JFBMIFAJICC(::RPG::Client::LittleGame::CakeRace::CakeRaceEventType a1, ::OLLGLJCHNDI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::CakeRace::CakeRaceEventType, ::OLLGLJCHNDI*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_JFBMIFAJICC_OFFSET))(this, a1, a2);
		}

		::System::Void FCDKEMLBFJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_FCDKEMLBFJO_OFFSET))(this, a1);
		}

		static ::System::Boolean ODLECNLFPLE(::OLLGLJCHNDI* a1)
		{
			return ((::System::Boolean(*)(::OLLGLJCHNDI*))((::PBYTE)hIl2Cpp + PAIKIFFPMNH_ODLECNLFPLE_OFFSET))(a1);
		}

	};
