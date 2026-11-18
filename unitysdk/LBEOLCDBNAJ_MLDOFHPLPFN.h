#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABGMNCCINDG.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class EKHEOJOFLLA;
class EMDBEPNHFOD;
class LBEOLCDBNAJ;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }

#define LBEOLCDBNAJ_MLDOFHPLPFN_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1517D170)
#define LBEOLCDBNAJ_MLDOFHPLPFN_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1517D080)
#define LBEOLCDBNAJ_MLDOFHPLPFN__CTOR_OFFSET UNITYSDK_OFFSET(0x1517D070)

inline static constexpr unsigned int LBEOLCDBNAJ_MLDOFHPLPFN_TypeDefinitionIndex = 58505;

class LBEOLCDBNAJ_MLDOFHPLPFN : public ::System::Object
{
public:
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* DLMJCFBENGB; // 0x10
	::UnityEngine::GameObject* DHMCDBJGPEN; // 0x18
	::EMDBEPNHFOD* CIHJGBBKMIH; // 0x20
	::HOCDHMEPPEG LEHJGCEIMCF; // 0x28
	::ABGMNCCINDG PHHDHIBOCKA; // 0x58
	::LBEOLCDBNAJ* KLHPEBKNIFB; // 0x80
	::System::Int32 MHMIBPMIGLG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_MLDOFHPLPFN__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_MLDOFHPLPFN_LIDNPLMPHAL_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void AAHMACBDCPN(::Foundation::ViewObject::ViewObjectHandle IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + LBEOLCDBNAJ_MLDOFHPLPFN_AAHMACBDCPN_OFFSET))(this, IGAAKDOIPNN);
	}
};
