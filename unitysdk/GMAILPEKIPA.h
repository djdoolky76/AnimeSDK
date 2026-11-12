#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/ElationTimeTotalDamageToastType.h"
class MJAPKPPJNLF;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define GMAILPEKIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x16A4C070)
#define GMAILPEKIPA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16A4C090)
#define GMAILPEKIPA_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x16A4C810)
#define GMAILPEKIPA_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x16A4C080)
#define GMAILPEKIPA_GLAALGJLJEF_OFFSET UNITYSDK_OFFSET(0x16A4C850)
#define GMAILPEKIPA_HDNEDLNJHOK_1_OFFSET UNITYSDK_OFFSET(0x16A4C940)
#define GMAILPEKIPA_HDNEDLNJHOK_OFFSET UNITYSDK_OFFSET(0x16A4C190)
#define GMAILPEKIPA_MFHFOBFIJKE_OFFSET UNITYSDK_OFFSET(0x16A4C6B0)
#define GMAILPEKIPA_ONSKIP_OFFSET UNITYSDK_OFFSET(0x16A4C7B0)
#define GMAILPEKIPA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A4C270)
#define GMAILPEKIPA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16A4C510)
#define GMAILPEKIPA_TICK_OFFSET UNITYSDK_OFFSET(0x16A4C610)

inline static constexpr unsigned int GMAILPEKIPA_TypeDefinitionIndex = 56810;

	class GMAILPEKIPA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::MJAPKPPJNLF* OFKGLJOAMLD; // 0x20
		::System::Single BOBKAKEJPEI; // 0x28
		::System::Single DKOFFPPGEFI; // 0x2C
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJAPKPPJNLF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJAPKPPJNLF*))((::PBYTE)hIl2Cpp + GMAILPEKIPA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GMAILPEKIPA_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_ONSKIP_OFFSET))(this);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_GETCONFIG_OFFSET))(this);
		}

		::System::Void MFHFOBFIJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_MFHFOBFIJKE_OFFSET))(this);
		}

		::System::Void HDNEDLNJHOK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GMAILPEKIPA_HDNEDLNJHOK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ElationTimeTotalDamageToastType GLAALGJLJEF()
		{
			return ((::RPG::GameCore::ElationTimeTotalDamageToastType(*)(::PVOID))((::PBYTE)hIl2Cpp + GMAILPEKIPA_GLAALGJLJEF_OFFSET))(this);
		}

		::System::Void HDNEDLNJHOK_1(::RPG::GameCore::ElationTimeTotalDamageToastType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ElationTimeTotalDamageToastType))((::PBYTE)hIl2Cpp + GMAILPEKIPA_HDNEDLNJHOK_1_OFFSET))(this, a1);
		}

	};
