#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
class FOOIINCDBFA;
class OLMLKNCEDKN;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Patrol; }
namespace RPG::GameCore { class TaskContext; }

#define KDMPIBNPLGI_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xB361150)
#define KDMPIBNPLGI_CCTOR_OFFSET UNITYSDK_OFFSET(0xB361840)
#define KDMPIBNPLGI_CFLCKOEEDEH_OFFSET UNITYSDK_OFFSET(0xB361700)
#define KDMPIBNPLGI_CGJDDLLDLMO_OFFSET UNITYSDK_OFFSET(0xB360F10)
#define KDMPIBNPLGI_CTOR_OFFSET UNITYSDK_OFFSET(0xB360C20)
#define KDMPIBNPLGI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB360CE0)
#define KDMPIBNPLGI_JLKJIHLELND_OFFSET UNITYSDK_OFFSET(0xB361770)
#define KDMPIBNPLGI_LMCMJOIOEPM_OFFSET UNITYSDK_OFFSET(0xB361260)
#define KDMPIBNPLGI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB360D30)
#define KDMPIBNPLGI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB361350)
#define KDMPIBNPLGI_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xB361300)
#define KDMPIBNPLGI_TICK_OFFSET UNITYSDK_OFFSET(0xB361400)

inline static constexpr unsigned int KDMPIBNPLGI_TypeDefinitionIndex = 52216;

	class KDMPIBNPLGI
	{
	public:
		::OLMLKNCEDKN* IKGBNADHLNA; // 0x28
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
		::FOOIINCDBFA* KBJNJLBILFH; // 0x38
		::System::Single DKOFFPPGEFI; // 0x40
		static ::System::Single* StaticGet_HHAHBBOMIIL()
		{
			return (::System::Single*)UnitySDK::FromName("", "KDMPIBNPLGI")->GetStaticField(0xBB30);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Patrol* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Patrol*))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDMPIBNPLGI_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Single LMCMJOIOEPM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_LMCMJOIOEPM_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_TICK_OFFSET))(this, a1);
		}

		::System::Boolean CGJDDLLDLMO(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_CGJDDLLDLMO_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag JLKJIHLELND()
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_JLKJIHLELND_OFFSET))(this);
		}

		::System::Boolean CFLCKOEEDEH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMPIBNPLGI_CFLCKOEEDEH_OFFSET))(this);
		}

	};
