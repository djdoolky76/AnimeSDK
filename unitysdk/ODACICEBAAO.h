#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ADJJPCAHOCD;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define ODACICEBAAO_CTOR_OFFSET UNITYSDK_OFFSET(0x19A221E0)
#define ODACICEBAAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19A221F0)
#define ODACICEBAAO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19A22290)
#define ODACICEBAAO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19A22240)
#define ODACICEBAAO_TICK_OFFSET UNITYSDK_OFFSET(0x19A22450)

inline static constexpr unsigned int ODACICEBAAO_TypeDefinitionIndex = 53818;

	class ODACICEBAAO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::IAAOMMGICFK* HOADGOKCPDG; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ADJJPCAHOCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ADJJPCAHOCD*))((::PBYTE)hIl2Cpp + ODACICEBAAO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODACICEBAAO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODACICEBAAO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODACICEBAAO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODACICEBAAO_TICK_OFFSET))(this, a1);
		}

	};
