#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class AOICDNHHGAE;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define NEBFPMCKAAF_AONMNOCCPBI_OFFSET UNITYSDK_OFFSET(0xBB57FF0)
#define NEBFPMCKAAF_CTOR_OFFSET UNITYSDK_OFFSET(0xBB57750)
#define NEBFPMCKAAF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB579A0)
#define NEBFPMCKAAF_FAODEIILAJJ_OFFSET UNITYSDK_OFFSET(0xBB57F10)
#define NEBFPMCKAAF_NOAFKFJEKNM_OFFSET UNITYSDK_OFFSET(0xBB57EA0)
#define NEBFPMCKAAF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB57D00)
#define NEBFPMCKAAF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBB57A70)
#define NEBFPMCKAAF_PNDMMDPGIDA_OFFSET UNITYSDK_OFFSET(0xBB57DC0)
#define NEBFPMCKAAF_TICK_OFFSET UNITYSDK_OFFSET(0xBB57BB0)

inline static constexpr unsigned int NEBFPMCKAAF_TypeDefinitionIndex = 53006;

	class NEBFPMCKAAF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::MJKLAEILHPK NKGCIGBAIFD; // 0x20
		::AOICDNHHGAE* IGHAHBNLIJA; // 0x50
		::RPG::GameCore::GameEntity* BFMNFEOMLPF; // 0x58
		::MJKLAEILHPK DDPDDGJPEBO; // 0x60
		::System::UInt32 JGGDKOCIEGH; // 0x90
		::System::Boolean IELBAJHONPC; // 0x94
		::System::Byte _padding0[0x3];
		::System::UInt32 PEEFHNHDBMF; // 0x98
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AOICDNHHGAE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AOICDNHHGAE*))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void PNDMMDPGIDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_PNDMMDPGIDA_OFFSET))(this);
		}

		::System::Void FAODEIILAJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_FAODEIILAJJ_OFFSET))(this);
		}

		::System::Void AONMNOCCPBI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_AONMNOCCPBI_OFFSET))(this, a1);
		}

		::System::Void NOAFKFJEKNM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEBFPMCKAAF_NOAFKFJEKNM_OFFSET))(this, a1);
		}

	};
