#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGDJDEGOJE_KEDOECJLFBK.h"
#include "unitysdk/RPG/GameCore/BattleOperationType.h"
#include "unitysdk/RPG/GameCore/EventType.h"
class EKFMIDBJDIA;

#define DNGDJDEGOJE_KLOIEOBGJCN_CTOR_OFFSET UNITYSDK_OFFSET(0x12CBF010)
#define DNGDJDEGOJE_KLOIEOBGJCN_HLHAKABEAFI_OFFSET UNITYSDK_OFFSET(0x12CBFA60)
#define DNGDJDEGOJE_KLOIEOBGJCN_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x12CBFAF0)
#define DNGDJDEGOJE_KLOIEOBGJCN_LEJIHINKCAP_OFFSET UNITYSDK_OFFSET(0x12CBF870)
#define DNGDJDEGOJE_KLOIEOBGJCN_PCDLMAJCOPC_OFFSET UNITYSDK_OFFSET(0x12CBFA00)

inline static constexpr unsigned int DNGDJDEGOJE_KLOIEOBGJCN_TypeDefinitionIndex = 60143;

	class DNGDJDEGOJE_KLOIEOBGJCN : public ::DNGDJDEGOJE_KEDOECJLFBK
	{
	public:
		::RPG::GameCore::BattleOperationType GMCNLFICNOB; // 0x20
		::System::Void _ctor(::RPG::GameCore::BattleOperationType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleOperationType))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KLOIEOBGJCN_CTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::BattleOperationType>* HLHAKABEAFI()
		{
			return ((::Il2CppArray<::RPG::GameCore::BattleOperationType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KLOIEOBGJCN_HLHAKABEAFI_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KLOIEOBGJCN_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Boolean PCDLMAJCOPC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KLOIEOBGJCN_PCDLMAJCOPC_OFFSET))(this, a1);
		}

		::RPG::GameCore::EventType LEJIHINKCAP()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDJDEGOJE_KLOIEOBGJCN_LEJIHINKCAP_OFFSET))(this);
		}

	};
