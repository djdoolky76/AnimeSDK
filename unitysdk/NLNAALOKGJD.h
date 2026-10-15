#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class CreatePhoneOnCharacter; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define NLNAALOKGJD_CTOR_OFFSET UNITYSDK_OFFSET(0xBC74EE0)
#define NLNAALOKGJD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC75DC0)
#define NLNAALOKGJD_DNNCFJHPGIG_OFFSET UNITYSDK_OFFSET(0xBC75770)
#define NLNAALOKGJD_EDIPKABKHHA_OFFSET UNITYSDK_OFFSET(0xBC75C20)
#define NLNAALOKGJD_FIFFECJJELN_OFFSET UNITYSDK_OFFSET(0xBC75210)
#define NLNAALOKGJD_FLEALOMBMDC_OFFSET UNITYSDK_OFFSET(0xBC75470)
#define NLNAALOKGJD_NDDDIGNNHMH_OFFSET UNITYSDK_OFFSET(0xBC75270)
#define NLNAALOKGJD_OAIKBOIOALP_OFFSET UNITYSDK_OFFSET(0xBC75CE0)
#define NLNAALOKGJD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC74F00)
#define NLNAALOKGJD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC75EF0)

inline static constexpr unsigned int NLNAALOKGJD_TypeDefinitionIndex = 58053;

	class NLNAALOKGJD
	{
	public:
		::RPG::GameCore::GameEntity* OAFIOHJCENP; // 0x28
		::System::String* ENANJEHPHAE; // 0x30
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
