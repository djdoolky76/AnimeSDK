#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBEILICHGCG;
class HALHKJLBIKJ;
class HNDGFOMILAG;
class JBACCAGFHON;
namespace RPG::Client::CakeRace { class CakeRaceTriggerEventDataItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNDGFOMILAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15D810E0)
#define HNDGFOMILAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D811B0)
#define HNDGFOMILAG_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x15D81210)
#define HNDGFOMILAG_LAJNPPAHAOA_OFFSET UNITYSDK_OFFSET(0x15D813A0)
#define HNDGFOMILAG_LBBJONAANLL_OFFSET UNITYSDK_OFFSET(0x15D81610)
#define HNDGFOMILAG_MAFMOPJDFIH_OFFSET UNITYSDK_OFFSET(0x15D81070)
#define HNDGFOMILAG_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x15D810C0)

inline static constexpr unsigned int HNDGFOMILAG_TypeDefinitionIndex = 78106;

	class HNDGFOMILAG : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* ANKJMMMHCLB; // 0x10
		::System::Collections::Generic::List_1<::HALHKJLBIKJ*>* CLLOHMIFFHJ; // 0x18
		::System::Void _ctor(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + HNDGFOMILAG_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* MAFMOPJDFIH()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDGFOMILAG_MAFMOPJDFIH_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDGFOMILAG_MJGKNFEILLI_OFFSET))(this);
		}

		static ::HNDGFOMILAG* BPLPBPMEODA(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem* a1)
		{
			return ((::HNDGFOMILAG*(*)(::RPG::Client::CakeRace::CakeRaceTriggerEventDataItem*))((::PBYTE)hIl2Cpp + HNDGFOMILAG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNDGFOMILAG_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void LAJNPPAHAOA(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + HNDGFOMILAG_LAJNPPAHAOA_OFFSET))(this, a1, a2);
		}

		::System::Boolean LBBJONAANLL(::JBACCAGFHON* a1, ::DBEILICHGCG* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBACCAGFHON*, ::DBEILICHGCG*))((::PBYTE)hIl2Cpp + HNDGFOMILAG_LBBJONAANLL_OFFSET))(this, a1, a2);
		}

	};
