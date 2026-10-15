#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
namespace RPG::Client { class DialogEmitterBehavior; }
namespace RPG::Client { class DialogEmitterControllerMonoPlugin; }
namespace RPG::Client { class DialogEmitterMonoPlugin; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMFKLNKNKDA_BBCKCIKPBAA_OFFSET UNITYSDK_OFFSET(0xC31BCD0)
#define PMFKLNKNKDA_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC31BF30)
#define PMFKLNKNKDA_CTOR_OFFSET UNITYSDK_OFFSET(0xC31C420)
#define PMFKLNKNKDA_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0xC31BBB0)
#define PMFKLNKNKDA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC31BDB0)
#define PMFKLNKNKDA_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC31BEB0)
#define PMFKLNKNKDA_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xC31C030)
#define PMFKLNKNKDA_MKBKFBFOBIE_OFFSET UNITYSDK_OFFSET(0xC31BC30)
#define PMFKLNKNKDA_MPONJLCNNDI_OFFSET UNITYSDK_OFFSET(0xC31BA00)
#define PMFKLNKNKDA_NEKGALPLEOH_OFFSET UNITYSDK_OFFSET(0xC31BFD0)
#define PMFKLNKNKDA_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC31BE40)
#define PMFKLNKNKDA_POOKPLGCKFE_OFFSET UNITYSDK_OFFSET(0xC31BF90)
#define PMFKLNKNKDA_TICK_OFFSET UNITYSDK_OFFSET(0xC31C090)

inline static constexpr unsigned int PMFKLNKNKDA_TypeDefinitionIndex = 70890;

	class PMFKLNKNKDA : public ::RPG::Client::TABehaviorBase
	{
	public:
		::RPG::Client::DialogEmitterMonoPlugin* IAJLHLMPCHP; // 0x38
		::RPG::Client::DialogEmitterBehavior* KCKKDGAGPFJ; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* EHBPPKMJPBD; // 0x48
		::System::Single FAKAEHGECFB; // 0x50
		::System::Int32 ABBBKLNONAN; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_CTOR_OFFSET))(this);
		}

		::RPG::Client::DialogEmitterMonoPlugin* MPONJLCNNDI()
		{
			return ((::RPG::Client::DialogEmitterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_MPONJLCNNDI_OFFSET))(this);
		}

		::RPG::Client::DialogEmitterBehavior* MKBKFBFOBIE()
		{
			return ((::RPG::Client::DialogEmitterBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_MKBKFBFOBIE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* BBCKCIKPBAA()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_BBCKCIKPBAA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Boolean POOKPLGCKFE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_POOKPLGCKFE_OFFSET))(this);
		}

		::System::Void NEKGALPLEOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_NEKGALPLEOH_OFFSET))(this);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_TICK_OFFSET))(this, a1);
		}

		::RPG::Client::DialogEmitterControllerMonoPlugin* JJINILFDJOF()
		{
			return ((::RPG::Client::DialogEmitterControllerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFKLNKNKDA_JJINILFDJOF_OFFSET))(this);
		}

	};
