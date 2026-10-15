#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEOBLFGPHNJ_FEEPBLJDDFI;
class HAPKJCJOJLF;
namespace RPG::GameCore { class PropSoundAttenuation; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEOBLFGPHNJ_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0x13A40C20)
#define EEOBLFGPHNJ_AMCDMLNBPPH_OFFSET UNITYSDK_OFFSET(0x13A40910)
#define EEOBLFGPHNJ_BCFDMAKEBGB_OFFSET UNITYSDK_OFFSET(0x13A41200)
#define EEOBLFGPHNJ_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x13A405B0)
#define EEOBLFGPHNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x13A41420)
#define EEOBLFGPHNJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x13A40B00)
#define EEOBLFGPHNJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x13A40F10)

	class EEOBLFGPHNJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* MEEPDDMNLCH; // 0x10
		::System::Int32 MHBMNAAGDHE; // 0x18
		::System::Int32 GMJDIKGPABK; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_CTOR_OFFSET))(this);
		}

		::System::Void BGOMKDMBLKK(::RPG::GameCore::PropSoundAttenuation* a1, ::HAPKJCJOJLF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_BGOMKDMBLKK_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH(::RPG::GameCore::PropSoundAttenuation* a1, ::HAPKJCJOJLF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropSoundAttenuation*, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_ABKBOGIGAEH_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::EEOBLFGPHNJ_FEEPBLJDDFI* AMCDMLNBPPH(::System::String* a1)
		{
			return ((::EEOBLFGPHNJ_FEEPBLJDDFI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_AMCDMLNBPPH_OFFSET))(this, a1);
		}

		static ::System::Single BCFDMAKEBGB(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::PropSoundAttenuation* a2, ::HAPKJCJOJLF* a3)
		{
			return ((::System::Single(*)(::RPG::GameCore::TransformComponent*, ::RPG::GameCore::PropSoundAttenuation*, ::HAPKJCJOJLF*))((::PBYTE)hIl2Cpp + EEOBLFGPHNJ_BCFDMAKEBGB_OFFSET))(a1, a2, a3);
		}

	};
