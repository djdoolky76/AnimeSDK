#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Proto { class ItemCost; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PNEBINMALON_BDGJJKBPDFM_OFFSET UNITYSDK_OFFSET(0x184ABCD0)
#define PNEBINMALON_CTOR_OFFSET UNITYSDK_OFFSET(0x184ABD60)
#define PNEBINMALON_DBIIFCJLKPA_OFFSET UNITYSDK_OFFSET(0x184ABD20)
#define PNEBINMALON_EBMEEININOL_OFFSET UNITYSDK_OFFSET(0x184ABA50)
#define PNEBINMALON_JLENBLILLFB_OFFSET UNITYSDK_OFFSET(0x184ABC80)
#define PNEBINMALON_KEMINDDIEMH_OFFSET UNITYSDK_OFFSET(0x184AB830)
#define PNEBINMALON_OHLBBCBKLHN_OFFSET UNITYSDK_OFFSET(0x184ABB90)
#define PNEBINMALON_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x184AB7C0)

inline static constexpr unsigned int PNEBINMALON_TypeDefinitionIndex = 67626;

	class PNEBINMALON : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Proto::ItemCost*>* FIEMGMJAOBM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEBINMALON_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEBINMALON_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void KEMINDDIEMH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEBINMALON_KEMINDDIEMH_OFFSET))(this, a1, a2);
		}

		::System::UInt32 EBMEEININOL(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEBINMALON_EBMEEININOL_OFFSET))(this, a1);
		}

		::System::UInt32 OHLBBCBKLHN(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNEBINMALON_OHLBBCBKLHN_OFFSET))(this, a1);
		}

		::System::Void JLENBLILLFB(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNEBINMALON_JLENBLILLFB_OFFSET))(this, a1);
		}

		::System::Void BDGJJKBPDFM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + PNEBINMALON_BDGJJKBPDFM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Proto::ItemCost*>* DBIIFCJLKPA()
		{
			return ((::System::Collections::Generic::List_1<::Proto::ItemCost*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNEBINMALON_DBIIFCJLKPA_OFFSET))(this);
		}

	};
