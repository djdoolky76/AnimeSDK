#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ACBFNEKJDNP;
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class CameraFightStateCommonConfig; }

#define FIHBMIDBJKO_CTOR_OFFSET UNITYSDK_OFFSET(0x157A7990)
#define FIHBMIDBJKO_GETFIGHTSTATECONFIG_OFFSET UNITYSDK_OFFSET(0x157A7700)
#define FIHBMIDBJKO_GET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x157A7770)
#define FIHBMIDBJKO_GFDBNMCAKHC_OFFSET UNITYSDK_OFFSET(0x157A7030)
#define FIHBMIDBJKO_IKAJMJJPPGN_OFFSET UNITYSDK_OFFSET(0x157A6D30)
#define FIHBMIDBJKO_INIT_OFFSET UNITYSDK_OFFSET(0x157A64C0)
#define FIHBMIDBJKO_MIFJPAEPLAD_OFFSET UNITYSDK_OFFSET(0x157A7790)
#define FIHBMIDBJKO_MNPKGBNCCKI_OFFSET UNITYSDK_OFFSET(0x157A6990)
#define FIHBMIDBJKO_REFRESH_OFFSET UNITYSDK_OFFSET(0x157A65E0)
#define FIHBMIDBJKO_RESET_OFFSET UNITYSDK_OFFSET(0x157A6530)
#define FIHBMIDBJKO_SET_STATECONFIGWHENRANGEATK_OFFSET UNITYSDK_OFFSET(0x157A7780)

inline static constexpr unsigned int FIHBMIDBJKO_TypeDefinitionIndex = 69598;

	class FIHBMIDBJKO : public ::System::Object
	{
	public:
		::RPG::Client::CameraFightStateCommonConfig* MAFIONBKPIE; // 0x10
		::RPG::Client::CameraFightStateCommonConfig* _StateConfigWhenRangeAtk_k__BackingField; // 0x18
		::RPG::Client::CameraDataAndFlags* OMKPPIGCFDN; // 0x20
		::ACBFNEKJDNP* LEOGIKABIGF; // 0x28
		::System::Nullable_1<::UnityEngine::Vector3> OCBKABJKEHG; // 0x30
		::System::Byte _padding0[0x8];
		::System::Boolean CDNFOAPHINA; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single DMIGAHHPFMB; // 0x44
		::System::Nullable_1<::UnityEngine::Vector3> HAKKPBCKEOM; // 0x48
		::System::Byte _padding2[0x8];
		::System::Nullable_1<::UnityEngine::Vector3> CDPFEPMNABI; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_CTOR_OFFSET))(this);
		}

		::System::Void Init(::ACBFNEKJDNP* a1, ::RPG::Client::CameraDataAndFlags* a2, ::RPG::Client::CameraFightStateCommonConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::ACBFNEKJDNP*, ::RPG::Client::CameraDataAndFlags*, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_RESET_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_REFRESH_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* GetFightStateConfig()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_GETFIGHTSTATECONFIG_OFFSET))(this);
		}

		::RPG::Client::CameraFightStateCommonConfig* get_StateConfigWhenRangeAtk()
		{
			return ((::RPG::Client::CameraFightStateCommonConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_GET_STATECONFIGWHENRANGEATK_OFFSET))(this);
		}

		::System::Void set_StateConfigWhenRangeAtk(::RPG::Client::CameraFightStateCommonConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraFightStateCommonConfig*))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_SET_STATECONFIGWHENRANGEATK_OFFSET))(this, a1);
		}

		::System::Void IKAJMJJPPGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_IKAJMJJPPGN_OFFSET))(this);
		}

		::System::Void GFDBNMCAKHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_GFDBNMCAKHC_OFFSET))(this);
		}

		::UnityEngine::Vector3 MIFJPAEPLAD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_MIFJPAEPLAD_OFFSET))(this);
		}

		::System::Void MNPKGBNCCKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIHBMIDBJKO_MNPKGBNCCKI_OFFSET))(this);
		}

	};
