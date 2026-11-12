#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDBHHBCMEFL.h"
class KDJNAAOFMMJ;
class LMFOEFCOFNB;
namespace RPG::GameCore { class TaskContext; }

#define LPDIEPOAEAB_BADJCIBELAP_OFFSET UNITYSDK_OFFSET(0xC07FE10)
#define LPDIEPOAEAB_CTOR_OFFSET UNITYSDK_OFFSET(0xC07F590)
#define LPDIEPOAEAB_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0xC07FAB0)
#define LPDIEPOAEAB_FAFDGOOAHFN_OFFSET UNITYSDK_OFFSET(0xC07FA50)
#define LPDIEPOAEAB_GBAJHPHDFCC_OFFSET UNITYSDK_OFFSET(0xC07FED0)
#define LPDIEPOAEAB_LNMOCNDILJN_OFFSET UNITYSDK_OFFSET(0xC07FF30)
#define LPDIEPOAEAB_MDOPNMNMIIG_OFFSET UNITYSDK_OFFSET(0xC07FE70)
#define LPDIEPOAEAB_OBANPDHAHJB_OFFSET UNITYSDK_OFFSET(0xC07FDB0)
#define LPDIEPOAEAB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC07F640)
#define LPDIEPOAEAB_TICK_OFFSET UNITYSDK_OFFSET(0xC07FB10)

inline static constexpr unsigned int LPDIEPOAEAB_TypeDefinitionIndex = 54508;

	class LPDIEPOAEAB : public ::GDBHHBCMEFL
	{
	public:
		::KDJNAAOFMMJ* DOFPLDGILOA; // 0x28
		::LMFOEFCOFNB* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LMFOEFCOFNB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LMFOEFCOFNB*))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_TICK_OFFSET))(this, a1);
		}

		::System::Void FAFDGOOAHFN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_FAFDGOOAHFN_OFFSET))(this);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void OBANPDHAHJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_OBANPDHAHJB_OFFSET))(this);
		}

		::System::Void BADJCIBELAP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_BADJCIBELAP_OFFSET))(this);
		}

		::System::Void MDOPNMNMIIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_MDOPNMNMIIG_OFFSET))(this);
		}

		::System::Void GBAJHPHDFCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_GBAJHPHDFCC_OFFSET))(this);
		}

		::System::Void LNMOCNDILJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDIEPOAEAB_LNMOCNDILJN_OFFSET))(this);
		}

	};
