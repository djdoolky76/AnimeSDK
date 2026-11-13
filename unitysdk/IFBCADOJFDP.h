#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class ENFDMFGIJDC;
class IFBCADOJFDP;

#define IFBCADOJFDP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BC04D10)
#define IFBCADOJFDP_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC05080)
#define IFBCADOJFDP_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1BC04E70)
#define IFBCADOJFDP_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BC04CE0)
#define IFBCADOJFDP_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1BC04D00)

inline static constexpr unsigned int IFBCADOJFDP_TypeDefinitionIndex = 80724;

	class IFBCADOJFDP : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCADOJFDP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCADOJFDP_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IFBCADOJFDP_SET_POSITION_OFFSET))(this, a1);
		}

		static ::IFBCADOJFDP* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::IFBCADOJFDP*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + IFBCADOJFDP_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFBCADOJFDP_GAILDDCMCHP_OFFSET))(this);
		}

	};
