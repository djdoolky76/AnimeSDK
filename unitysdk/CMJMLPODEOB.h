#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrackCameraOverrideWayPointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MEPPNFLLMEN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CMJMLPODEOB_CLEAR_OFFSET UNITYSDK_OFFSET(0xDA395C0)
#define CMJMLPODEOB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3AB60)
#define CMJMLPODEOB_DHHNEFGBEGG_OFFSET UNITYSDK_OFFSET(0xDA3A4A0)
#define CMJMLPODEOB_ELEGKPGNPJL_OFFSET UNITYSDK_OFFSET(0xDA3A810)
#define CMJMLPODEOB_GEBIBLMKJAK_OFFSET UNITYSDK_OFFSET(0xDA39FD0)
#define CMJMLPODEOB_IDHPLLHNJMC_OFFSET UNITYSDK_OFFSET(0xDA39270)
#define CMJMLPODEOB_JAAJDCJBHBH_OFFSET UNITYSDK_OFFSET(0xDA397C0)
#define CMJMLPODEOB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xDA39180)
#define CMJMLPODEOB_LOEDCPALBGF_OFFSET UNITYSDK_OFFSET(0xDA39630)
#define CMJMLPODEOB_MDFAGIBJIAE_OFFSET UNITYSDK_OFFSET(0xDA39430)
#define CMJMLPODEOB_MMCKDFFNDDG_OFFSET UNITYSDK_OFFSET(0xDA3A3F0)
#define CMJMLPODEOB_MMDICFCCAGK_OFFSET UNITYSDK_OFFSET(0xDA39A90)

inline static constexpr unsigned int CMJMLPODEOB_TypeDefinitionIndex = 69654;

	class CMJMLPODEOB : public ::System::Object
	{
	public:
		::MEPPNFLLMEN* PBOBGOFNGMH; // 0x10
		::System::Collections::Generic::List_1<::System::Single>* HJBHGBIFCLN; // 0x18
		::UnityEngine::Vector3 CGHEFMPCGGJ; // 0x20
		::System::Single LOBALJEAOPJ; // 0x2C
		::System::Int32 FCHELGCIIOB; // 0x30
		::System::Single PIFPMOFLAAJ; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJMLPODEOB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::UInt32 a1, ::System::UInt32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Single))((::PBYTE)hIl2Cpp + CMJMLPODEOB_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IDHPLLHNJMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJMLPODEOB_IDHPLLHNJMC_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMJMLPODEOB_CLEAR_OFFSET))(this);
		}

		::UnityEngine::Vector3 MDFAGIBJIAE(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CMJMLPODEOB_MDFAGIBJIAE_OFFSET))(this, a1, a2);
		}

		::System::Single LOEDCPALBGF(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CMJMLPODEOB_LOEDCPALBGF_OFFSET))(this, a1);
		}

		::System::Void JAAJDCJBHBH(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMJMLPODEOB_JAAJDCJBHBH_OFFSET))(this, a1);
		}

		::System::Boolean DHHNEFGBEGG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMJMLPODEOB_DHHNEFGBEGG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MMCKDFFNDDG(::RPG::Client::TrackCameraOverrideWayPointType a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrackCameraOverrideWayPointType, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMJMLPODEOB_MMCKDFFNDDG_OFFSET))(this, a1, a2);
		}

		::System::Single MMDICFCCAGK(::System::Boolean a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CMJMLPODEOB_MMDICFCCAGK_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Boolean GEBIBLMKJAK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMJMLPODEOB_GEBIBLMKJAK_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean ELEGKPGNPJL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CMJMLPODEOB_ELEGKPGNPJL_OFFSET))(this, a1, a2, a3, a4);
		}

	};
