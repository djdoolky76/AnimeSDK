#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFLAJBMKAAH.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemType.h"
#include "unitysdk/RPG/Client/Prop/PinballPuzzleItemConfig.h"
namespace RPG::Client::Prop { class PinballPuzzleBoard; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }

#define FMCDNOGEEEO_CTOR_OFFSET UNITYSDK_OFFSET(0x158421D0)
#define FMCDNOGEEEO_EILJCLCPNDM_OFFSET UNITYSDK_OFFSET(0x15842360)
#define FMCDNOGEEEO_HEKBGEMOOAN_OFFSET UNITYSDK_OFFSET(0x158422C0)
#define FMCDNOGEEEO_MPIHMFLCDJM_OFFSET UNITYSDK_OFFSET(0x15842310)
#define FMCDNOGEEEO_NPIAFDJCIJH_OFFSET UNITYSDK_OFFSET(0x15842210)
#define FMCDNOGEEEO_OOGEFEGLPAI_OFFSET UNITYSDK_OFFSET(0x15842260)

inline static constexpr unsigned int FMCDNOGEEEO_TypeDefinitionIndex = 78763;

	class FMCDNOGEEEO : public ::EFLAJBMKAAH
	{
	public:
		::System::Void _ctor(::RPG::Client::Prop::PinballPuzzleItemConfig a1, ::RPG::Client::Prop::PinballPuzzleBoard* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PinballPuzzleItemConfig, ::RPG::Client::Prop::PinballPuzzleBoard*))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::PinballPuzzleItemType NPIAFDJCIJH()
		{
			return ((::RPG::Client::Prop::PinballPuzzleItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_NPIAFDJCIJH_OFFSET))(this);
		}

		::System::Void OOGEFEGLPAI(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_OOGEFEGLPAI_OFFSET))(this, a1);
		}

		::System::Void HEKBGEMOOAN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_HEKBGEMOOAN_OFFSET))(this);
		}

		::System::Void MPIHMFLCDJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_MPIHMFLCDJM_OFFSET))(this);
		}

		::System::String* EILJCLCPNDM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCDNOGEEEO_EILJCLCPNDM_OFFSET))(this);
		}

	};
