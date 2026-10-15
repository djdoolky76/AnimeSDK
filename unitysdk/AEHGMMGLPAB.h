#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKEPJNNPDNP;
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEHGMMGLPAB_BADMOJHPDFG_OFFSET UNITYSDK_OFFSET(0xB14FF60)
#define AEHGMMGLPAB_BKFELLAGHIH_OFFSET UNITYSDK_OFFSET(0xB14F9F0)
#define AEHGMMGLPAB_CTOR_OFFSET UNITYSDK_OFFSET(0xB150370)
#define AEHGMMGLPAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB14F6A0)
#define AEHGMMGLPAB_DMGFDHEKLPH_OFFSET UNITYSDK_OFFSET(0xB14FAF0)
#define AEHGMMGLPAB_ECJGNIJOIAP_OFFSET UNITYSDK_OFFSET(0xB14F800)
#define AEHGMMGLPAB_IEBHKCPHLHB_OFFSET UNITYSDK_OFFSET(0xB1501C0)
#define AEHGMMGLPAB_JOFIDAPPDJG_OFFSET UNITYSDK_OFFSET(0xB1500B0)
#define AEHGMMGLPAB_OCJJCAAKBCN_1_OFFSET UNITYSDK_OFFSET(0xB14F970)
#define AEHGMMGLPAB_OCJJCAAKBCN_OFFSET UNITYSDK_OFFSET(0xB14FE70)
#define AEHGMMGLPAB_OOALPFGKHDP_1_OFFSET UNITYSDK_OFFSET(0xB150310)
#define AEHGMMGLPAB_OOALPFGKHDP_OFFSET UNITYSDK_OFFSET(0xB14FF00)

inline static constexpr unsigned int AEHGMMGLPAB_TypeDefinitionIndex = 78881;

	class AEHGMMGLPAB : public ::System::Object
	{
	public:
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* BPOJIHEPHOJ; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* NHGJEFGPFEB; // 0x20
		::System::Collections::Generic::List_1<::System::Boolean>* BPEKCBOEAHB; // 0x28
		::System::Collections::Generic::List_1<::MKEPJNNPDNP*>* KKHALCLJGNJ; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* BNIJFFCBAPJ; // 0x38
		::System::Boolean OLOLCIBBIKP; // 0x40
		::System::Boolean POHENOCBIHJ; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_DISPOSE_OFFSET))(this);
		}

		::System::Void ECJGNIJOIAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_ECJGNIJOIAP_OFFSET))(this);
		}

		::System::Void BKFELLAGHIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_BKFELLAGHIH_OFFSET))(this);
		}

		::System::Void DMGFDHEKLPH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_DMGFDHEKLPH_OFFSET))(this, a1);
		}

		::System::Void BADMOJHPDFG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_BADMOJHPDFG_OFFSET))(this, a1);
		}

		::System::Void JOFIDAPPDJG(::MKEPJNNPDNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKEPJNNPDNP*))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_JOFIDAPPDJG_OFFSET))(this, a1);
		}

		::System::Int32 IEBHKCPHLHB(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_IEBHKCPHLHB_OFFSET))(this, a1);
		}

		::System::Void OOALPFGKHDP(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_OOALPFGKHDP_OFFSET))(this, a1);
		}

		::System::Void OOALPFGKHDP_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_OOALPFGKHDP_1_OFFSET))(this);
		}

		::System::Void OCJJCAAKBCN(::RPG::GameCore::PropOptionTrigger_ButtonParam* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropOptionTrigger_ButtonParam*, ::System::Boolean))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_OCJJCAAKBCN_OFFSET))(this, a1, a2);
		}

		::System::Void OCJJCAAKBCN_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEHGMMGLPAB_OCJJCAAKBCN_1_OFFSET))(this);
		}

	};
