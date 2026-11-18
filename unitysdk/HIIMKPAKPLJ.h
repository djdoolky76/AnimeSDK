#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"

class ILMMIICOAAG;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIIMKPAKPLJ_CKNJGNLKBKI_OFFSET UNITYSDK_OFFSET(0x17B01350)
#define HIIMKPAKPLJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x17B01200)
#define HIIMKPAKPLJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x17B014A0)
#define HIIMKPAKPLJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x17B01400)
#define HIIMKPAKPLJ_NHJLBLAFHCI_OFFSET UNITYSDK_OFFSET(0x17B01490)
#define HIIMKPAKPLJ_OAAMDNDHGJM_OFFSET UNITYSDK_OFFSET(0x17B01570)
#define HIIMKPAKPLJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x17B012D0)
#define HIIMKPAKPLJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B01250)
#define HIIMKPAKPLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17B01390)

inline static constexpr unsigned int HIIMKPAKPLJ_TypeDefinitionIndex = 56625;

class HIIMKPAKPLJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x231; // 0x0
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::RenderDataHandle>* PJEEEJAKHHM; // 0x58
	::ILMMIICOAAG* NEINEFGBDEG; // 0x60
	::System::Boolean OKGEGMHLDBB; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIIMKPAKPLJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_ONCLEAN_OFFSET))(this);
	}

	::System::Boolean CKNJGNLKBKI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_CKNJGNLKBKI_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Boolean NHJLBLAFHCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_NHJLBLAFHCI_OFFSET))(this);
	}

	static ::HIIMKPAKPLJ* JFDOOELFAOA()
	{
		return ((::HIIMKPAKPLJ*(*)())((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Void OAAMDNDHGJM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIIMKPAKPLJ_OAAMDNDHGJM_OFFSET))(this, EGEGIMGMJHN);
	}
};
