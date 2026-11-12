#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class PropPuzzleEventListener; }
namespace RPG::GameCore { class TaskContext; }

#define GHDMDGFGAML_CGFKDEOMKME_OFFSET UNITYSDK_OFFSET(0x16951C70)
#define GHDMDGFGAML_CTOR_OFFSET UNITYSDK_OFFSET(0x16950430)
#define GHDMDGFGAML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16950D20)
#define GHDMDGFGAML_FFHOEGJPKPP_OFFSET UNITYSDK_OFFSET(0x169519D0)
#define GHDMDGFGAML_GGKLEKPGLLN_OFFSET UNITYSDK_OFFSET(0x16951430)
#define GHDMDGFGAML_JNPJIEDLIJI_OFFSET UNITYSDK_OFFSET(0x16951050)
#define GHDMDGFGAML_NDCHEHLGPPC_OFFSET UNITYSDK_OFFSET(0x16951700)
#define GHDMDGFGAML_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16950670)
#define GHDMDGFGAML_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16950A00)
#define GHDMDGFGAML_TICK_OFFSET UNITYSDK_OFFSET(0x16951F10)

inline static constexpr unsigned int GHDMDGFGAML_TypeDefinitionIndex = 59594;

	class GHDMDGFGAML : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* DIAFPHEOKHC; // 0x18
		::KFELGAIGHAP* PAOJOBEPBIO; // 0x20
		::RPG::GameCore::PropPuzzleEventListener* IGHAHBNLIJA; // 0x28
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x30
		::KFELGAIGHAP* JAKNDHHOCJE; // 0x38
		::KFELGAIGHAP* CIFOILLJFNF; // 0x40
		::KFELGAIGHAP* LPJGEHFALGF; // 0x48
		::System::Boolean MOHGDNPILBP; // 0x50
		::System::Boolean LBCKGFCDOLG; // 0x51
		::System::Boolean HKLDENCGDGC; // 0x52
		::System::Boolean ICPBHNFIAMM; // 0x53
		::System::Boolean IMNFCMNCPDJ; // 0x54
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
