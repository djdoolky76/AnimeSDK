#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TarotMailData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGHFNFCIFFH_CTOR_OFFSET UNITYSDK_OFFSET(0x159F8E80)
#define GGHFNFCIFFH_MAAHJCEHJDG_OFFSET UNITYSDK_OFFSET(0x159F9100)
#define GGHFNFCIFFH_MCICJIGBFLJ_OFFSET UNITYSDK_OFFSET(0x159F9000)
#define GGHFNFCIFFH_MJDEIPBNMOB_OFFSET UNITYSDK_OFFSET(0x159F8E30)

inline static constexpr unsigned int GGHFNFCIFFH_TypeDefinitionIndex = 68046;

	class GGHFNFCIFFH : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TarotMailData*>* MCLOFGADJDC; // 0x10
		::System::UInt32 HGKDEKECDAN; // 0x18
		::System::UInt32 PHFMCACHFIJ; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGHFNFCIFFH_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean MJDEIPBNMOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHFNFCIFFH_MJDEIPBNMOB_OFFSET))(this);
		}

		::System::Boolean MCICJIGBFLJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHFNFCIFFH_MCICJIGBFLJ_OFFSET))(this);
		}

		::System::Void MAAHJCEHJDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHFNFCIFFH_MAAHJCEHJDG_OFFSET))(this);
		}

	};
