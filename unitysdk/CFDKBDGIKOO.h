#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBCMHADMLOP.h"
class FFNCLDDJDCC;
class PAKHLIJNJNO;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFDKBDGIKOO_CTOR_OFFSET UNITYSDK_OFFSET(0xD375490)
#define CFDKBDGIKOO_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xD374F60)
#define CFDKBDGIKOO_EGOALAOKEFG_OFFSET UNITYSDK_OFFSET(0xD375270)
#define CFDKBDGIKOO_FLCOMPJDMLA_OFFSET UNITYSDK_OFFSET(0xD3753E0)
#define CFDKBDGIKOO_GET_NEEDLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD375480)
#define CFDKBDGIKOO_GET_NEEDTICK_OFFSET UNITYSDK_OFFSET(0xD375470)
#define CFDKBDGIKOO_LJFALNMCMOA_OFFSET UNITYSDK_OFFSET(0xD375190)
#define CFDKBDGIKOO_MDGGHPAMKFO_OFFSET UNITYSDK_OFFSET(0xD375300)
#define CFDKBDGIKOO_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xD374CC0)
#define CFDKBDGIKOO_TICK_OFFSET UNITYSDK_OFFSET(0xD374D60)

inline static constexpr unsigned int CFDKBDGIKOO_TypeDefinitionIndex = 59062;

	class CFDKBDGIKOO : public ::HBCMHADMLOP
	{
	public:
		::System::Collections::Generic::List_1<::FFNCLDDJDCC*>* FOKKPNBHEKN; // 0x20
		::System::Collections::Generic::List_1<::PAKHLIJNJNO*>* KJJDEKMOJBM; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_CTOR_OFFSET))(this);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_ONUNINIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_TICK_OFFSET))(this, a1);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Void LJFALNMCMOA(::FFNCLDDJDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFNCLDDJDCC*))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_LJFALNMCMOA_OFFSET))(this, a1);
		}

		::System::Void EGOALAOKEFG(::FFNCLDDJDCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFNCLDDJDCC*))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_EGOALAOKEFG_OFFSET))(this, a1);
		}

		::System::Void MDGGHPAMKFO(::PAKHLIJNJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAKHLIJNJNO*))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_MDGGHPAMKFO_OFFSET))(this, a1);
		}

		::System::Void FLCOMPJDMLA(::PAKHLIJNJNO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PAKHLIJNJNO*))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_FLCOMPJDMLA_OFFSET))(this, a1);
		}

		::System::Boolean get_NeedTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_GET_NEEDTICK_OFFSET))(this);
		}

		::System::Boolean get_NeedLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CFDKBDGIKOO_GET_NEEDLATEUPDATE_OFFSET))(this);
		}

	};
