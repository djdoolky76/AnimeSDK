#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MCONJOMJABJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKPFDNANCLC_KJHAOJMLIBL_ALMAFALMMNB_OFFSET UNITYSDK_OFFSET(0x10F3C710)
#define EKPFDNANCLC_KJHAOJMLIBL_BCJHLKEPHCP_OFFSET UNITYSDK_OFFSET(0x10F3C700)
#define EKPFDNANCLC_KJHAOJMLIBL_GMFJPLNCEDJ_OFFSET UNITYSDK_OFFSET(0x10F3C6F0)
#define EKPFDNANCLC_KJHAOJMLIBL_PODMBPJDDIG_OFFSET UNITYSDK_OFFSET(0x10F3C6E0)
#define EKPFDNANCLC_KJHAOJMLIBL__CTOR_OFFSET UNITYSDK_OFFSET(0x10F3C6D0)

inline static constexpr unsigned int EKPFDNANCLC_KJHAOJMLIBL_TypeDefinitionIndex = 73132;

class EKPFDNANCLC_KJHAOJMLIBL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MCONJOMJABJ*>* JJBAHJNJPEL; // 0x10
	::System::Action* GGICCKBFILE; // 0x18
	::System::Action* LDDCKKNAKJJ; // 0x20
	::System::Action* FFMGICPLKFB; // 0x28
	::System::Action* KAKAEMACNPB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_KJHAOJMLIBL__CTOR_OFFSET))(this);
	}

	::System::Void PODMBPJDDIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_KJHAOJMLIBL_PODMBPJDDIG_OFFSET))(this);
	}

	::System::Void GMFJPLNCEDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_KJHAOJMLIBL_GMFJPLNCEDJ_OFFSET))(this);
	}

	::System::Void BCJHLKEPHCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_KJHAOJMLIBL_BCJHLKEPHCP_OFFSET))(this);
	}

	::System::Void ALMAFALMMNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKPFDNANCLC_KJHAOJMLIBL_ALMAFALMMNB_OFFSET))(this);
	}
};
