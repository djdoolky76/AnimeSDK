#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GOIIFDECJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B33A40)
#define GOIIFDECJBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B33BD0)
#define GOIIFDECJBI_IEGDIPODBKM_OFFSET UNITYSDK_OFFSET(0x15B33CF0)
#define GOIIFDECJBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B33A50)
#define GOIIFDECJBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B33B80)
#define GOIIFDECJBI_TICK_OFFSET UNITYSDK_OFFSET(0x15B33C90)

inline static constexpr unsigned int GOIIFDECJBI_TypeDefinitionIndex = 58179;

	class GOIIFDECJBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskConfig* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TaskConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + GOIIFDECJBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIFDECJBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIFDECJBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOIIFDECJBI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GOIIFDECJBI_TICK_OFFSET))(this, a1);
		}

		::System::Void IEGDIPODBKM(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + GOIIFDECJBI_IEGDIPODBKM_OFFSET))(this, a1, a2);
		}

	};
