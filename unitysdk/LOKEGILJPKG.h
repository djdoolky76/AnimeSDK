#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtDefenceBatchSpawnState.h"
#include "unitysdk/System/Object.h"
class LOKEGILJPKG;
class POEGKFEADIE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceBatchMonsterInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOKEGILJPKG_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0xB800650)
#define LOKEGILJPKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB800660)
#define LOKEGILJPKG_FMHKLHAKMKO_OFFSET UNITYSDK_OFFSET(0xB800640)
#define LOKEGILJPKG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB7FFE40)
#define LOKEGILJPKG_JLNLAPDLKCC_OFFSET UNITYSDK_OFFSET(0xB8003D0)
#define LOKEGILJPKG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB7FFCC0)

inline static constexpr unsigned int LOKEGILJPKG_TypeDefinitionIndex = 54315;

	class LOKEGILJPKG : public ::System::Object
	{
	public:
		::POEGKFEADIE* BHJDJDPLCLP; // 0x10
		::RPG::GameCore::RtDefenceBatchMonsterInfo* IGHAHBNLIJA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* FPEOFLNHOOL; // 0x20
		::System::Collections::Generic::List_1<::LOKEGILJPKG*>* ADENKDFOMFN; // 0x28
		::System::Int32 INAKMLFKHAM; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint PGMIOKKLHIE; // 0x38
		::System::Int32 BOGKJCEABFK; // 0x40
		::System::Int32 IDCHMNBJKGA; // 0x44
		::System::Int32 NBGFIOIOJDL; // 0x48
		::RPG::GameCore::RtDefenceBatchSpawnState DLNIGFGLPLJ; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKEGILJPKG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::RtDefenceBatchMonsterInfo* a1, ::System::Int32 a2, ::System::Collections::Generic::List_1<::LOKEGILJPKG*>* a3, ::POEGKFEADIE* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtDefenceBatchMonsterInfo*, ::System::Int32, ::System::Collections::Generic::List_1<::LOKEGILJPKG*>*, ::POEGKFEADIE*))((::PBYTE)hIl2Cpp + LOKEGILJPKG_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JLANKNHFKCN(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + LOKEGILJPKG_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JLNLAPDLKCC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKEGILJPKG_JLNLAPDLKCC_OFFSET))(this);
		}

		::RPG::GameCore::RtDefenceBatchMonsterInfo* FMHKLHAKMKO()
		{
			return ((::RPG::GameCore::RtDefenceBatchMonsterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKEGILJPKG_FMHKLHAKMKO_OFFSET))(this);
		}

		::RPG::GameCore::RtDefenceBatchSpawnState BGDKFHEBDFJ()
		{
			return ((::RPG::GameCore::RtDefenceBatchSpawnState(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKEGILJPKG_BGDKFHEBDFJ_OFFSET))(this);
		}

	};
