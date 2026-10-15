#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class DJCLFJCFCCD;
class ENFDMFGIJDC;

#define DJCLFJCFCCD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF2278D0)
#define DJCLFJCFCCD_CTOR_OFFSET UNITYSDK_OFFSET(0xF227CE0)
#define DJCLFJCFCCD_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xF227A60)
#define DJCLFJCFCCD_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xF2278A0)
#define DJCLFJCFCCD_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xF227870)
#define DJCLFJCFCCD_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xF2278C0)
#define DJCLFJCFCCD_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xF227890)

inline static constexpr unsigned int DJCLFJCFCCD_TypeDefinitionIndex = 77988;

	class DJCLFJCFCCD : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x28
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_SET_STARTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_SET_ENDPOS_OFFSET))(this, a1);
		}

		static ::DJCLFJCFCCD* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::DJCLFJCFCCD*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJCLFJCFCCD_GAILDDCMCHP_OFFSET))(this);
		}

	};
