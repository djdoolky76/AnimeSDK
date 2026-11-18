#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define LGOGPAPPJJP_OHNOAOPLEGP_AOPGPMDDDDI_OFFSET UNITYSDK_OFFSET(0x15250E80)
#define LGOGPAPPJJP_OHNOAOPLEGP_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x15250A00)
#define LGOGPAPPJJP_OHNOAOPLEGP_DNDCGMIBNPD_OFFSET UNITYSDK_OFFSET(0x152518D0)
#define LGOGPAPPJJP_OHNOAOPLEGP_DPIHOKBFMDP_OFFSET UNITYSDK_OFFSET(0x152515E0)
#define LGOGPAPPJJP_OHNOAOPLEGP_FJIGJJFGEDE_OFFSET UNITYSDK_OFFSET(0x15251130)
#define LGOGPAPPJJP_OHNOAOPLEGP_HHJNAIPFBKL_OFFSET UNITYSDK_OFFSET(0x15250DE0)
#define LGOGPAPPJJP_OHNOAOPLEGP_HOIJICBODBD_OFFSET UNITYSDK_OFFSET(0x15251930)
#define LGOGPAPPJJP_OHNOAOPLEGP_IAGGOLCJGHB_OFFSET UNITYSDK_OFFSET(0x15251460)
#define LGOGPAPPJJP_OHNOAOPLEGP_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x15251AC0)
#define LGOGPAPPJJP_OHNOAOPLEGP_MHICGAFDNNA_OFFSET UNITYSDK_OFFSET(0x15250E30)
#define LGOGPAPPJJP_OHNOAOPLEGP__CCTOR_OFFSET UNITYSDK_OFFSET(0x152509E0)
#define LGOGPAPPJJP_OHNOAOPLEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x15250970)

inline static constexpr unsigned int LGOGPAPPJJP_OHNOAOPLEGP_TypeDefinitionIndex = 90976;

class LGOGPAPPJJP_OHNOAOPLEGP : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_MOMHKPDCOMP()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(LGOGPAPPJJP_OHNOAOPLEGP_TypeDefinitionIndex)->GetStaticField(0x104C0);
	}
	::MoleMole::EntityHandle PBPNOPMHKAI; // 0x10
	::System::String* ABHACBINODB; // 0x20
	::System::Int32 EBJPIBPOIAO; // 0x28
	::System::Int32 CKEMHKEJKED; // 0x2C
	::System::Boolean KGGODNABONB; // 0x30
	::System::Boolean LBGCDHAFGFC; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP__CCTOR_OFFSET))();
	}

	::System::Void COKNIICCODC(::System::String* IDOPOGOMOBE, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_COKNIICCODC_OFFSET))(this, IDOPOGOMOBE, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	::System::Void MHICGAFDNNA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_MHICGAFDNNA_OFFSET))(this);
	}

	::System::Void FJIGJJFGEDE(::MoleMole::Battle::Entity* JMDHBJMNBCP, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 DOBFFIICAII, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_FJIGJJFGEDE_OFFSET))(this, JMDHBJMNBCP, GIAEPMKCBIB, DOBFFIICAII, JBCNPOHMGPE);
	}

	::System::Boolean IAGGOLCJGHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_IAGGOLCJGHB_OFFSET))(this);
	}

	::System::Void HHJNAIPFBKL(::System::String* IDOPOGOMOBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_HHJNAIPFBKL_OFFSET))(this, IDOPOGOMOBE);
	}

	::System::Void DPIHOKBFMDP(::MoleMole::Battle::Entity* JMDHBJMNBCP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_DPIHOKBFMDP_OFFSET))(this, JMDHBJMNBCP);
	}

	::System::Void DNDCGMIBNPD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_DNDCGMIBNPD_OFFSET))(this);
	}

	::System::Void HOIJICBODBD(::System::Boolean MBJDMKCGOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_HOIJICBODBD_OFFSET))(this, MBJDMKCGOCK);
	}

	::System::Void AOPGPMDDDDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_AOPGPMDDDDI_OFFSET))(this);
	}

	::System::Void JLIMOLHLFAK(::System::String* IDOPOGOMOBE, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE, ::System::Single KMKBJKOEBMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + LGOGPAPPJJP_OHNOAOPLEGP_JLIMOLHLFAK_OFFSET))(this, IDOPOGOMOBE, OHOGDOMNHNK, JBCNPOHMGPE, KMKBJKOEBMF);
	}
};
