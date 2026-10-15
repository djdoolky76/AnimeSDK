#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class RogueCurseChestPropInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MIKOLGJGHOA_BKCCFPHPIHM_OFFSET UNITYSDK_OFFSET(0xB955800)
#define MIKOLGJGHOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB954E70)
#define MIKOLGJGHOA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB954F50)
#define MIKOLGJGHOA_FFIPPBBDFIK_OFFSET UNITYSDK_OFFSET(0xB956000)
#define MIKOLGJGHOA_FINDKHJPLJP_OFFSET UNITYSDK_OFFSET(0xB955AC0)
#define MIKOLGJGHOA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0xB9558E0)
#define MIKOLGJGHOA_OBJPHEJOPJO_OFFSET UNITYSDK_OFFSET(0xB955E80)
#define MIKOLGJGHOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB9551B0)
#define MIKOLGJGHOA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB955620)
#define MIKOLGJGHOA_TICK_OFFSET UNITYSDK_OFFSET(0xB955670)

inline static constexpr unsigned int MIKOLGJGHOA_TypeDefinitionIndex = 58445;

	class MIKOLGJGHOA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueCurseChestPropInteract* JKJPFJALGKO; // 0x18
		::KFELGAIGHAP* IABJBNEHHOD; // 0x20
		::KFELGAIGHAP* COBBIPHNMLE; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x38
		::System::UInt32 IDOEBJDGHBF; // 0x40
		::System::UInt32 ECJHBGCDFHE; // 0x44
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueCurseChestPropInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueCurseChestPropInteract*))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_TICK_OFFSET))(this, a1);
		}

		::System::Void BKCCFPHPIHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_BKCCFPHPIHM_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void FINDKHJPLJP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_FINDKHJPLJP_OFFSET))(this, a1);
		}

		::System::Void OBJPHEJOPJO(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_OBJPHEJOPJO_OFFSET))(this, a1, a2);
		}

		::System::Void FFIPPBBDFIK(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + MIKOLGJGHOA_FFIPPBBDFIK_OFFSET))(this, a1, a2);
		}

	};
