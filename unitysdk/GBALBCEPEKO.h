#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class GBALBCEPEKO;

#define GBALBCEPEKO_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x16879A70)
#define GBALBCEPEKO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x168798B0)
#define GBALBCEPEKO_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x168799C0)
#define GBALBCEPEKO_CTOR_OFFSET UNITYSDK_OFFSET(0x16879940)
#define GBALBCEPEKO_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x16879880)
#define GBALBCEPEKO_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0x16879870)
#define GBALBCEPEKO_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x16879A30)
#define GBALBCEPEKO_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x16879960)
#define GBALBCEPEKO_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x168798A0)

inline static constexpr unsigned int GBALBCEPEKO_TypeDefinitionIndex = 80858;

	class GBALBCEPEKO : public ::DEHLMHKDEKC
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x40
		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + GBALBCEPEKO_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + GBALBCEPEKO_JKOKFFCBJLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GBALBCEPEKO_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GBALBCEPEKO_SET_POSITION_OFFSET))(this, a1);
		}

		static ::GBALBCEPEKO* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::GBALBCEPEKO*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + GBALBCEPEKO_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GBALBCEPEKO_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBALBCEPEKO_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBALBCEPEKO_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBALBCEPEKO_AHEEAFKFALM_OFFSET))(this);
		}

	};
