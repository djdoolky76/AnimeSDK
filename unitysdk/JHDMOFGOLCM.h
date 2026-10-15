#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class GKMKOMHLGDC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHDMOFGOLCM_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB1AB070)
#define JHDMOFGOLCM_BGCBDDBJCEL_OFFSET UNITYSDK_OFFSET(0xB1AB2F0)
#define JHDMOFGOLCM_CHGHBOEABAK_OFFSET UNITYSDK_OFFSET(0xB1AB3F0)
#define JHDMOFGOLCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AB9E0)
#define JHDMOFGOLCM_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xB1AAEB0)
#define JHDMOFGOLCM_EPCBMBHBION_OFFSET UNITYSDK_OFFSET(0xB1AB550)
#define JHDMOFGOLCM_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB1AAD00)
#define JHDMOFGOLCM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB1AB180)

inline static constexpr unsigned int JHDMOFGOLCM_TypeDefinitionIndex = 53738;

	class JHDMOFGOLCM : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RtBehaviorFlag, ::GKMKOMHLGDC*>* GGDIPNLJGBB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Int32 EGFCFCBHJJP(::RPG::GameCore::RtBehaviorFlag a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void AALCFBOGFKP(::RPG::GameCore::RtBehaviorFlag a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::System::Int32))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_AALCFBOGFKP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::RPG::GameCore::RtBehaviorFlag a1, ::System::Int32 a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::System::Int32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_PAGKOAEOLKA_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::FixPoint BGCBDDBJCEL(::RPG::GameCore::RtBehaviorFlag a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_BGCBDDBJCEL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CHGHBOEABAK(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_CHGHBOEABAK_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint EPCBMBHBION(::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtBehaviorFlag>*, ::System::Collections::Generic::List_1<::RPG::GameCore::RtBehaviorFlag>*))((::PBYTE)hIl2Cpp + JHDMOFGOLCM_EPCBMBHBION_OFFSET))(this, a1, a2);
		}

	};
