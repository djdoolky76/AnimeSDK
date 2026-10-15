#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskState.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }

#define KDJNAAOFMMJ_CCFPKOGNCMB_OFFSET UNITYSDK_OFFSET(0xB364830)
#define KDJNAAOFMMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB364820)
#define KDJNAAOFMMJ_FAGOFCLLAAJ_OFFSET UNITYSDK_OFFSET(0xB364B90)
#define KDJNAAOFMMJ_FJFAKAKGEIJ_OFFSET UNITYSDK_OFFSET(0xB3452F0)
#define KDJNAAOFMMJ_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0xB364F90)
#define KDJNAAOFMMJ_GET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xB365120)
#define KDJNAAOFMMJ_GET_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0xB365100)
#define KDJNAAOFMMJ_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB364AC0)
#define KDJNAAOFMMJ_HBPAOKBNJIJ_OFFSET UNITYSDK_OFFSET(0xB364990)
#define KDJNAAOFMMJ_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB364E00)
#define KDJNAAOFMMJ_JCKDNNGALEO_OFFSET UNITYSDK_OFFSET(0xB365070)
#define KDJNAAOFMMJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB345A80)
#define KDJNAAOFMMJ_LBADKLBIJLM_OFFSET UNITYSDK_OFFSET(0xB364E40)
#define KDJNAAOFMMJ_MDFBKGOJOJI_OFFSET UNITYSDK_OFFSET(0xB345A10)
#define KDJNAAOFMMJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB345420)
#define KDJNAAOFMMJ_OHKOLMODGMD_OFFSET UNITYSDK_OFFSET(0xB364F00)
#define KDJNAAOFMMJ_SET_ONFAILED_OFFSET UNITYSDK_OFFSET(0xB365130)
#define KDJNAAOFMMJ_SET_ONSUCCESS_OFFSET UNITYSDK_OFFSET(0xB365110)
#define KDJNAAOFMMJ_TICK_OFFSET UNITYSDK_OFFSET(0xB345700)

inline static constexpr unsigned int KDJNAAOFMMJ_TypeDefinitionIndex = 54790;

	class KDJNAAOFMMJ : public ::System::Object
	{
	public:
		::System::Action* _OnFailed_k__BackingField; // 0x10
		::GELIALJDFBL* OACOPLIPPLB; // 0x18
		::System::Action* _OnSuccess_k__BackingField; // 0x20
		::System::Boolean EGGNNPNDIDD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_CTOR_OFFSET))(this);
		}

		static ::KDJNAAOFMMJ* FJFAKAKGEIJ(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::KDJNAAOFMMJ*(*)(::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_FJFAKAKGEIJ_OFFSET))(a1, a2);
		}

		static ::KDJNAAOFMMJ* CCFPKOGNCMB(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::KDJNAAOFMMJ*(*)(::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_CCFPKOGNCMB_OFFSET))(a1, a2);
		}

		static ::KDJNAAOFMMJ* HBPAOKBNJIJ(::RPG::GameCore::TaskContext* a1, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a2)
		{
			return ((::KDJNAAOFMMJ*(*)(::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_HBPAOKBNJIJ_OFFSET))(a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void FAGOFCLLAAJ(::GELIALJDFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_FAGOFCLLAAJ_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::RPG::GameCore::TaskState MDFBKGOJOJI()
		{
			return ((::RPG::GameCore::TaskState(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_MDFBKGOJOJI_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_TICK_OFFSET))(this, a1);
		}

		::System::Void LBADKLBIJLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_LBADKLBIJLM_OFFSET))(this);
		}

		::System::Boolean OHKOLMODGMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_OHKOLMODGMD_OFFSET))(this);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_GCCAABJLGIG_OFFSET))(this);
		}

		::System::Boolean JCKDNNGALEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_JCKDNNGALEO_OFFSET))(this);
		}

		::System::Action* get_OnSuccess()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_GET_ONSUCCESS_OFFSET))(this);
		}

		::System::Void set_OnSuccess(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_SET_ONSUCCESS_OFFSET))(this, a1);
		}

		::System::Action* get_OnFailed()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_GET_ONFAILED_OFFSET))(this);
		}

		::System::Void set_OnFailed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KDJNAAOFMMJ_SET_ONFAILED_OFFSET))(this, a1);
		}

	};
