#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FNPGGLMFPCN;
class IAAOMMGICFK;
namespace RPG::GameCore { class TaskContext; }

#define PPKKOMCGFBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B1F30)
#define PPKKOMCGFBH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8B2300)
#define PPKKOMCGFBH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B8B1F40)
#define PPKKOMCGFBH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B8B22B0)
#define PPKKOMCGFBH_TICK_OFFSET UNITYSDK_OFFSET(0x1B8B21F0)

inline static constexpr unsigned int PPKKOMCGFBH_TypeDefinitionIndex = 53836;

	class PPKKOMCGFBH : public ::GELIALJDFBL
	{
	public:
		::IAAOMMGICFK* FBOJHNDHFMO; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::FNPGGLMFPCN* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FNPGGLMFPCN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FNPGGLMFPCN*))((::PBYTE)hIl2Cpp + PPKKOMCGFBH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKKOMCGFBH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PPKKOMCGFBH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKKOMCGFBH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPKKOMCGFBH_DISPOSE_OFFSET))(this);
		}

	};
