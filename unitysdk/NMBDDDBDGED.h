#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNBFLJHKKLB;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define NMBDDDBDGED_BJMPKLKMNAG_OFFSET UNITYSDK_OFFSET(0xBC7C690)
#define NMBDDDBDGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xBC7C170)
#define NMBDDDBDGED_CODEIAIJDBI_OFFSET UNITYSDK_OFFSET(0xBC7C460)
#define NMBDDDBDGED_CTOR_OFFSET UNITYSDK_OFFSET(0xBC7D5F0)
#define NMBDDDBDGED_DHHNEFGBEGG_OFFSET UNITYSDK_OFFSET(0xBC7CD70)
#define NMBDDDBDGED_IFNDELDFINE_OFFSET UNITYSDK_OFFSET(0xBC7C670)
#define NMBDDDBDGED_JAAJDCJBHBH_OFFSET UNITYSDK_OFFSET(0xBC7D140)
#define NMBDDDBDGED_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBC7C0E0)
#define NMBDDDBDGED_LOEDCPALBGF_OFFSET UNITYSDK_OFFSET(0xBC7CBD0)
#define NMBDDDBDGED_MDFAGIBJIAE_OFFSET UNITYSDK_OFFSET(0xBC7C8A0)
#define NMBDDDBDGED_MMCKDFFNDDG_OFFSET UNITYSDK_OFFSET(0xBC7D300)
#define NMBDDDBDGED_MMDICFCCAGK_OFFSET UNITYSDK_OFFSET(0xBC7C240)

inline static constexpr unsigned int NMBDDDBDGED_TypeDefinitionIndex = 69655;

	class NMBDDDBDGED : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelCurveInstance* OGNOFLGLAHM; // 0x10
		::GNBFLJHKKLB* GGDMEDCNELI; // 0x18
		::System::Int32 FCHELGCIIOB; // 0x20
		::System::Single LOBALJEAOPJ; // 0x24
		::UnityEngine::Vector3 BCKLGIDNGPB; // 0x28
		::UnityEngine::Vector3 BKKLBFEGAKO; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBDDDBDGED_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + NMBDDDBDGED_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBDDDBDGED_CLEAR_OFFSET))(this);
		}

		::System::Single MMDICFCCAGK(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NMBDDDBDGED_MMDICFCCAGK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 MDFAGIBJIAE(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NMBDDDBDGED_MDFAGIBJIAE_OFFSET))(this, a1, a2);
		}

		::System::Single LOEDCPALBGF(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBDDDBDGED_LOEDCPALBGF_OFFSET))(this, a1);
		}

		::System::Boolean DHHNEFGBEGG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMBDDDBDGED_DHHNEFGBEGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JAAJDCJBHBH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMBDDDBDGED_JAAJDCJBHBH_OFFSET))(this, a1);
		}

		::System::Void CODEIAIJDBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBDDDBDGED_CODEIAIJDBI_OFFSET))(this);
		}

		::System::Void BJMPKLKMNAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBDDDBDGED_BJMPKLKMNAG_OFFSET))(this);
		}

		::System::Void MMCKDFFNDDG(::RPG::Client::TrackCameraOverrideWayPointType a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackCameraOverrideWayPointType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NMBDDDBDGED_MMCKDFFNDDG_OFFSET))(this, a1, a2);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* IFNDELDFINE()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBDDDBDGED_IFNDELDFINE_OFFSET))(this);
		}

	};
