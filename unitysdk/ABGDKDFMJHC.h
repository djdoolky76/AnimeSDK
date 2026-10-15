#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABGDKDFMJHC;
class AGCPAMNLCGN;
class ENFDMFGIJDC;

#define ABGDKDFMJHC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0F1C60)
#define ABGDKDFMJHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F2030)
#define ABGDKDFMJHC_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xB0F1DF0)
#define ABGDKDFMJHC_GET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB0F1C30)
#define ABGDKDFMJHC_GET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB0F1C00)
#define ABGDKDFMJHC_SET_ENDPOS_OFFSET UNITYSDK_OFFSET(0xB0F1C50)
#define ABGDKDFMJHC_SET_STARTPOS_OFFSET UNITYSDK_OFFSET(0xB0F1C20)

inline static constexpr unsigned int ABGDKDFMJHC_TypeDefinitionIndex = 77992;

	class ABGDKDFMJHC : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _StartPos_k__BackingField; // 0x28
		::UnityEngine::Vector3 _EndPos_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_StartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_GET_STARTPOS_OFFSET))(this);
		}

		::System::Void set_StartPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_SET_STARTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_EndPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_GET_ENDPOS_OFFSET))(this);
		}

		::System::Void set_EndPos(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_SET_ENDPOS_OFFSET))(this, a1);
		}

		static ::ABGDKDFMJHC* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::ABGDKDFMJHC*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGDKDFMJHC_GAILDDCMCHP_OFFSET))(this);
		}

	};
