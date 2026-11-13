#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/MJKLAEILHPK.h"
class DIHIHAPJLPK;
class DLNCBOGAMFG;
namespace RPG::GameCore { class HandleMapRotationInteract; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define OPHJAIGIOHL_BDDNPDGHDNO_OFFSET UNITYSDK_OFFSET(0x18ABA970)
#define OPHJAIGIOHL_CNKLGPEIBGI_OFFSET UNITYSDK_OFFSET(0x18ABA400)
#define OPHJAIGIOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB9B80)
#define OPHJAIGIOHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AB9F60)
#define OPHJAIGIOHL_HIBJGHDJLJO_OFFSET UNITYSDK_OFFSET(0x18ABA4F0)
#define OPHJAIGIOHL_LPHKEGNDFFJ_OFFSET UNITYSDK_OFFSET(0x18ABA6E0)
#define OPHJAIGIOHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ABA530)
#define OPHJAIGIOHL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18ABA030)
#define OPHJAIGIOHL_TICK_OFFSET UNITYSDK_OFFSET(0x18ABA140)

inline static constexpr unsigned int OPHJAIGIOHL_TypeDefinitionIndex = 54149;

	class OPHJAIGIOHL : public ::GELIALJDFBL
	{
	public:
		::DIHIHAPJLPK* IFEPIOPPBJJ; // 0x18
		::MJKLAEILHPK EHHDIJMGHGG; // 0x20
		::MJKLAEILHPK EJEDAHOENCD; // 0x50
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x80
		::RPG::GameCore::HandleMapRotationInteract* IGHAHBNLIJA; // 0x88
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x90
		::System::Boolean GMALPHFHLDM; // 0x98
		::System::Boolean AADLKMCFFOL; // 0x99
		::System::Byte _padding0[0x2];
		::System::UInt32 PEEFHNHDBMF; // 0x9C
		::System::UInt32 JGGDKOCIEGH; // 0xA0
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
