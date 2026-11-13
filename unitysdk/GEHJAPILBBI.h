#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class PropPuzzleCustomEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define GEHJAPILBBI_CTOR_OFFSET UNITYSDK_OFFSET(0x17CD7C20)
#define GEHJAPILBBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17CD7EE0)
#define GEHJAPILBBI_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0x17CD7FC0)
#define GEHJAPILBBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17CD7CB0)
#define GEHJAPILBBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17CD7DD0)
#define GEHJAPILBBI_TICK_OFFSET UNITYSDK_OFFSET(0x17CD82B0)

inline static constexpr unsigned int GEHJAPILBBI_TypeDefinitionIndex = 59592;

	class GEHJAPILBBI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropPuzzleCustomEventListener* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* MPKAFEJFNKN; // 0x28
		::System::Boolean GHDJKMOFAPI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleCustomEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleCustomEventListener*))((::PBYTE)hIl2Cpp + GEHJAPILBBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHJAPILBBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHJAPILBBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHJAPILBBI_DISPOSE_OFFSET))(this);
		}

		::System::Void JNPJIEDLIJI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GEHJAPILBBI_JNPJIEDLIJI_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GEHJAPILBBI_TICK_OFFSET))(this, a1);
		}

	};
