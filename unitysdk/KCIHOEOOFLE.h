#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }
namespace System { class Object; }

#define KCIHOEOOFLE_CTOR_OFFSET UNITYSDK_OFFSET(0xB332470)
#define KCIHOEOOFLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB332500)
#define KCIHOEOOFLE_JIEFKDHFPPE_OFFSET UNITYSDK_OFFSET(0xB3328A0)
#define KCIHOEOOFLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB332660)
#define KCIHOEOOFLE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB332720)
#define KCIHOEOOFLE_TICK_OFFSET UNITYSDK_OFFSET(0xB332840)

inline static constexpr unsigned int KCIHOEOOFLE_TypeDefinitionIndex = 58913;

	class KCIHOEOOFLE : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* GEKHMGEPKPD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::WaitPlayerChangeModel* OFKGLJOAMLD; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerChangeModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerChangeModel*))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_TICK_OFFSET))(this, a1);
		}

		::System::Void JIEFKDHFPPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCIHOEOOFLE_JIEFKDHFPPE_OFFSET))(this, a1);
		}

	};
