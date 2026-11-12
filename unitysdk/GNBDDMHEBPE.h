#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class NOJIBEIABPD;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Exception; }
namespace System { class Object; }

#define GNBDDMHEBPE_CTOR_OFFSET UNITYSDK_OFFSET(0x16A78DE0)
#define GNBDDMHEBPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A79130)
#define GNBDDMHEBPE_DNGLEBACOHB_OFFSET UNITYSDK_OFFSET(0x16A79010)
#define GNBDDMHEBPE_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16A791E0)
#define GNBDDMHEBPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A78DF0)
#define GNBDDMHEBPE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A790E0)
#define GNBDDMHEBPE_TICK_OFFSET UNITYSDK_OFFSET(0x16A79180)

inline static constexpr unsigned int GNBDDMHEBPE_TypeDefinitionIndex = 53842;

	class GNBDDMHEBPE : public ::GELIALJDFBL
	{
	public:
		::NOJIBEIABPD* IGHAHBNLIJA; // 0x18
		::System::Object* NLLLIKOOPNC; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NOJIBEIABPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NOJIBEIABPD*))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_GETCONFIG_OFFSET))(this);
		}

		::System::Void DNGLEBACOHB(::System::Object* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Exception*))((::PBYTE)hIl2Cpp + GNBDDMHEBPE_DNGLEBACOHB_OFFSET))(this, a1, a2);
		}

	};
