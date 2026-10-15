#pragma once
#include "unitysdk/unitysdk.h"
class ADBMBHAELDP;
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
class NCLLCKELFPC;
class NDPCHFKPIFL;
namespace RPG::Client::LittleGame { template <typename T> class IAbilityAttributeService_1; }

#define MFIMCKDKDKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB902190)
#define MFIMCKDKDKG_GET_CONTEXT_OFFSET UNITYSDK_OFFSET(0xB902160)
#define MFIMCKDKDKG_GET_REQUESTAUTOREMOVE_OFFSET UNITYSDK_OFFSET(0xB902170)
#define MFIMCKDKDKG_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xB902150)
#define MFIMCKDKDKG_SET_REQUESTAUTOREMOVE_OFFSET UNITYSDK_OFFSET(0xB902180)

inline static constexpr unsigned int MFIMCKDKDKG_TypeDefinitionIndex = 75906;

	class MFIMCKDKDKG
	{
	public:
		::KPDKCEAFBHI* _Services_k__BackingField; // 0x60
		::JIJBCGDANLJ* _Context_k__BackingField; // 0x68
		::System::Boolean _RequestAutoRemove_k__BackingField; // 0x70
		::System::Void _ctor(::KPDKCEAFBHI* a1, ::JIJBCGDANLJ* a2, ::GHMGGIHEHJE* a3, ::RPG::Client::LittleGame::IAbilityAttributeService_1<::GHMGGIHEHJE*>* a4, ::ADBMBHAELDP* a5, ::NDPCHFKPIFL* a6, ::NCLLCKELFPC* a7)
		{
			return ((::System::Void(*)(::PVOID, ::KPDKCEAFBHI*, ::JIJBCGDANLJ*, ::GHMGGIHEHJE*, ::RPG::Client::LittleGame::IAbilityAttributeService_1<::GHMGGIHEHJE*>*, ::ADBMBHAELDP*, ::NDPCHFKPIFL*, ::NCLLCKELFPC*))((::PBYTE)hIl2Cpp + MFIMCKDKDKG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::KPDKCEAFBHI* get_Services()
		{
			return ((::KPDKCEAFBHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIMCKDKDKG_GET_SERVICES_OFFSET))(this);
		}

		::JIJBCGDANLJ* get_Context()
		{
			return ((::JIJBCGDANLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIMCKDKDKG_GET_CONTEXT_OFFSET))(this);
		}

		::System::Boolean get_RequestAutoRemove()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MFIMCKDKDKG_GET_REQUESTAUTOREMOVE_OFFSET))(this);
		}

		::System::Void set_RequestAutoRemove(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFIMCKDKDKG_SET_REQUESTAUTOREMOVE_OFFSET))(this, a1);
		}

	};
