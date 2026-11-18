#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPNNGJALJHP;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DPNNGJALJHP_JGGCPGMEMMG_HIACKJLIDOI_OFFSET UNITYSDK_OFFSET(0x10F19230)
#define DPNNGJALJHP_JGGCPGMEMMG__CTOR_OFFSET UNITYSDK_OFFSET(0x10F19220)

inline static constexpr unsigned int DPNNGJALJHP_JGGCPGMEMMG_TypeDefinitionIndex = 55462;

class DPNNGJALJHP_JGGCPGMEMMG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Action*>* AIACPDEKIGJ; // 0x10
	::DPNNGJALJHP* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPNNGJALJHP_JGGCPGMEMMG__CTOR_OFFSET))(this);
	}

	::System::Void HIACKJLIDOI(::System::Action* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DPNNGJALJHP_JGGCPGMEMMG_HIACKJLIDOI_OFFSET))(this, GJBHEJGENMI);
	}
};
