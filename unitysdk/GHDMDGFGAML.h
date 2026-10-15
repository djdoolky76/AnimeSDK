#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define GHDMDGFGAML_CGFKDEOMKME_OFFSET UNITYSDK_OFFSET(0x15A0BA50)
#define GHDMDGFGAML_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0A210)
#define GHDMDGFGAML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A0AB00)
#define GHDMDGFGAML_FFHOEGJPKPP_OFFSET UNITYSDK_OFFSET(0x15A0B7B0)
#define GHDMDGFGAML_GGKLEKPGLLN_OFFSET UNITYSDK_OFFSET(0x15A0B210)
#define GHDMDGFGAML_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0x15A0AE30)
#define GHDMDGFGAML_NDCHEHLGPPC_OFFSET UNITYSDK_OFFSET(0x15A0B4E0)
#define GHDMDGFGAML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A0A450)
#define GHDMDGFGAML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A0A7E0)
#define GHDMDGFGAML_TICK_OFFSET UNITYSDK_OFFSET(0x15A0BD20)

inline static constexpr unsigned int GHDMDGFGAML_TypeDefinitionIndex = 58338;

	class GHDMDGFGAML : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PropPuzzleEventListener* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::KFELGAIGHAP* CIFOILLJFNF; // 0x28
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x30
		::KFELGAIGHAP* DIAFPHEOKHC; // 0x38
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x40
		::KFELGAIGHAP* LPJGEHFALGF; // 0x48
		::System::Boolean HKLDENCGDGC; // 0x50
		::System::Boolean IMNFCMNCPDJ; // 0x51
		::System::Boolean ICPBHNFIAMM; // 0x52
		::System::Boolean MOHGDNPILBP; // 0x53
		::System::Boolean LBCKGFCDOLG; // 0x54
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropPuzzleEventListener* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropPuzzleEventListener*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDMDGFGAML_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDMDGFGAML_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHDMDGFGAML_DISPOSE_OFFSET))(this);
		}

		::System::Void JNPJIEDLIJI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_JNPJIEDLIJI_OFFSET))(this, a1);
		}

		::System::Void GGKLEKPGLLN(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_GGKLEKPGLLN_OFFSET))(this, a1);
		}

		::System::Void NDCHEHLGPPC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_NDCHEHLGPPC_OFFSET))(this, a1);
		}

		::System::Void FFHOEGJPKPP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_FFHOEGJPKPP_OFFSET))(this, a1);
		}

		::System::Void CGFKDEOMKME(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GHDMDGFGAML_CGFKDEOMKME_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHDMDGFGAML_TICK_OFFSET))(this, a1);
		}

	};
