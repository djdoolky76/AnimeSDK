#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class ENFDMFGIJDC;
class FGECOIMGHAG;

#define FGECOIMGHAG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1574D110)
#define FGECOIMGHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1574D6D0)
#define FGECOIMGHAG_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1574D3C0)
#define FGECOIMGHAG_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1574D0B0)
#define FGECOIMGHAG_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1574D080)
#define FGECOIMGHAG_GET_V0_OFFSET UNITYSDK_OFFSET(0x1574D0E0)
#define FGECOIMGHAG_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0x1574D0D0)
#define FGECOIMGHAG_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0x1574D0A0)
#define FGECOIMGHAG_SET_V0_OFFSET UNITYSDK_OFFSET(0x1574D100)

inline static constexpr unsigned int FGECOIMGHAG_TypeDefinitionIndex = 77990;

	class FGECOIMGHAG : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
		::UnityEngine::Vector3 _V0_k__BackingField; // 0x34
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECOIMGHAG_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECOIMGHAG_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FGECOIMGHAG_SET_STARTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECOIMGHAG_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FGECOIMGHAG_SET_ENDPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_V0()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECOIMGHAG_GET_V0_OFFSET))(this);
		}

		::System::Void set_V0(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FGECOIMGHAG_SET_V0_OFFSET))(this, a1);
		}

		static ::FGECOIMGHAG* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::FGECOIMGHAG*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + FGECOIMGHAG_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGECOIMGHAG_GAILDDCMCHP_OFFSET))(this);
		}

	};
