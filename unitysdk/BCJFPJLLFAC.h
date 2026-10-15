#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinActionIntentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ICHIALIFCIJ.h"
class CMIBMDCJFEG;
class CPGHDGPPBJH;
class DLMIEJJBGNF;
class ECNEEKNHIOE;
class JAACNICGMHN;
class KCMGAIFFBPL;
class MKHNCCDJGDL;

#define BCJFPJLLFAC_ABLAACFFPBJ_OFFSET UNITYSDK_OFFSET(0x15EAB760)
#define BCJFPJLLFAC_CCCMCNAJDAA_OFFSET UNITYSDK_OFFSET(0x15EAAC70)
#define BCJFPJLLFAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15EAAAE0)
#define BCJFPJLLFAC_EKLGBJOKJGI_OFFSET UNITYSDK_OFFSET(0x15EAAD40)
#define BCJFPJLLFAC_ELDKHBHKPCC_OFFSET UNITYSDK_OFFSET(0x15EAB180)
#define BCJFPJLLFAC_GKEKKKKLIFM_OFFSET UNITYSDK_OFFSET(0x15EAB240)
#define BCJFPJLLFAC_GOIAPACNIPE_OFFSET UNITYSDK_OFFSET(0x15EAAB50)
#define BCJFPJLLFAC_KEGFKJNBPBE_OFFSET UNITYSDK_OFFSET(0x15EAAE40)
#define BCJFPJLLFAC_LBEJIALAFEM_OFFSET UNITYSDK_OFFSET(0x15EAAEF0)
#define BCJFPJLLFAC_OHIPNMNMKDG_OFFSET UNITYSDK_OFFSET(0x15EAAFA0)

inline static constexpr unsigned int BCJFPJLLFAC_TypeDefinitionIndex = 81014;

	class BCJFPJLLFAC : public ::System::Object
	{
	public:
		::MKHNCCDJGDL* CGMFPFBLNJC; // 0x10
		::System::Void _ctor(::MKHNCCDJGDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKHNCCDJGDL*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_CTOR_OFFSET))(this, a1);
		}

		::System::Void GOIAPACNIPE(::ECNEEKNHIOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_GOIAPACNIPE_OFFSET))(this, a1);
		}

		::System::Void CCCMCNAJDAA(::ECNEEKNHIOE* a1, ::ICHIALIFCIJ a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::ICHIALIFCIJ))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_CCCMCNAJDAA_OFFSET))(this, a1, a2);
		}

		::System::Void EKLGBJOKJGI(::ECNEEKNHIOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_EKLGBJOKJGI_OFFSET))(this, a1);
		}

		::System::Void KEGFKJNBPBE(::ECNEEKNHIOE* a1, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::Il2CppArray<::RPG::GameCore::FateRinActionIntentType>*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_KEGFKJNBPBE_OFFSET))(this, a1, a2);
		}

		::System::Void LBEJIALAFEM(::ECNEEKNHIOE* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::ECNEEKNHIOE*, ::System::UInt32))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_LBEJIALAFEM_OFFSET))(this, a1, a2);
		}

		::System::Void OHIPNMNMKDG(::System::UInt32 a1, ::JAACNICGMHN* a2, ::KCMGAIFFBPL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::JAACNICGMHN*, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_OHIPNMNMKDG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ELDKHBHKPCC(::CPGHDGPPBJH* a1, ::DLMIEJJBGNF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CPGHDGPPBJH*, ::DLMIEJJBGNF*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_ELDKHBHKPCC_OFFSET))(this, a1, a2);
		}

		::System::Void GKEKKKKLIFM(::System::UInt32 a1, ::CPGHDGPPBJH* a2, ::CMIBMDCJFEG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::CPGHDGPPBJH*, ::CMIBMDCJFEG*))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_GKEKKKKLIFM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ABLAACFFPBJ(::CPGHDGPPBJH* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::CPGHDGPPBJH*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCJFPJLLFAC_ABLAACFFPBJ_OFFSET))(this, a1, a2);
		}

	};
