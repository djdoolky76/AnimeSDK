#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AECMCBAHALK;
class CHHGFHIPHAE;
class HIJGDJLAOKI;
namespace RPG::GameCore { class StageMonsterWave; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIJGDJLAOKI_AMLPILCDEFB_OFFSET UNITYSDK_OFFSET(0x15CDEE40)
#define HIJGDJLAOKI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CDEC10)
#define HIJGDJLAOKI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CDEE00)
#define HIJGDJLAOKI_LPILDKJLDKH_OFFSET UNITYSDK_OFFSET(0x15CDEAB0)

inline static constexpr unsigned int HIJGDJLAOKI_TypeDefinitionIndex = 56306;

	class HIJGDJLAOKI : public ::System::Object
	{
	public:
		::CHHGFHIPHAE* IHNJNKIPBJH; // 0x10
		::System::Collections::Generic::List_1<::AECMCBAHALK*>* ABDAGGKFAOD; // 0x18
		::System::UInt32 DPDAPPGPEAM; // 0x20
		::System::UInt32 EGFDAKGDHLA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJGDJLAOKI_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* LPILDKJLDKH()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJGDJLAOKI_LPILDKJLDKH_OFFSET))(this);
		}

		static ::HIJGDJLAOKI* BPLPBPMEODA(::RPG::GameCore::StageMonsterWave* a1, ::System::UInt32 a2)
		{
			return ((::HIJGDJLAOKI*(*)(::RPG::GameCore::StageMonsterWave*, ::System::UInt32))((::PBYTE)hIl2Cpp + HIJGDJLAOKI_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::HIJGDJLAOKI*>* AMLPILCDEFB(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>* a1)
		{
			return ((::Il2CppArray<::HIJGDJLAOKI*>*(*)(::Il2CppArray<::RPG::GameCore::StageMonsterWave*>*))((::PBYTE)hIl2Cpp + HIJGDJLAOKI_AMLPILCDEFB_OFFSET))(a1);
		}

	};
