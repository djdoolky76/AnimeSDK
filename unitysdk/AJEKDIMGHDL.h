#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJEKDIMGHDL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C88DA10)
#define AJEKDIMGHDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C88DAC0)
#define AJEKDIMGHDL_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C88D970)

	class AJEKDIMGHDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* NKCIMDHIBMO; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*>* DMNFNMPHFGE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKDIMGHDL_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKDIMGHDL_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEKDIMGHDL_CLEAR_OFFSET))(this);
		}

	};
