#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class BLJDDPCEBOF;
class ENFDMFGIJDC;

#define BLJDDPCEBOF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA77E10)
#define BLJDDPCEBOF_CTOR_OFFSET UNITYSDK_OFFSET(0xBA78170)
#define BLJDDPCEBOF_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xBA77F70)
#define BLJDDPCEBOF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xBA77DE0)
#define BLJDDPCEBOF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xBA77E00)

	class BLJDDPCEBOF : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJDDPCEBOF_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJDDPCEBOF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BLJDDPCEBOF_SET_POSITION_OFFSET))(this, a1);
		}

		static ::BLJDDPCEBOF* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::BLJDDPCEBOF*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + BLJDDPCEBOF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLJDDPCEBOF_GAILDDCMCHP_OFFSET))(this);
		}

	};
