#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIMHLHECACH_IdleLiveBGMArea.h"
#include "unitysdk/RPG/Client/BaseGameFlowContext.h"
class GPAOBOJNJGA;
class NIMHLHECACH;
class PLLPNJOEDHF;
namespace RPG::Client { class BaseGameFlow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NIMHLHECACH_BCLKLHGMFPM_OFFSET UNITYSDK_OFFSET(0xBBF6DB0)
#define NIMHLHECACH_BFAOFKPGNCF_OFFSET UNITYSDK_OFFSET(0xBBF7550)
#define NIMHLHECACH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBBF5850)
#define NIMHLHECACH_CTOR_OFFSET UNITYSDK_OFFSET(0xBBF56E0)
#define NIMHLHECACH_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xBBF5A40)
#define NIMHLHECACH_FKIHCFFOJBB_OFFSET UNITYSDK_OFFSET(0xBBF71C0)
#define NIMHLHECACH_FKLADKBBENH_OFFSET UNITYSDK_OFFSET(0xBBF6F60)
#define NIMHLHECACH_HLOOALJJGNL_OFFSET UNITYSDK_OFFSET(0xBBF78C0)
#define NIMHLHECACH_JCNBPDDPDHC_OFFSET UNITYSDK_OFFSET(0xBBF7870)
#define NIMHLHECACH_KCGDBLLLFPD_OFFSET UNITYSDK_OFFSET(0xBBF7480)
#define NIMHLHECACH_KFEIABJPLOG_OFFSET UNITYSDK_OFFSET(0xBBF7170)
#define NIMHLHECACH_MDPJPBJBKLA_OFFSET UNITYSDK_OFFSET(0xBBF7820)
#define NIMHLHECACH_RECEIVEMESSAGE_OFFSET UNITYSDK_OFFSET(0xBBF74D0)
#define NIMHLHECACH__ONDESTROYED_OFFSET UNITYSDK_OFFSET(0xBBF76A0)

inline static constexpr unsigned int NIMHLHECACH_TypeDefinitionIndex = 75266;

	class NIMHLHECACH : public ::RPG::Client::BaseGameFlowContext
	{
	public:
		::PLLPNJOEDHF* HEMMHLHDGBO; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Collections::Generic::List_1<::GPAOBOJNJGA*>*>* HCFJJACEMKG; // 0x28
		::System::String* ACPLBHCDKFG; // 0x30
		::NIMHLHECACH_IdleLiveBGMArea LLBADFLDEIA; // 0x38
		::System::Void _ctor(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + NIMHLHECACH_CTOR_OFFSET))(this, a1);
		}

		static ::NIMHLHECACH* BPLPBPMEODA(::RPG::Client::BaseGameFlow* a1)
		{
			return ((::NIMHLHECACH*(*)(::RPG::Client::BaseGameFlow*))((::PBYTE)hIl2Cpp + NIMHLHECACH_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void FKLADKBBENH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_FKLADKBBENH_OFFSET))(this);
		}

		::System::Void KFEIABJPLOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_KFEIABJPLOG_OFFSET))(this);
		}

		::System::Void KCGDBLLLFPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_KCGDBLLLFPD_OFFSET))(this);
		}

		::System::Void ReceiveMessage(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NIMHLHECACH_RECEIVEMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void FKIHCFFOJBB(::NIMHLHECACH_IdleLiveBGMArea a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH_IdleLiveBGMArea))((::PBYTE)hIl2Cpp + NIMHLHECACH_FKIHCFFOJBB_OFFSET))(this, a1);
		}

		::System::Void BFAOFKPGNCF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NIMHLHECACH_BFAOFKPGNCF_OFFSET))(this, a1);
		}

		::System::Void _OnDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH__ONDESTROYED_OFFSET))(this);
		}

		::System::Void BCLKLHGMFPM(::NIMHLHECACH_IdleLiveBGMArea a1, ::NIMHLHECACH_IdleLiveBGMArea a2, ::Il2CppArray<::GPAOBOJNJGA*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::NIMHLHECACH_IdleLiveBGMArea, ::NIMHLHECACH_IdleLiveBGMArea, ::Il2CppArray<::GPAOBOJNJGA*>*))((::PBYTE)hIl2Cpp + NIMHLHECACH_BCLKLHGMFPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MDPJPBJBKLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_MDPJPBJBKLA_OFFSET))(this);
		}

		::System::Void JCNBPDDPDHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_JCNBPDDPDHC_OFFSET))(this);
		}

		::System::Void HLOOALJJGNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIMHLHECACH_HLOOALJJGNL_OFFSET))(this);
		}

	};
