#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
class POIHKFPHKEO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define GLHOGOIBGDP_CFBKHGECLPI_OFFSET UNITYSDK_OFFSET(0x15AAB4B0)
#define GLHOGOIBGDP_CTOR_OFFSET UNITYSDK_OFFSET(0x15AAB010)
#define GLHOGOIBGDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AAB3D0)
#define GLHOGOIBGDP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AAB090)
#define GLHOGOIBGDP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AAB380)
#define GLHOGOIBGDP_TICK_OFFSET UNITYSDK_OFFSET(0x15AAB450)
#define GLHOGOIBGDP___ONSUBMITLIMAONEWSISSUE_B__5_0_OFFSET UNITYSDK_OFFSET(0x15AAB860)
#define GLHOGOIBGDP___ONSUBMITLIMAONEWSISSUE_B__5_1_OFFSET UNITYSDK_OFFSET(0x15AABA10)

inline static constexpr unsigned int GLHOGOIBGDP_TypeDefinitionIndex = 52941;

	class GLHOGOIBGDP : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* ICCKCAHJEEO; // 0x18
		::POIHKFPHKEO* IGHAHBNLIJA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::POIHKFPHKEO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::POIHKFPHKEO*))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_TICK_OFFSET))(this, a1);
		}

		::System::Void CFBKHGECLPI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLHOGOIBGDP_CFBKHGECLPI_OFFSET))(this, a1);
		}

		::System::Void __OnSubmitLimaoNewsIssue_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOGOIBGDP___ONSUBMITLIMAONEWSISSUE_B__5_0_OFFSET))(this);
		}

		::System::Void __OnSubmitLimaoNewsIssue_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLHOGOIBGDP___ONSUBMITLIMAONEWSISSUE_B__5_1_OFFSET))(this);
		}

	};
