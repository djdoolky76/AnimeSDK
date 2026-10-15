#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EEBDFMJEMBM.h"
class IKMILKFENMG;
namespace RPG::Client::PixAir { class PixAirEquipItemChangeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IKMILKFENMG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1649B770)
#define IKMILKFENMG_CTOR_OFFSET UNITYSDK_OFFSET(0x1649B7F0)
#define IKMILKFENMG_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1649B800)

	class IKMILKFENMG : public ::EEBDFMJEMBM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMILKFENMG_CTOR_OFFSET))(this);
		}

		static ::IKMILKFENMG* BPLPBPMEODA(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>* a1)
		{
			return ((::IKMILKFENMG*(*)(::System::Collections::Generic::List_1<::RPG::Client::PixAir::PixAirEquipItemChangeInfo*>*))((::PBYTE)hIl2Cpp + IKMILKFENMG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKMILKFENMG_HKKFFCBJOKM_OFFSET))(this);
		}

	};
