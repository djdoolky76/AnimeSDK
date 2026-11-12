#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ANDHCEBLPON.h"
#include "unitysdk/RPG/GameCore/ForceBlockType.h"
class FECDLDCCHPN;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define CGOKGINLOMP_CTOR_OFFSET UNITYSDK_OFFSET(0xD63AA50)
#define CGOKGINLOMP_KBNJDPKPIKB_OFFSET UNITYSDK_OFFSET(0xD63A7E0)
#define CGOKGINLOMP_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0xD63A8D0)
#define CGOKGINLOMP_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0xD63A960)
#define CGOKGINLOMP_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0xD63A680)
#define CGOKGINLOMP_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0xD63A740)
#define CGOKGINLOMP_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0xD63A9A0)

inline static constexpr unsigned int CGOKGINLOMP_TypeDefinitionIndex = 76122;

	class CGOKGINLOMP : public ::ANDHCEBLPON
	{
	public:
		::RPG::GameCore::ForceBlockType LPKCFHLCBHB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOKGINLOMP_CTOR_OFFSET))(this);
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CGOKGINLOMP_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + CGOKGINLOMP_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::System::Boolean KBNJDPKPIKB(::FECDLDCCHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + CGOKGINLOMP_KBNJDPKPIKB_OFFSET))(this, a1);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + CGOKGINLOMP_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGOKGINLOMP_KGJNPNLKCBF_OFFSET))(this);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + CGOKGINLOMP_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

	};
