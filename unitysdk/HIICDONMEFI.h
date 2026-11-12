#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/System/ValueTuple_2.h"
class BIJKIKKNHEO;
class BOJOBHMEEIH;
class GELIALJDFBL;
class LDCOJFNHIHL;
class LKIOKAFHPOL;
class OLBEPOHNEPC;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define HIICDONMEFI_BJGLHFPKEAD_OFFSET UNITYSDK_OFFSET(0x16C33C70)
#define HIICDONMEFI_BNJKHILAILM_OFFSET UNITYSDK_OFFSET(0x16C34870)
#define HIICDONMEFI_BOHODOFAPKP_OFFSET UNITYSDK_OFFSET(0x16C34B30)
#define HIICDONMEFI_CHDCCCEPKJN_OFFSET UNITYSDK_OFFSET(0x16C33A60)
#define HIICDONMEFI_COHGEENDLHE_OFFSET UNITYSDK_OFFSET(0x16C33DD0)
#define HIICDONMEFI_CTOR_OFFSET UNITYSDK_OFFSET(0x16C33640)
#define HIICDONMEFI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16C33650)
#define HIICDONMEFI_DMHCEHGJODH_OFFSET UNITYSDK_OFFSET(0x16C34820)
#define HIICDONMEFI_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16C341D0)
#define HIICDONMEFI_ILCMCECJHEC_OFFSET UNITYSDK_OFFSET(0x16C336F0)
#define HIICDONMEFI_JANBBPIMNMD_OFFSET UNITYSDK_OFFSET(0x16C34610)
#define HIICDONMEFI_KHPCDPPFHOG_OFFSET UNITYSDK_OFFSET(0x16C34510)
#define HIICDONMEFI_LFJMEPBLCPI_OFFSET UNITYSDK_OFFSET(0x16C34A10)
#define HIICDONMEFI_LNPPCBCIOKE_OFFSET UNITYSDK_OFFSET(0x16C34B80)
#define HIICDONMEFI_MLPJEGJAFMA_OFFSET UNITYSDK_OFFSET(0x16C33790)
#define HIICDONMEFI_NFPGMGONMJE_OFFSET UNITYSDK_OFFSET(0x16C34290)
#define HIICDONMEFI_NGIDBHADLNO_OFFSET UNITYSDK_OFFSET(0x16C33920)
#define HIICDONMEFI_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16C344B0)
#define HIICDONMEFI_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16C341E0)
#define HIICDONMEFI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16C339D0)
#define HIICDONMEFI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16C34130)
#define HIICDONMEFI_PNOABCGMPOA_OFFSET UNITYSDK_OFFSET(0x16C349C0)
#define HIICDONMEFI_SETNEXTTASK_OFFSET UNITYSDK_OFFSET(0x16C33980)
#define HIICDONMEFI_TICK_OFFSET UNITYSDK_OFFSET(0x16C340D0)

inline static constexpr unsigned int HIICDONMEFI_TypeDefinitionIndex = 54266;

	class HIICDONMEFI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::BOJOBHMEEIH* BBMKJGIGJPN; // 0x20
		::OLBEPOHNEPC* OFKGLJOAMLD; // 0x28
		::GELIALJDFBL* DMKAOCCJEBG; // 0x30
		::RPG::Client::LuaUIController* CENBMBJLIDH; // 0x38
		::System::Boolean PGJPOOHJPEO; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OLBEPOHNEPC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OLBEPOHNEPC*))((::PBYTE)hIl2Cpp + HIICDONMEFI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_DISPOSE_OFFSET))(this);
		}

		::GELIALJDFBL* SetNextTask(::GELIALJDFBL* a1)
		{
			return ((::GELIALJDFBL*(*)(::PVOID, ::GELIALJDFBL*))((::PBYTE)hIl2Cpp + HIICDONMEFI_SETNEXTTASK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIICDONMEFI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_ONTASKRESET_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_ONSKIP_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HIICDONMEFI_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean CHDCCCEPKJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_CHDCCCEPKJN_OFFSET))(this);
		}

		::System::Boolean KHPCDPPFHOG(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + HIICDONMEFI_KHPCDPPFHOG_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> JANBBPIMNMD()
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_JANBBPIMNMD_OFFSET))(this);
		}

		::System::Void COHGEENDLHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_COHGEENDLHE_OFFSET))(this);
		}

		::System::Void NGIDBHADLNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_NGIDBHADLNO_OFFSET))(this);
		}

		::System::Void DMHCEHGJODH(::LKIOKAFHPOL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKIOKAFHPOL*))((::PBYTE)hIl2Cpp + HIICDONMEFI_DMHCEHGJODH_OFFSET))(this, a1);
		}

		::System::Void PNOABCGMPOA(::LDCOJFNHIHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCOJFNHIHL*))((::PBYTE)hIl2Cpp + HIICDONMEFI_PNOABCGMPOA_OFFSET))(this, a1);
		}

		::System::Void BOHODOFAPKP(::BIJKIKKNHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BIJKIKKNHEO*))((::PBYTE)hIl2Cpp + HIICDONMEFI_BOHODOFAPKP_OFFSET))(this, a1);
		}

		::System::Void LFJMEPBLCPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_LFJMEPBLCPI_OFFSET))(this);
		}

		::System::Void BNJKHILAILM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_BNJKHILAILM_OFFSET))(this);
		}

		::System::Void BJGLHFPKEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_BJGLHFPKEAD_OFFSET))(this);
		}

		::System::Void MLPJEGJAFMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_MLPJEGJAFMA_OFFSET))(this);
		}

		::System::Void LNPPCBCIOKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_LNPPCBCIOKE_OFFSET))(this);
		}

		::System::Void NFPGMGONMJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_NFPGMGONMJE_OFFSET))(this);
		}

		::System::Void ILCMCECJHEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIICDONMEFI_ILCMCECJHEC_OFFSET))(this);
		}

	};
