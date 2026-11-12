#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/Level/PetMarbleLevelModeType.h"
#include "unitysdk/System/Object.h"
class AJJOBOBLIEF;
namespace RPG::Client::PetMarble::Level { class PetMarbleLevelMode; }
namespace System { template <typename T> class Action_1; }

#define GJJLJFICILH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x169A6DB0)
#define GJJLJFICILH_CTOR_OFFSET UNITYSDK_OFFSET(0x169A6D60)
#define GJJLJFICILH_EAADDDAKLBC_OFFSET UNITYSDK_OFFSET(0x169A7100)
#define GJJLJFICILH_FLNFFKJGDCK_OFFSET UNITYSDK_OFFSET(0x169A7060)
#define GJJLJFICILH_NACGPOHONAI_OFFSET UNITYSDK_OFFSET(0x169A6FE0)
#define GJJLJFICILH_OINKMAFDLGF_OFFSET UNITYSDK_OFFSET(0x169A6F80)

inline static constexpr unsigned int GJJLJFICILH_TypeDefinitionIndex = 76891;

	class GJJLJFICILH : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>* OGDELONPBBD; // 0x10
		::AJJOBOBLIEF* EGJNACIPNKF; // 0x18
		::System::Void _ctor(::AJJOBOBLIEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJJOBOBLIEF*))((::PBYTE)hIl2Cpp + GJJLJFICILH_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::PetMarble::Level::PetMarbleLevelMode* BPLPBPMEODA(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::RPG::Client::PetMarble::Level::PetMarbleLevelMode*(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + GJJLJFICILH_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Void FLNFFKJGDCK(::System::Action_1<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::PetMarble::Level::PetMarbleLevelModeType>*))((::PBYTE)hIl2Cpp + GJJLJFICILH_FLNFFKJGDCK_OFFSET))(this, a1);
		}

		::System::Void EAADDDAKLBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJLJFICILH_EAADDDAKLBC_OFFSET))(this);
		}

		::System::UInt32 OINKMAFDLGF(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + GJJLJFICILH_OINKMAFDLGF_OFFSET))(this, a1);
		}

		::System::UInt32 NACGPOHONAI(::RPG::Client::PetMarble::Level::PetMarbleLevelModeType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PetMarble::Level::PetMarbleLevelModeType))((::PBYTE)hIl2Cpp + GJJLJFICILH_NACGPOHONAI_OFFSET))(this, a1);
		}

	};
