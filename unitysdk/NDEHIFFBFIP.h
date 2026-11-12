#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AOGHMIFDBDC;
class NDEHIFFBFIP;

#define NDEHIFFBFIP_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC3AB100)
#define NDEHIFFBFIP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC3AAED0)
#define NDEHIFFBFIP_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC3AB050)
#define NDEHIFFBFIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC3AAF90)
#define NDEHIFFBFIP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xC3AAFB0)
#define NDEHIFFBFIP_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3AAEA0)
#define NDEHIFFBFIP_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xC3AAE90)
#define NDEHIFFBFIP_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC3AB0C0)
#define NDEHIFFBFIP_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xC3AAFF0)
#define NDEHIFFBFIP_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xC3AAEC0)

inline static constexpr unsigned int NDEHIFFBFIP_TypeDefinitionIndex = 80852;

	class NDEHIFFBFIP : public ::DEHLMHKDEKC
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x40
		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_JKOKFFCBJLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_SET_POSITION_OFFSET))(this, a1);
		}

		static ::NDEHIFFBFIP* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::NDEHIFFBFIP*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDEHIFFBFIP_AHEEAFKFALM_OFFSET))(this);
		}

	};
