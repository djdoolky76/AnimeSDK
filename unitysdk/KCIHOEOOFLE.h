#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerChangeModel; }
namespace System { class Object; }

#define KCIHOEOOFLE_CTOR_OFFSET UNITYSDK_OFFSET(0xBBC3990)
#define KCIHOEOOFLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBC3A20)
#define KCIHOEOOFLE_JIEFKDHFPPE_OFFSET UNITYSDK_OFFSET(0xBBC3DC0)
#define KCIHOEOOFLE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBBC3B80)
#define KCIHOEOOFLE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBBC3C40)
#define KCIHOEOOFLE_TICK_OFFSET UNITYSDK_OFFSET(0xBBC3D60)

inline static constexpr unsigned int KCIHOEOOFLE_TypeDefinitionIndex = 60186;

	class KCIHOEOOFLE : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* GEKHMGEPKPD; // 0x18
		::RPG::GameCore::WaitPlayerChangeModel* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
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
