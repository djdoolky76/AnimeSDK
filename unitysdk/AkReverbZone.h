#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;

#define AKREVERBZONE_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x291BD40)
#define AKREVERBZONE_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x291BE80)
#define AKREVERBZONE_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x291C340)
#define AKREVERBZONE_EEA0912A6D66200C_1_OFFSET UNITYSDK_OFFSET(0x291BD40)
#define AKREVERBZONE_EEA0912A6D66200C_OFFSET UNITYSDK_OFFSET(0x291BF80)
#define AKREVERBZONE_FCD3B918D9762789_1_OFFSET UNITYSDK_OFFSET(0x291BE80)
#define AKREVERBZONE_FCD3B918D9762789_OFFSET UNITYSDK_OFFSET(0x291C0C0)
#define AKREVERBZONE_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x291BEB0)
#define AKREVERBZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x291C380)

inline static constexpr unsigned int AkReverbZone_TypeDefinitionIndex = 20485;

class AkReverbZone : public ::UnityEngine::MonoBehaviour
{
public:
	::AkRoom* ReverbZone; // 0x20
	::AkRoom* ParentRoom; // 0x28
	::System::Single TransitionRegionWidth; // 0x30
	::System::Boolean B5AA5CB697EDB76E; // 0x34

	::System::Void E02954280801633F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_E02954280801633F_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_A28D6A0C3E793E7D_OFFSET))(this);
	}

	static ::System::Void EEA0912A6D66200C(::AkRoom* FFE9D1A593D00A7A)
	{
		return ((::System::Void(*)(::AkRoom*))((::PBYTE)hIl2Cpp + AKREVERBZONE_EEA0912A6D66200C_OFFSET))(FFE9D1A593D00A7A);
	}

	::System::Void EEA0912A6D66200C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_EEA0912A6D66200C_1_OFFSET))(this);
	}

	::System::Void FE0C4BACA9717677()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_FE0C4BACA9717677_OFFSET))(this);
	}

	static ::System::Void FCD3B918D9762789(::AkRoom* FFE9D1A593D00A7A, ::AkRoom* FBE863A9DF84A64B, ::System::Single EA499ED999D9E10C)
	{
		return ((::System::Void(*)(::AkRoom*, ::AkRoom*, ::System::Single))((::PBYTE)hIl2Cpp + AKREVERBZONE_FCD3B918D9762789_OFFSET))(FFE9D1A593D00A7A, FBE863A9DF84A64B, EA499ED999D9E10C);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_BF13C91AD80643D2_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE__CTOR_OFFSET))(this);
	}

	::System::Void FCD3B918D9762789_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREVERBZONE_FCD3B918D9762789_1_OFFSET))(this);
	}
};
