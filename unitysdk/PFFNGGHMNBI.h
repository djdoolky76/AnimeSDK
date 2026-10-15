#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ECCKLFIHNOH;
namespace RPG::GameCore { class ShowTutorialGuideTalk; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define PFFNGGHMNBI_CTOR_OFFSET UNITYSDK_OFFSET(0xC20D700)
#define PFFNGGHMNBI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC20D710)
#define PFFNGGHMNBI_DMKOGGDGNLN_OFFSET UNITYSDK_OFFSET(0xC20DBB0)
#define PFFNGGHMNBI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC20D8C0)
#define PFFNGGHMNBI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC20D9F0)
#define PFFNGGHMNBI_TICK_OFFSET UNITYSDK_OFFSET(0xC20DB50)

inline static constexpr unsigned int PFFNGGHMNBI_TypeDefinitionIndex = 58700;

	class PFFNGGHMNBI : public ::GELIALJDFBL
	{
	public:
		::ECCKLFIHNOH* JELPBNHCPCO; // 0x18
		::RPG::GameCore::ShowTutorialGuideTalk* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTutorialGuideTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTutorialGuideTalk*))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_TICK_OFFSET))(this, a1);
		}

		::System::Void DMKOGGDGNLN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PFFNGGHMNBI_DMKOGGDGNLN_OFFSET))(this, a1);
		}

	};
