#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class DIHIHAPJLPK;
class DLNCBOGAMFG;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OPHJAIGIOHL_BDDNPDGHDNO_OFFSET UNITYSDK_OFFSET(0xBFA4270)
#define OPHJAIGIOHL_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0xBFA3C90)
#define OPHJAIGIOHL_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA3390)
#define OPHJAIGIOHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFA3760)
#define OPHJAIGIOHL_HIBJGHDJLJO_OFFSET UNITYSDK_OFFSET(0xBFA3D80)
#define OPHJAIGIOHL_LPHKEGNDFFJ_OFFSET UNITYSDK_OFFSET(0xBFA3F70)
#define OPHJAIGIOHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBFA3DC0)
#define OPHJAIGIOHL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBFA3830)
#define OPHJAIGIOHL_TICK_OFFSET UNITYSDK_OFFSET(0xBFA3950)

inline static constexpr unsigned int OPHJAIGIOHL_TypeDefinitionIndex = 52990;

	class OPHJAIGIOHL : public ::GELIALJDFBL
	{
	public:
		::MJKLAEILHPK EJEDAHOENCD; // 0x18
		::RPG::GameCore::HandleMapRotationInteract* IGHAHBNLIJA; // 0x48
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x50
		::MJKLAEILHPK EHHDIJMGHGG; // 0x58
		::DIHIHAPJLPK* IFEPIOPPBJJ; // 0x88
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x90
		::System::UInt32 JGGDKOCIEGH; // 0x98
		::System::UInt32 PEEFHNHDBMF; // 0x9C
		::System::Boolean AADLKMCFFOL; // 0xA0
		::System::Boolean GMALPHFHLDM; // 0xA1
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HandleMapRotationInteract* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HandleMapRotationInteract*))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void LPHKEGNDFFJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_LPHKEGNDFFJ_OFFSET))(this, a1);
		}

		::System::Void CNKLGPEIBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_CNKLGPEIBGI_OFFSET))(this);
		}

		::System::Void BDDNPDGHDNO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_BDDNPDGHDNO_OFFSET))(this, a1);
		}

		::System::Void HIBJGHDJLJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHJAIGIOHL_HIBJGHDJLJO_OFFSET))(this);
		}

	};
