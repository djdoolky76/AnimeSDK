#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DACHOHJFDJH;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define LIHJPKJAJHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF651B0)
#define LIHJPKJAJHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF651C0)
#define LIHJPKJAJHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF65260)
#define LIHJPKJAJHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF65210)
#define LIHJPKJAJHG_TICK_OFFSET UNITYSDK_OFFSET(0xBF653B0)

inline static constexpr unsigned int LIHJPKJAJHG_TypeDefinitionIndex = 53831;

	class LIHJPKJAJHG : public ::GELIALJDFBL
	{
	public:
		::DACHOHJFDJH* IGHAHBNLIJA; // 0x18
		::IAAOMMGICFK* HOADGOKCPDG; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DACHOHJFDJH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DACHOHJFDJH*))((::PBYTE)hIl2Cpp + LIHJPKJAJHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHJPKJAJHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHJPKJAJHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIHJPKJAJHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LIHJPKJAJHG_TICK_OFFSET))(this, a1);
		}

	};
