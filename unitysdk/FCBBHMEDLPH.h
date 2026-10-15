#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OnMuseumPerformanceEnd; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FCBBHMEDLPH_CTOR_OFFSET UNITYSDK_OFFSET(0x156A32B0)
#define FCBBHMEDLPH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156A32C0)
#define FCBBHMEDLPH_OCFKLGFHKAC_OFFSET UNITYSDK_OFFSET(0x156A3530)
#define FCBBHMEDLPH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156A3300)
#define FCBBHMEDLPH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156A3480)
#define FCBBHMEDLPH_TICK_OFFSET UNITYSDK_OFFSET(0x156A34D0)

inline static constexpr unsigned int FCBBHMEDLPH_TypeDefinitionIndex = 58238;

	class FCBBHMEDLPH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OnMuseumPerformanceEnd* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OnMuseumPerformanceEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OnMuseumPerformanceEnd*))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_TICK_OFFSET))(this, a1);
		}

		::System::Void OCFKLGFHKAC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCBBHMEDLPH_OCFKLGFHKAC_OFFSET))(this, a1);
		}

	};
