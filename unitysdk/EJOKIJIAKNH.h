#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECDLDCCHPN.h"
#include "unitysdk/EOOIJAGNMHI.h"
class FECDLDCCHPN;
class GICDNFMMKMN;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define EJOKIJIAKNH_CFNCFGLONLK_OFFSET UNITYSDK_OFFSET(0x154F6720)
#define EJOKIJIAKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x154F62B0)
#define EJOKIJIAKNH_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x154F6BD0)
#define EJOKIJIAKNH_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0x154F73A0)
#define EJOKIJIAKNH_MBLEHJELBCI_OFFSET UNITYSDK_OFFSET(0x154F6980)
#define EJOKIJIAKNH_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x154F6380)
#define EJOKIJIAKNH_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x154F6E30)
#define EJOKIJIAKNH_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0x154F70B0)

inline static constexpr unsigned int EJOKIJIAKNH_TypeDefinitionIndex = 73997;

	class EJOKIJIAKNH : public ::FECDLDCCHPN
	{
	public:
		::GICDNFMMKMN* JKIFDJKODDO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_CTOR_OFFSET))(this);
		}

		::System::Void MIJGMJAHHDO(::RPG::GameCore::StageVolumeComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_MIJGMJAHHDO_OFFSET))(this, a1);
		}

		::System::Void CFNCFGLONLK(::EOOIJAGNMHI a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOOIJAGNMHI))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_CFNCFGLONLK_OFFSET))(this, a1);
		}

		::System::Void MBLEHJELBCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_MBLEHJELBCI_OFFSET))(this);
		}

		::System::Void KDPEDNKCMEB(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_KDPEDNKCMEB_OFFSET))(this, a1);
		}

		::System::Void NDGDDODNDMP(::FECDLDCCHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_NDGDDODNDMP_OFFSET))(this, a1);
		}

		::System::Void OJJPFMBLLDJ(::FECDLDCCHPN* a1, ::FECDLDCCHPN* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FECDLDCCHPN*, ::FECDLDCCHPN*, ::System::Single))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_OJJPFMBLLDJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KGJNPNLKCBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJOKIJIAKNH_KGJNPNLKCBF_OFFSET))(this);
		}

	};
