#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GNBFLJHKKLB;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace RPG::GameCore { class LevelCurveInstance; }

#define NMBDDDBDGED_BJMPKLKMNAG_OFFSET UNITYSDK_OFFSET(0xC564140)
#define NMBDDDBDGED_CLEAR_OFFSET UNITYSDK_OFFSET(0xC563C20)
#define NMBDDDBDGED_CODEIAIJDBI_OFFSET UNITYSDK_OFFSET(0xC563F10)
#define NMBDDDBDGED_CTOR_OFFSET UNITYSDK_OFFSET(0xC5652A0)
#define NMBDDDBDGED_DHHNEFGBEGG_OFFSET UNITYSDK_OFFSET(0xC564A20)
#define NMBDDDBDGED_IFNDELDFINE_OFFSET UNITYSDK_OFFSET(0xC564120)
#define NMBDDDBDGED_JAAJDCJBHBH_OFFSET UNITYSDK_OFFSET(0xC564DF0)
#define NMBDDDBDGED_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC563B90)
#define NMBDDDBDGED_LOEDCPALBGF_OFFSET UNITYSDK_OFFSET(0xC564680)
#define NMBDDDBDGED_MDFAGIBJIAE_OFFSET UNITYSDK_OFFSET(0xC564350)
#define NMBDDDBDGED_MMCKDFFNDDG_OFFSET UNITYSDK_OFFSET(0xC564FB0)
#define NMBDDDBDGED_MMDICFCCAGK_OFFSET UNITYSDK_OFFSET(0xC563CF0)
#define NMBDDDBDGED_OBPKGNENMMA_OFFSET UNITYSDK_OFFSET(0xC564820)

inline static constexpr unsigned int NMBDDDBDGED_TypeDefinitionIndex = 71612;

	class NMBDDDBDGED : public ::System::Object
	{
	public:
		::GNBFLJHKKLB* GGDMEDCNELI; // 0x10
		::RPG::GameCore::LevelCurveInstance* OGNOFLGLAHM; // 0x18
		::UnityEngine::Vector3 BCKLGIDNGPB; // 0x20
		::System::Int32 FCHELGCIIOB; // 0x2C
		::UnityEngine::Vector3 BKKLBFEGAKO; // 0x30
		::System::Single LOBALJEAOPJ; // 0x3C
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

		::System::Single OBPKGNENMMA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NMBDDDBDGED_OBPKGNENMMA_OFFSET))(this, a1);
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
