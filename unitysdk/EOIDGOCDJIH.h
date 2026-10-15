#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJPBKMBIGNC.h"
class DHAOLPGKOAP;

#define EOIDGOCDJIH_CTOR_OFFSET UNITYSDK_OFFSET(0x155C22C0)
#define EOIDGOCDJIH_GET_MATCHID_OFFSET UNITYSDK_OFFSET(0x155C2220)
#define EOIDGOCDJIH_GET_TRACKID_OFFSET UNITYSDK_OFFSET(0x155C2240)
#define EOIDGOCDJIH_JCLLPJLNFAL_OFFSET UNITYSDK_OFFSET(0x155C2260)
#define EOIDGOCDJIH_SET_MATCHID_OFFSET UNITYSDK_OFFSET(0x155C2230)
#define EOIDGOCDJIH_SET_TRACKID_OFFSET UNITYSDK_OFFSET(0x155C2250)

	class EOIDGOCDJIH : public ::AJPBKMBIGNC
	{
	public:
		::System::UInt32 _MatchID_k__BackingField; // 0x20
		::System::UInt32 _TrackID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MatchID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_GET_MATCHID_OFFSET))(this);
		}

		::System::Void set_MatchID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_SET_MATCHID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrackID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_GET_TRACKID_OFFSET))(this);
		}

		::System::Void set_TrackID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_SET_TRACKID_OFFSET))(this, a1);
		}

		::System::Void JCLLPJLNFAL(::DHAOLPGKOAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHAOLPGKOAP*))((::PBYTE)hIl2Cpp + EOIDGOCDJIH_JCLLPJLNFAL_OFFSET))(this, a1);
		}

	};
