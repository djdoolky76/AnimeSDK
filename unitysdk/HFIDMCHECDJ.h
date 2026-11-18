#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole { class MonoPartySceneObject; }

#define HFIDMCHECDJ_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x19E0BA30)
#define HFIDMCHECDJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19E0B840)
#define HFIDMCHECDJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19E0B9B0)
#define HFIDMCHECDJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x19E0B920)
#define HFIDMCHECDJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19E0B7F0)
#define HFIDMCHECDJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E0B890)
#define HFIDMCHECDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0B910)

inline static constexpr unsigned int HFIDMCHECDJ_TypeDefinitionIndex = 51666;

class HFIDMCHECDJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xB7; // 0x0
	::MoleMole::MonoPartySceneObject* NNKIKLCMJNI; // 0x48
	::System::UInt32 BHCMEECOBAK; // 0x50
	::System::Single PGMHIPJEJHN; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFIDMCHECDJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMCHECDJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMCHECDJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMCHECDJ_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFIDMCHECDJ_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::HFIDMCHECDJ* JFDOOELFAOA()
	{
		return ((::HFIDMCHECDJ*(*)())((::PBYTE)hIl2Cpp + HFIDMCHECDJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Void BBOMJDBNHIC(::MoleMole::MonoPartySceneObject* BFMBFEDIOIL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoPartySceneObject*))((::PBYTE)hIl2Cpp + HFIDMCHECDJ_BBOMJDBNHIC_OFFSET))(this, BFMBFEDIOIL);
	}
};
