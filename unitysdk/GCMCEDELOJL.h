#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightConsumableInfo; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace RPG::Client { class GridFightEquipItemData; }
namespace RPG::Client { class GridFightPlayer; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTeam; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }

#define GCMCEDELOJL_CJNMJGBBEBJ_OFFSET UNITYSDK_OFFSET(0x15983D70)
#define GCMCEDELOJL_CTOR_OFFSET UNITYSDK_OFFSET(0x15983BD0)
#define GCMCEDELOJL_DHBIGLBAOLL_OFFSET UNITYSDK_OFFSET(0x15983CB0)
#define GCMCEDELOJL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15983BF0)
#define GCMCEDELOJL_DPKEGFLCJJD_OFFSET UNITYSDK_OFFSET(0x15984170)
#define GCMCEDELOJL_FDNIBLLLABJ_OFFSET UNITYSDK_OFFSET(0x15984020)
#define GCMCEDELOJL_GET_CONSUMABLEINFO_OFFSET UNITYSDK_OFFSET(0x15984250)
#define GCMCEDELOJL_KHIMBJGONFJ_OFFSET UNITYSDK_OFFSET(0x15983F30)
#define GCMCEDELOJL_KOPCKKNNJLF_OFFSET UNITYSDK_OFFSET(0x15983E80)
#define GCMCEDELOJL_LECFPKJPCLP_OFFSET UNITYSDK_OFFSET(0x15983D20)
#define GCMCEDELOJL_NENFFHDGOLI_OFFSET UNITYSDK_OFFSET(0x15983C40)
#define GCMCEDELOJL_PDFEJLKGFLN_OFFSET UNITYSDK_OFFSET(0x159841F0)
#define GCMCEDELOJL_PGPKCDBDFLA_OFFSET UNITYSDK_OFFSET(0x15984080)

inline static constexpr unsigned int GCMCEDELOJL_TypeDefinitionIndex = 65319;

	class GCMCEDELOJL : public ::System::Object
	{
	public:
		::RPG::Client::GridFightConsumableInfo* _ConsumableInfo_k__BackingField; // 0x10
		::RPG::Client::GridFightPlayer* CMNJDMKPPIA; // 0x18
		::RPG::Client::GridFightEquipInfo* NCHCLADAFBP; // 0x20
		::RPG::Client::GridFightTeam* GJHCMKBNING; // 0x28
		::System::Action_2<::System::Object*, ::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>* EMLDHINHNHP; // 0x30
		::System::Void _ctor(::RPG::Client::GridFightTeam* a1, ::RPG::Client::GridFightPlayer* a2, ::RPG::Client::GridFightEquipInfo* a3, ::RPG::Client::GridFightConsumableInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTeam*, ::RPG::Client::GridFightPlayer*, ::RPG::Client::GridFightEquipInfo*, ::RPG::Client::GridFightConsumableInfo*))((::PBYTE)hIl2Cpp + GCMCEDELOJL_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMCEDELOJL_DISPOSE_OFFSET))(this);
		}

		::System::Void NENFFHDGOLI(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + GCMCEDELOJL_NENFFHDGOLI_OFFSET))(this, a1);
		}

		::System::Void DHBIGLBAOLL(::System::Collections::Specialized::NotifyCollectionChangedEventHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Specialized::NotifyCollectionChangedEventHandler*))((::PBYTE)hIl2Cpp + GCMCEDELOJL_DHBIGLBAOLL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* LECFPKJPCLP()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMCEDELOJL_LECFPKJPCLP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>* CJNMJGBBEBJ(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightRole*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_CJNMJGBBEBJ_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* KOPCKKNNJLF(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_KOPCKKNNJLF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>* KHIMBJGONFJ(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipItemData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_KHIMBJGONFJ_OFFSET))(this, a1);
		}

		::System::Int32 FDNIBLLLABJ(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_FDNIBLLLABJ_OFFSET))(this, a1);
		}

		::System::Int32 PGPKCDBDFLA(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_PGPKCDBDFLA_OFFSET))(this, a1);
		}

		::System::Boolean DPKEGFLCJJD(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_DPKEGFLCJJD_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* PDFEJLKGFLN(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCMCEDELOJL_PDFEJLKGFLN_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightConsumableInfo* get_ConsumableInfo()
		{
			return ((::RPG::Client::GridFightConsumableInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMCEDELOJL_GET_CONSUMABLEINFO_OFFSET))(this);
		}

	};
