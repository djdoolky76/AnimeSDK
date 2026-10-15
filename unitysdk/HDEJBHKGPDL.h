#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OBJANKHLNGO;
class OEMHFAKHIIF;
namespace RPG::GameCore { class TaskContext; }

#define HDEJBHKGPDL_CTOR_OFFSET UNITYSDK_OFFSET(0x15C24C60)
#define HDEJBHKGPDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15C24FB0)
#define HDEJBHKGPDL_FAMDCPGBNMD_OFFSET UNITYSDK_OFFSET(0x15C25120)
#define HDEJBHKGPDL_GHPGHNNJALM_OFFSET UNITYSDK_OFFSET(0x15C250C0)
#define HDEJBHKGPDL_LPNLPFNONMG_OFFSET UNITYSDK_OFFSET(0x15C24D70)
#define HDEJBHKGPDL_NBELOGHPJJC_OFFSET UNITYSDK_OFFSET(0x15C24FF0)
#define HDEJBHKGPDL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15C24C70)
#define HDEJBHKGPDL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15C24EE0)
#define HDEJBHKGPDL_TICK_OFFSET UNITYSDK_OFFSET(0x15C24F30)

inline static constexpr unsigned int HDEJBHKGPDL_TypeDefinitionIndex = 52813;

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
