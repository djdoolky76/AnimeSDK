#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMAHHACEANO.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EPNAONKOHBO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BIMHOGHOCKP_CTOR_OFFSET UNITYSDK_OFFSET(0xB787090)

inline static constexpr unsigned int BIMHOGHOCKP_TypeDefinitionIndex = 57624;

	class BIMHOGHOCKP : public ::OMAHHACEANO
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* NKBJJKNKEHI; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* EKOIOILEJID; // 0x38
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* KEOOJBHFLFD; // 0x40
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackType, ::System::Double>* HNJNDLEFMBE; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::String*, ::EPNAONKOHBO*>* GPEDJCOOAHK; // 0x50
		::RPG::GameCore::FixPoint ENCMPAHMDBN; // 0x58
		::System::Int32 CJGCEKPOGBF; // 0x60
		::System::Int32 LIMCHBECKPC; // 0x64
		::RPG::GameCore::FixPoint OOKAPAKPFGK; // 0x68
		::RPG::GameCore::FixPoint FLBALEEBHKN; // 0x70
		::RPG::GameCore::FixPoint FLDANBDGGLO; // 0x78
		::System::Int32 MGGOBENBMGI; // 0x80
		::System::Int32 CPEINOFIHEI; // 0x84
		::RPG::GameCore::FixPoint EAPPECOODMI; // 0x88
		::RPG::GameCore::FixPoint GKEEIFGGKHJ; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIMHOGHOCKP_CTOR_OFFSET))(this);
		}

	};
