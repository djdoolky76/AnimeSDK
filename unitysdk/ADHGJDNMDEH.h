#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
class MJNGFEGNCOA;
class MNAADIBENLC;
namespace RPG::GameCore { class RtSubModifierData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADHGJDNMDEH_CTOR_OFFSET UNITYSDK_OFFSET(0xB13A510)
#define ADHGJDNMDEH_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB139CB0)
#define ADHGJDNMDEH_GPDEMGABCPC_OFFSET UNITYSDK_OFFSET(0xB13A260)
#define ADHGJDNMDEH_HEEMFOBOMIP_OFFSET UNITYSDK_OFFSET(0xB139D40)
#define ADHGJDNMDEH_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0xB13A460)
#define ADHGJDNMDEH_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB139CF0)

inline static constexpr unsigned int ADHGJDNMDEH_TypeDefinitionIndex = 53769;

	class ADHGJDNMDEH : public ::GJPFGOGOLBI
	{
	public:
		::System::Collections::Generic::List_1<::MNAADIBENLC*>* CEJKNGMMIAJ; // 0x18
		::System::Boolean IAMCONEKFEG; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void HEEMFOBOMIP(::Il2CppArray<::RPG::GameCore::RtSubModifierData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::RtSubModifierData*>*))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_HEEMFOBOMIP_OFFSET))(this, a1);
		}

		::System::Void KCKGCEBBCIE(::MJNGFEGNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MJNGFEGNCOA*))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void GPDEMGABCPC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHGJDNMDEH_GPDEMGABCPC_OFFSET))(this, a1);
		}

	};
