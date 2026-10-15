#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KPAGBHCHCII;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GINDEEBCJPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15A3B660)
#define GINDEEBCJPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A3B670)
#define GINDEEBCJPJ_HKGKEECNPPI_OFFSET UNITYSDK_OFFSET(0x15A3B900)
#define GINDEEBCJPJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A3B6F0)
#define GINDEEBCJPJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A3B7F0)
#define GINDEEBCJPJ_TICK_OFFSET UNITYSDK_OFFSET(0x15A3B8A0)

inline static constexpr unsigned int GINDEEBCJPJ_TypeDefinitionIndex = 52940;

	class GINDEEBCJPJ : public ::GELIALJDFBL
	{
	public:
		::KPAGBHCHCII* OFKGLJOAMLD; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KPAGBHCHCII* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KPAGBHCHCII*))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_TICK_OFFSET))(this, a1);
		}

		::System::Void HKGKEECNPPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GINDEEBCJPJ_HKGKEECNPPI_OFFSET))(this, a1);
		}

	};
