#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatSkillPreviewLogicInvokeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class AIMNKMEFBKE;
class GGDIMKDOIGA;
class GLPPDCIBMIH;
class IJFIHJJPHNA;
class KGBBCBLFINB;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }
namespace RPG::LittleGameShare::DiceCombatCore { class DiceCombatPreviewInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JKJLNLODJFA_BBICLJNOMJD_OFFSET UNITYSDK_OFFSET(0x1C6D3A70)
#define JKJLNLODJFA_CMMEEEEOHIP_OFFSET UNITYSDK_OFFSET(0x1C6D2850)
#define JKJLNLODJFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D1D70)
#define JKJLNLODJFA_DDHBAKCIKGG_OFFSET UNITYSDK_OFFSET(0x1C6D2CA0)
#define JKJLNLODJFA_EKFKBGFOJCI_OFFSET UNITYSDK_OFFSET(0x1C6D36A0)
#define JKJLNLODJFA_EOFEOHJKMHA_OFFSET UNITYSDK_OFFSET(0x1C6D3EE0)
#define JKJLNLODJFA_GHCDKNJOBME_OFFSET UNITYSDK_OFFSET(0x1C6D3850)
#define JKJLNLODJFA_GHNMHMFJJLF_OFFSET UNITYSDK_OFFSET(0x1C6D3270)
#define JKJLNLODJFA_GKLNONECJIJ_OFFSET UNITYSDK_OFFSET(0x1C6D2B00)
#define JKJLNLODJFA_HHNEMCPBGJE_OFFSET UNITYSDK_OFFSET(0x1C6C7260)
#define JKJLNLODJFA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6D1E90)
#define JKJLNLODJFA_JBFLBNDKHJB_OFFSET UNITYSDK_OFFSET(0x1C6D4100)
#define JKJLNLODJFA_JHOJCHOJJPF_OFFSET UNITYSDK_OFFSET(0x1C6D26B0)
#define JKJLNLODJFA_KBFOACAALII_OFFSET UNITYSDK_OFFSET(0x1C6AF920)
#define JKJLNLODJFA_KKDBGNNJEAI_OFFSET UNITYSDK_OFFSET(0x1C6D2100)
#define JKJLNLODJFA_KNJHAMFGDMA_OFFSET UNITYSDK_OFFSET(0x1C6D2790)
#define JKJLNLODJFA_OKAPFGCFBCL_OFFSET UNITYSDK_OFFSET(0x1C6D3590)
#define JKJLNLODJFA_PAOMFCJKJEE_OFFSET UNITYSDK_OFFSET(0x1C6D25D0)
#define JKJLNLODJFA_PNCBNMCHEBJ_OFFSET UNITYSDK_OFFSET(0x1C6D3C50)

inline static constexpr unsigned int JKJLNLODJFA_TypeDefinitionIndex = 36500;

	class JKJLNLODJFA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* DBMHCNEMACI; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* KACPOBFGPEK; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::GGDIMKDOIGA* CCPHCIBGFJB; // 0x28
		::System::Void _ctor(::GGDIMKDOIGA* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GGDIMKDOIGA*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJLNLODJFA_INITIALIZE_OFFSET))(this);
		}

		::System::Void KKDBGNNJEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKJLNLODJFA_KKDBGNNJEAI_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatSkillPreviewConfig* PAOMFCJKJEE(::IJFIHJJPHNA* a1)
		{
			return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_PAOMFCJKJEE_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatSkillPreviewConfig* JHOJCHOJJPF(::IJFIHJJPHNA* a1)
		{
			return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_JHOJCHOJJPF_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatSkillPreviewConfig* KNJHAMFGDMA(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
		{
			return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + JKJLNLODJFA_KNJHAMFGDMA_OFFSET))(this, a1, a2);
		}

		::System::Void CMMEEEEOHIP(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType a2, ::IJFIHJJPHNA* a3, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a4, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_CMMEEEEOHIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo* EKFKBGFOJCI(::IJFIHJJPHNA* a1)
		{
			return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_EKFKBGFOJCI_OFFSET))(this, a1);
		}

		::System::Void GKLNONECJIJ(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_GKLNONECJIJ_OFFSET))(this, a1);
		}

		::System::Void DDHBAKCIKGG(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a3, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_DDHBAKCIKGG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GHNMHMFJJLF(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a3, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_GHNMHMFJJLF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OKAPFGCFBCL(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a3, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_OKAPFGCFBCL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void GHCDKNJOBME(::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::IJFIHJJPHNA* a4, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a5, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_GHCDKNJOBME_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BBICLJNOMJD(::IJFIHJJPHNA* a1, ::RPG::GameCore::DiceCombatValueOperation a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::RPG::GameCore::DiceCombatValueOperation, ::System::Int32))((::PBYTE)hIl2Cpp + JKJLNLODJFA_BBICLJNOMJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PNCBNMCHEBJ(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*, ::System::String*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_PNCBNMCHEBJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JBFLBNDKHJB(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::KGBBCBLFINB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::KGBBCBLFINB*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_JBFLBNDKHJB_OFFSET))(this, a1, a2);
		}

		::System::Void KBFOACAALII(::IJFIHJJPHNA* a1, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::System::Collections::Generic::List_1<::GLPPDCIBMIH*>*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_KBFOACAALII_OFFSET))(this, a1, a2);
		}

		::System::Void HHNEMCPBGJE(::IJFIHJJPHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_HHNEMCPBGJE_OFFSET))(this, a1);
		}

		::System::Void EOFEOHJKMHA(::IJFIHJJPHNA* a1, ::GLPPDCIBMIH* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::GLPPDCIBMIH*, ::System::String*))((::PBYTE)hIl2Cpp + JKJLNLODJFA_EOFEOHJKMHA_OFFSET))(this, a1, a2, a3);
		}

	};
