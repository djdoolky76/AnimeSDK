#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class DNBOLDHOBML;
namespace RPG::GameCore { class TaskContext; }

#define GJKGNPAIFBK_CTOR_OFFSET UNITYSDK_OFFSET(0x169A83B0)
#define GJKGNPAIFBK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169A8600)
#define GJKGNPAIFBK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169A83C0)
#define GJKGNPAIFBK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x169A8550)
#define GJKGNPAIFBK_TICK_OFFSET UNITYSDK_OFFSET(0x169A85A0)

inline static constexpr unsigned int GJKGNPAIFBK_TypeDefinitionIndex = 53929;

	class GJKGNPAIFBK : public ::GELIALJDFBL
	{
	public:
		::DNBOLDHOBML* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::DNBOLDHOBML* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::DNBOLDHOBML*))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKGNPAIFBK_DISPOSE_OFFSET))(this);
		}

	};
