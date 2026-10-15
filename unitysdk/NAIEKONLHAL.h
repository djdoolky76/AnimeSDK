#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAIEKONLHAL;
namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAIEKONLHAL_ABGELBMDOPK_OFFSET UNITYSDK_OFFSET(0xBA9C400)
#define NAIEKONLHAL_ABKKJIBEBHA_OFFSET UNITYSDK_OFFSET(0xBA9BEE0)
#define NAIEKONLHAL_AJFBJNKGLNF_OFFSET UNITYSDK_OFFSET(0xBA9C010)
#define NAIEKONLHAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0xBA9BC00)
#define NAIEKONLHAL_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9BB50)
#define NAIEKONLHAL_EGFCFCBHJJP_1_OFFSET UNITYSDK_OFFSET(0xBA9BD60)
#define NAIEKONLHAL_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0xBA9BCA0)
#define NAIEKONLHAL_GNNPFBBMFLA_OFFSET UNITYSDK_OFFSET(0xBA9BC40)
#define NAIEKONLHAL_IJGPNDPBCOB_OFFSET UNITYSDK_OFFSET(0xBA9C080)
#define NAIEKONLHAL_JMJPLGOAHNJ_OFFSET UNITYSDK_OFFSET(0xBA9BE00)
#define NAIEKONLHAL_MDBAPAOKMDI_OFFSET UNITYSDK_OFFSET(0xBA9C220)
#define NAIEKONLHAL_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xBA9BF70)
#define NAIEKONLHAL_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBA9C190)

inline static constexpr unsigned int NAIEKONLHAL_TypeDefinitionIndex = 62489;

	class NAIEKONLHAL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* CJBNIHFABBJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + NAIEKONLHAL_CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean GNNPFBBMFLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_GNNPFBBMFLA_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NAIEKONLHAL_EGFCFCBHJJP_OFFSET))(this, a1, a2);
		}

		::System::Void EGFCFCBHJJP_1(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + NAIEKONLHAL_EGFCFCBHJJP_1_OFFSET))(this, a1);
		}

		::System::Void JMJPLGOAHNJ(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + NAIEKONLHAL_JMJPLGOAHNJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 ABKKJIBEBHA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAIEKONLHAL_ABKKJIBEBHA_OFFSET))(this, a1);
		}

		::NAIEKONLHAL* NBHCPBBGAKA()
		{
			return ((::NAIEKONLHAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_NBHCPBBGAKA_OFFSET))(this);
		}

		::NAIEKONLHAL* AJFBJNKGLNF(::Il2CppArray<::RPG::GameCore::ItemConfig*>* a1)
		{
			return ((::NAIEKONLHAL*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + NAIEKONLHAL_AJFBJNKGLNF_OFFSET))(this, a1);
		}

		::System::Void IJGPNDPBCOB(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + NAIEKONLHAL_IJGPNDPBCOB_OFFSET))(this, a1);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_PJPFIHFAHGO_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* MDBAPAOKMDI()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_MDBAPAOKMDI_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>* ABGELBMDOPK()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAIEKONLHAL_ABGELBMDOPK_OFFSET))(this);
		}

	};
