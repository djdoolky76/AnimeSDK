#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OBJANKHLNGO;
class OEMHFAKHIIF;
namespace RPG::GameCore { class TaskContext; }

#define HDEJBHKGPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C53B0)
#define HDEJBHKGPDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B7C5700)
#define HDEJBHKGPDL_FAMDCPGBNMD_OFFSET UNITYSDK_OFFSET(0x1B7C5870)
#define HDEJBHKGPDL_GHPGHNNJALM_OFFSET UNITYSDK_OFFSET(0x1B7C5810)
#define HDEJBHKGPDL_LPNLPFNONMG_OFFSET UNITYSDK_OFFSET(0x1B7C54C0)
#define HDEJBHKGPDL_NBELOGHPJJC_OFFSET UNITYSDK_OFFSET(0x1B7C5740)
#define HDEJBHKGPDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B7C53C0)
#define HDEJBHKGPDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B7C5630)
#define HDEJBHKGPDL_TICK_OFFSET UNITYSDK_OFFSET(0x1B7C5680)

inline static constexpr unsigned int HDEJBHKGPDL_TypeDefinitionIndex = 53957;

	class HDEJBHKGPDL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::OEMHFAKHIIF* OFKGLJOAMLD; // 0x20
		::System::Single PHCPNGOKAPN; // 0x28
		// static const ::System::Object CAKIPDKMIJJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OEMHFAKHIIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OEMHFAKHIIF*))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_DISPOSE_OFFSET))(this);
		}

		::System::Void LPNLPFNONMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_LPNLPFNONMG_OFFSET))(this);
		}

		::System::Boolean NBELOGHPJJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_NBELOGHPJJC_OFFSET))(this);
		}

		static ::System::Boolean FAMDCPGBNMD(::OBJANKHLNGO* a1)
		{
			return ((::System::Boolean(*)(::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_FAMDCPGBNMD_OFFSET))(a1);
		}

		::System::Single GHPGHNNJALM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HDEJBHKGPDL_GHPGHNNJALM_OFFSET))(this);
		}

	};
