#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyShowPlayerBubbleTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FKEGJFIOCIM_CTOR_OFFSET UNITYSDK_OFFSET(0x157E2E70)
#define FKEGJFIOCIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157E30B0)
#define FKEGJFIOCIM_NJGMLKIBPKP_OFFSET UNITYSDK_OFFSET(0x157E3270)
#define FKEGJFIOCIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157E2E80)
#define FKEGJFIOCIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x157E3020)
#define FKEGJFIOCIM_TICK_OFFSET UNITYSDK_OFFSET(0x157E3140)

inline static constexpr unsigned int FKEGJFIOCIM_TypeDefinitionIndex = 58221;

	class FKEGJFIOCIM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::MonopolyShowPlayerBubbleTalk* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Single LLNIGIGFCEA; // 0x28
		// static const ::System::Object ACKMEJMBELK; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_TICK_OFFSET))(this, a1);
		}

		::System::Void NJGMLKIBPKP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FKEGJFIOCIM_NJGMLKIBPKP_OFFSET))(this, a1);
		}

	};
