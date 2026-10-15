#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayCollectionMorse; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define NILIFHBDPEN_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF2EE0)
#define NILIFHBDPEN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF2FD0)
#define NILIFHBDPEN_DOLADPBGHOJ_OFFSET UNITYSDK_OFFSET(0xBBF37E0)
#define NILIFHBDPEN_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBBF3B20)
#define NILIFHBDPEN_LLDKMAMCNIA_OFFSET UNITYSDK_OFFSET(0xBBF3E30)
#define NILIFHBDPEN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBF3230)
#define NILIFHBDPEN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBF34A0)
#define NILIFHBDPEN_PFEODCIJKPH_OFFSET UNITYSDK_OFFSET(0xBBF3D30)
#define NILIFHBDPEN_TICK_OFFSET UNITYSDK_OFFSET(0xBBF34F0)

inline static constexpr unsigned int NILIFHBDPEN_TypeDefinitionIndex = 58265;

	class NILIFHBDPEN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PlayCollectionMorse* OFKGLJOAMLD; // 0x18
		::System::String* JIJMEHFEANC; // 0x20
		::KFELGAIGHAP* DHLDAJPIPIN; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::KFELGAIGHAP* GCHEMDKMPMO; // 0x38
		::System::String* KFOFDNOJILO; // 0x40
		::RPG::GameCore::PlayNPCBubbleTalk* MEEENKPBHJK; // 0x48
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x50
		::System::Single PGMIOKKLHIE; // 0x58
		::System::Single HBDJCFFDGDD; // 0x5C
		::System::Boolean NHHALCBIMOF; // 0x60
		::System::Boolean HLPAMMEMNGL; // 0x61
		::System::Byte _padding0[0x2];
		::System::UInt32 LFECLIALKFB; // 0x64
		::System::Single LMEBAOAAOEI; // 0x68
		::System::UInt32 ANEENHPKAIM; // 0x6C
		// static const ::System::String* JPJAMENFBKD; // 0x0
		// static const ::System::String* NOIGFGJJDLB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlayCollectionMorse* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlayCollectionMorse*))((::PBYTE)hIl2Cpp + NILIFHBDPEN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILIFHBDPEN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILIFHBDPEN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILIFHBDPEN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NILIFHBDPEN_TICK_OFFSET))(this, a1);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + NILIFHBDPEN_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Void PFEODCIJKPH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NILIFHBDPEN_PFEODCIJKPH_OFFSET))(this, a1);
		}

		::System::Void DOLADPBGHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILIFHBDPEN_DOLADPBGHOJ_OFFSET))(this);
		}

		::System::Void LLDKMAMCNIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NILIFHBDPEN_LLDKMAMCNIA_OFFSET))(this);
		}

	};
