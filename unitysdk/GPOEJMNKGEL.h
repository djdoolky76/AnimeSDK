#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class RogueTournEnterNextRoom; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GPOEJMNKGEL_CTOR_OFFSET UNITYSDK_OFFSET(0x15B648A0)
#define GPOEJMNKGEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B65360)
#define GPOEJMNKGEL_DOCFBHAAHBJ_OFFSET UNITYSDK_OFFSET(0x15B65590)
#define GPOEJMNKGEL_ELOJEIKJOOB_OFFSET UNITYSDK_OFFSET(0x15B64960)
#define GPOEJMNKGEL_GHMMHIAAIKG_OFFSET UNITYSDK_OFFSET(0x15B654C0)
#define GPOEJMNKGEL_LKNFPGMCDIL_OFFSET UNITYSDK_OFFSET(0x15B653B0)
#define GPOEJMNKGEL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B64910)
#define GPOEJMNKGEL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B65310)
#define GPOEJMNKGEL_TICK_OFFSET UNITYSDK_OFFSET(0x15B648B0)

inline static constexpr unsigned int GPOEJMNKGEL_TypeDefinitionIndex = 58478;

	class GPOEJMNKGEL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueTournEnterNextRoom* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueTournEnterNextRoom*))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_DISPOSE_OFFSET))(this);
		}

		::System::Void ELOJEIKJOOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_ELOJEIKJOOB_OFFSET))(this);
		}

		::System::Void GHMMHIAAIKG(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_GHMMHIAAIKG_OFFSET))(this, a1, a2);
		}

		::System::Void DOCFBHAAHBJ(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_DOCFBHAAHBJ_OFFSET))(this, a1, a2);
		}

		::System::Void LKNFPGMCDIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOEJMNKGEL_LKNFPGMCDIL_OFFSET))(this);
		}

	};
