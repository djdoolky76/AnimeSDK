#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNPCCOLHBIK;
class FNPCCOLHBIK_OLOCNNAHMPH;
class KFELGAIGHAP;
namespace RPG::GameCore { class PropStateMatchConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNPCCOLHBIK_KJLPEGJOGOI_ADLCFDOCEKK_OFFSET UNITYSDK_OFFSET(0x158D0E50)
#define FNPCCOLHBIK_KJLPEGJOGOI_CLEAR_OFFSET UNITYSDK_OFFSET(0x158D0A40)
#define FNPCCOLHBIK_KJLPEGJOGOI_COIEFOLMLFO_OFFSET UNITYSDK_OFFSET(0x158CF520)
#define FNPCCOLHBIK_KJLPEGJOGOI_CTOR_OFFSET UNITYSDK_OFFSET(0x158D0E60)
#define FNPCCOLHBIK_KJLPEGJOGOI_HJAALFKJHIM_OFFSET UNITYSDK_OFFSET(0x158CF3C0)
#define FNPCCOLHBIK_KJLPEGJOGOI_IIDJKFFMDIC_OFFSET UNITYSDK_OFFSET(0x158CF690)
#define FNPCCOLHBIK_KJLPEGJOGOI_KKJFIDBMFCL_OFFSET UNITYSDK_OFFSET(0x158D0AF0)
#define FNPCCOLHBIK_KJLPEGJOGOI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x158CB9C0)
#define FNPCCOLHBIK_KJLPEGJOGOI_LHGDIIHCJOF_OFFSET UNITYSDK_OFFSET(0x158CF1E0)
#define FNPCCOLHBIK_KJLPEGJOGOI_MBEBELGFPDE_OFFSET UNITYSDK_OFFSET(0x158D0BF0)
#define FNPCCOLHBIK_KJLPEGJOGOI_MIJKACLIDCH_OFFSET UNITYSDK_OFFSET(0x158D0D60)

inline static constexpr unsigned int FNPCCOLHBIK_KJLPEGJOGOI_TypeDefinitionIndex = 60268;

	class FNPCCOLHBIK_KJLPEGJOGOI : public ::System::Object
	{
	public:
		::FNPCCOLHBIK* OJMMJIALPON; // 0x10
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* AODFFLCLFGJ; // 0x20
		::KFELGAIGHAP* CPEDDIIDICH; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* CLLOHMIFFHJ; // 0x30
		::System::UInt32 GNCPHOKDPPE; // 0x38
		::System::Boolean BPPKFLKGMIN; // 0x3C
		::System::Boolean HJMBFGPIJFF; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FNPCCOLHBIK* a1, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>* a2, ::RPG::GameCore::TaskContext* a3, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a4, ::System::Boolean a5, ::System::UInt32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::FNPCCOLHBIK*, ::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_CLEAR_OFFSET))(this);
		}

		::System::Boolean LHGDIIHCJOF(::FNPCCOLHBIK_OLOCNNAHMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNPCCOLHBIK_OLOCNNAHMPH*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_LHGDIIHCJOF_OFFSET))(this, a1);
		}

		::System::Boolean HJAALFKJHIM(::FNPCCOLHBIK_OLOCNNAHMPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNPCCOLHBIK_OLOCNNAHMPH*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_HJAALFKJHIM_OFFSET))(this, a1);
		}

		::System::Boolean COIEFOLMLFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_COIEFOLMLFO_OFFSET))(this);
		}

		::System::UInt32 MBEBELGFPDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_MBEBELGFPDE_OFFSET))(this);
		}

		::System::Void IIDJKFFMDIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_IIDJKFFMDIC_OFFSET))(this);
		}

		::System::Boolean MIJKACLIDCH(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1, ::KFELGAIGHAP* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_MIJKACLIDCH_OFFSET))(this, a1, a2);
		}

		::System::Void KKJFIDBMFCL(::KFELGAIGHAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFELGAIGHAP*))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_KKJFIDBMFCL_OFFSET))(this, a1);
		}

		::System::UInt32 ADLCFDOCEKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPCCOLHBIK_KJLPEGJOGOI_ADLCFDOCEKK_OFFSET))(this);
		}

	};
