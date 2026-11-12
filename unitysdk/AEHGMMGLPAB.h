#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKEPJNNPDNP;
namespace RPG::GameCore { class OptionTriggerInfo; }
namespace RPG::GameCore { class PropOptionTrigger_ButtonParam; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AEHGMMGLPAB_BADMOJHPDFG_OFFSET UNITYSDK_OFFSET(0xD5ACF00)
#define AEHGMMGLPAB_BKFELLAGHIH_OFFSET UNITYSDK_OFFSET(0xD5AC990)
#define AEHGMMGLPAB_CTOR_OFFSET UNITYSDK_OFFSET(0xD5AD310)
#define AEHGMMGLPAB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD5AC630)
#define AEHGMMGLPAB_DMGFDHEKLPH_OFFSET UNITYSDK_OFFSET(0xD5ACA90)
#define AEHGMMGLPAB_ECJGNIJOIAP_OFFSET UNITYSDK_OFFSET(0xD5AC7A0)
#define AEHGMMGLPAB_IEBHKCPHLHB_OFFSET UNITYSDK_OFFSET(0xD5AD160)
#define AEHGMMGLPAB_JOFIDAPPDJG_OFFSET UNITYSDK_OFFSET(0xD5AD050)
#define AEHGMMGLPAB_OCJJCAAKBCN_1_OFFSET UNITYSDK_OFFSET(0xD5AC910)
#define AEHGMMGLPAB_OCJJCAAKBCN_OFFSET UNITYSDK_OFFSET(0xD5ACE10)
#define AEHGMMGLPAB_OOALPFGKHDP_1_OFFSET UNITYSDK_OFFSET(0xD5AD2B0)
#define AEHGMMGLPAB_OOALPFGKHDP_OFFSET UNITYSDK_OFFSET(0xD5ACEA0)

inline static constexpr unsigned int AEHGMMGLPAB_TypeDefinitionIndex = 81653;

	class AEHGMMGLPAB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTriggerInfo*>* BNIJFFCBAPJ; // 0x10
		::RPG::GameCore::PropOptionTrigger_ButtonParam* EDNNMHBJOBK; // 0x18
		::System::Collections::Generic::List_1<::System::Boolean>* BPEKCBOEAHB; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* NHGJEFGPFEB; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* BPOJIHEPHOJ; // 0x30
		::System::Collections::Generic::List_1<::MKEPJNNPDNP*>* KKHALCLJGNJ; // 0x38
		::System::Boolean POHENOCBIHJ; // 0x40
		::System::Boolean OLOLCIBBIKP; // 0x41
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
