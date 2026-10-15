#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJIOMFDJLLA.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BGMKDGACBNI;
class ENLBMCKHJOG;
class GKLHLDECJOL;
class KDCNOMHGMNO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define GEKNDDOOEIG_CTOR_OFFSET UNITYSDK_OFFSET(0x159DF1D0)
#define GEKNDDOOEIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159DF250)
#define GEKNDDOOEIG_JEOIKLBNOPO_OFFSET UNITYSDK_OFFSET(0x159E0320)
#define GEKNDDOOEIG_JMAGNHBDDMN_OFFSET UNITYSDK_OFFSET(0x159DFCE0)
#define GEKNDDOOEIG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x159DF290)
#define GEKNDDOOEIG_PBFANKMMAOC_OFFSET UNITYSDK_OFFSET(0x159DFF40)

inline static constexpr unsigned int GEKNDDOOEIG_TypeDefinitionIndex = 53858;

	class GEKNDDOOEIG
	{
	public:
		::KDCNOMHGMNO* PMEOEIDANPD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GKLHLDECJOL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GKLHLDECJOL*))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint PBFANKMMAOC(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::HJIOMFDJLLA a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::HJIOMFDJLLA))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_PBFANKMMAOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JMAGNHBDDMN(::BGMKDGACBNI* a1, ::BGMKDGACBNI* a2, ::ENLBMCKHJOG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::ENLBMCKHJOG*))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_JMAGNHBDDMN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JEOIKLBNOPO(::BGMKDGACBNI* a1, ::BGMKDGACBNI* a2, ::ENLBMCKHJOG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGMKDGACBNI*, ::BGMKDGACBNI*, ::ENLBMCKHJOG*))((::PBYTE)hIl2Cpp + GEKNDDOOEIG_JEOIKLBNOPO_OFFSET))(this, a1, a2, a3);
		}

	};
