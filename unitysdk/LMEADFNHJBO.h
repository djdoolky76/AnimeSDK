#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class SlotMachineController; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }

#define LMEADFNHJBO_AMJIAGFHNHJ_OFFSET UNITYSDK_OFFSET(0xB77B230)
#define LMEADFNHJBO_BMFPANBLCJK_OFFSET UNITYSDK_OFFSET(0xB77B100)
#define LMEADFNHJBO_COKPFADHFEF_OFFSET UNITYSDK_OFFSET(0xB77AD70)
#define LMEADFNHJBO_CTOR_OFFSET UNITYSDK_OFFSET(0xB77AC40)
#define LMEADFNHJBO_DHKFOJHAGHE_OFFSET UNITYSDK_OFFSET(0xB77B1A0)
#define LMEADFNHJBO_OBOJOPHLKKE_OFFSET UNITYSDK_OFFSET(0xB77AC50)

inline static constexpr unsigned int LMEADFNHJBO_TypeDefinitionIndex = 70758;

	class LMEADFNHJBO : public ::System::Object
	{
	public:
		::System::Action* MPKAFEJFNKN; // 0x10
		::UnityEngine::Coroutine* NAEJCNNMAKA; // 0x18
		::RPG::Client::SlotMachineController* CEODOONOFBM; // 0x20
		::System::Single PGMIOKKLHIE; // 0x28
		::System::Void _ctor(::RPG::Client::SlotMachineController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SlotMachineController*))((::PBYTE)hIl2Cpp + LMEADFNHJBO_CTOR_OFFSET))(this, a1);
		}

		::System::Void OBOJOPHLKKE(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + LMEADFNHJBO_OBOJOPHLKKE_OFFSET))(this, a1);
		}

		::System::Void COKPFADHFEF(::Il2CppArray<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Boolean a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + LMEADFNHJBO_COKPFADHFEF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* BMFPANBLCJK(::System::Boolean a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMEADFNHJBO_BMFPANBLCJK_OFFSET))(this, a1);
		}

		::System::Single DHKFOJHAGHE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LMEADFNHJBO_DHKFOJHAGHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AMJIAGFHNHJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMEADFNHJBO_AMJIAGFHNHJ_OFFSET))(this);
		}

	};
