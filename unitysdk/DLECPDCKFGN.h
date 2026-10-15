#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
class AGCPAMNLCGN;
class DLECPDCKFGN;
class ENFDMFGIJDC;

#define DLECPDCKFGN_BPLPBPMEODA_1_OFFSET UNITYSDK_OFFSET(0xF89A5C0)
#define DLECPDCKFGN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xF89A3C0)
#define DLECPDCKFGN_CTOR_OFFSET UNITYSDK_OFFSET(0xF89A920)
#define DLECPDCKFGN_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xF89A770)
#define DLECPDCKFGN_GET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0xF89A3A0)
#define DLECPDCKFGN_GET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0xF89A380)
#define DLECPDCKFGN_SET_ENDANGLE_OFFSET UNITYSDK_OFFSET(0xF89A3B0)
#define DLECPDCKFGN_SET_STARTANGLE_OFFSET UNITYSDK_OFFSET(0xF89A390)

	class DLECPDCKFGN : public ::BLLEONBDOMJ
	{
	public:
		::System::Single _EndAngle_k__BackingField; // 0x28
		::System::Single _StartAngle_k__BackingField; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLECPDCKFGN_CTOR_OFFSET))(this);
		}

		::System::Single get_StartAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLECPDCKFGN_GET_STARTANGLE_OFFSET))(this);
		}

		::System::Void set_StartAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLECPDCKFGN_SET_STARTANGLE_OFFSET))(this, a1);
		}

		::System::Single get_EndAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLECPDCKFGN_GET_ENDANGLE_OFFSET))(this);
		}

		::System::Void set_EndAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DLECPDCKFGN_SET_ENDANGLE_OFFSET))(this, a1);
		}

		static ::DLECPDCKFGN* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::DLECPDCKFGN*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + DLECPDCKFGN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::DLECPDCKFGN* BPLPBPMEODA_1(::AGCPAMNLCGN* a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::Single a4)
		{
			return ((::DLECPDCKFGN*(*)(::AGCPAMNLCGN*, ::System::UInt64, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + DLECPDCKFGN_BPLPBPMEODA_1_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLECPDCKFGN_GAILDDCMCHP_OFFSET))(this);
		}

	};
