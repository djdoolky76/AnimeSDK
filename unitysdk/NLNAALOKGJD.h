#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NLNAALOKGJD_CTOR_OFFSET UNITYSDK_OFFSET(0xC55CC30)
#define NLNAALOKGJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC55DB00)
#define NLNAALOKGJD_DNNCFJHPGIG_OFFSET UNITYSDK_OFFSET(0xC55D4C0)
#define NLNAALOKGJD_EDIPKABKHHA_OFFSET UNITYSDK_OFFSET(0xC55D970)
#define NLNAALOKGJD_FIFFECJJELN_OFFSET UNITYSDK_OFFSET(0xC55CF60)
#define NLNAALOKGJD_FLEALOMBMDC_OFFSET UNITYSDK_OFFSET(0xC55D1C0)
#define NLNAALOKGJD_NDDDIGNNHMH_OFFSET UNITYSDK_OFFSET(0xC55CFC0)
#define NLNAALOKGJD_OAIKBOIOALP_OFFSET UNITYSDK_OFFSET(0xC55DA20)
#define NLNAALOKGJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC55CC50)
#define NLNAALOKGJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC55DC30)

inline static constexpr unsigned int NLNAALOKGJD_TypeDefinitionIndex = 59292;

	class NLNAALOKGJD
	{
	public:
		::System::String* ENANJEHPHAE; // 0x28
		::RPG::GameCore::GameEntity* OAFIOHJCENP; // 0x30
		// static const ::System::String* JMHMJGDAJJD; // 0x0
		// static const ::System::String* NODELDPJPHK; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePhoneOnCharacter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePhoneOnCharacter*))((::PBYTE)hIl2Cpp + NLNAALOKGJD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OAIKBOIOALP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD_OAIKBOIOALP_OFFSET))(this);
		}

		::System::Void DNNCFJHPGIG(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + NLNAALOKGJD_DNNCFJHPGIG_OFFSET))(this, a1, a2);
		}

		::System::Void EDIPKABKHHA(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + NLNAALOKGJD_EDIPKABKHHA_OFFSET))(this, a1, a2);
		}

		::System::Boolean FIFFECJJELN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD_FIFFECJJELN_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* NDDDIGNNHMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NLNAALOKGJD_NDDDIGNNHMH_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLNAALOKGJD_ONTASKRESET_OFFSET))(this);
		}

		static ::System::String* FLEALOMBMDC(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + NLNAALOKGJD_FLEALOMBMDC_OFFSET))(a1, a2);
		}

	};
