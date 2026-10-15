#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStaminaChange; }
namespace System { class Object; }

#define MBPIKKABJNM_ACCKNDEHJOO_OFFSET UNITYSDK_OFFSET(0xB871DE0)
#define MBPIKKABJNM_CTOR_OFFSET UNITYSDK_OFFSET(0xB871AB0)
#define MBPIKKABJNM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB871B70)
#define MBPIKKABJNM_OKMAEFDNKJL_OFFSET UNITYSDK_OFFSET(0xB871F10)
#define MBPIKKABJNM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB871CD0)
#define MBPIKKABJNM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB871D80)
#define MBPIKKABJNM_TICK_OFFSET UNITYSDK_OFFSET(0xB871E90)

inline static constexpr unsigned int MBPIKKABJNM_TypeDefinitionIndex = 53493;

	class MBPIKKABJNM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* DPEKNJDLNCM; // 0x20
		::RPG::GameCore::WaitStaminaChange* IGHAHBNLIJA; // 0x28
		::KDJNAAOFMMJ* HEAGLNNMMNJ; // 0x30
		::System::UInt32 GMBELMLEBHA; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStaminaChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStaminaChange*))((::PBYTE)hIl2Cpp + MBPIKKABJNM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPIKKABJNM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPIKKABJNM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPIKKABJNM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MBPIKKABJNM_TICK_OFFSET))(this, a1);
		}

		::System::UInt32 ACCKNDEHJOO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPIKKABJNM_ACCKNDEHJOO_OFFSET))(this);
		}

		::System::Void OKMAEFDNKJL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBPIKKABJNM_OKMAEFDNKJL_OFFSET))(this, a1);
		}

	};
