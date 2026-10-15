#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FECDLDCCHPN.h"
#include "unitysdk/EOOIJAGNMHI.h"
class FECDLDCCHPN;
class GICDNFMMKMN;
namespace RPG::GameCore { class StageVolumeComponentData; }

#define EJOKIJIAKNH_CFNCFGLONLK_OFFSET UNITYSDK_OFFSET(0x154EAA50)
#define EJOKIJIAKNH_CTOR_OFFSET UNITYSDK_OFFSET(0x154EA5E0)
#define EJOKIJIAKNH_KDPEDNKCMEB_OFFSET UNITYSDK_OFFSET(0x154EAF00)
#define EJOKIJIAKNH_KGJNPNLKCBF_OFFSET UNITYSDK_OFFSET(0x154EB6D0)
#define EJOKIJIAKNH_MBLEHJELBCI_OFFSET UNITYSDK_OFFSET(0x154EACB0)
#define EJOKIJIAKNH_MIJGMJAHHDO_OFFSET UNITYSDK_OFFSET(0x154EA6B0)
#define EJOKIJIAKNH_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x154EB160)
#define EJOKIJIAKNH_OJJPFMBLLDJ_OFFSET UNITYSDK_OFFSET(0x154EB3E0)

inline static constexpr unsigned int EJOKIJIAKNH_TypeDefinitionIndex = 73996;

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
