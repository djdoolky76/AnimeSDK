#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBFNHHEBGAI;
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCOLILMNDHE_AAGDDGGALHE_OFFSET UNITYSDK_OFFSET(0xC67A9C0)
#define OCOLILMNDHE_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC67A940)
#define OCOLILMNDHE_CTOR_OFFSET UNITYSDK_OFFSET(0xC67A7F0)
#define OCOLILMNDHE_KLDPIEICGEA_OFFSET UNITYSDK_OFFSET(0xC67A860)
#define OCOLILMNDHE_NLEDGAMJKMG_OFFSET UNITYSDK_OFFSET(0xC67AE90)

inline static constexpr unsigned int OCOLILMNDHE_TypeDefinitionIndex = 66543;

	class OCOLILMNDHE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::PBFNHHEBGAI*>* KHFJFEMKMAD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOLILMNDHE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::PBFNHHEBGAI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PBFNHHEBGAI*>*))((::PBYTE)hIl2Cpp + OCOLILMNDHE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void KLDPIEICGEA(::PBFNHHEBGAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBFNHHEBGAI*))((::PBYTE)hIl2Cpp + OCOLILMNDHE_KLDPIEICGEA_OFFSET))(this, a1);
		}

		::System::Void AAGDDGGALHE(::System::Collections::Generic::IEnumerable_1<::PBFNHHEBGAI*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::PBFNHHEBGAI*>*))((::PBYTE)hIl2Cpp + OCOLILMNDHE_AAGDDGGALHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::String*>* NLEDGAMJKMG(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + OCOLILMNDHE_NLEDGAMJKMG_OFFSET))(this, a1);
		}

	};
