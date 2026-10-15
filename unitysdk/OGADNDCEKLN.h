#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AGCPAMNLCGN;
class ENFDMFGIJDC;
class OGADNDCEKLN;

#define OGADNDCEKLN_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE4DAC0)
#define OGADNDCEKLN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE4DE30)
#define OGADNDCEKLN_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0xBE4DC20)
#define OGADNDCEKLN_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xBE4DA90)
#define OGADNDCEKLN_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xBE4DAB0)

	class OGADNDCEKLN : public ::BLLEONBDOMJ
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADNDCEKLN_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADNDCEKLN_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OGADNDCEKLN_SET_POSITION_OFFSET))(this, a1);
		}

		static ::OGADNDCEKLN* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::ENFDMFGIJDC* a2)
		{
			return ((::OGADNDCEKLN*(*)(::AGCPAMNLCGN*, ::ENFDMFGIJDC*))((::PBYTE)hIl2Cpp + OGADNDCEKLN_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADNDCEKLN_GAILDDCMCHP_OFFSET))(this);
		}

	};
