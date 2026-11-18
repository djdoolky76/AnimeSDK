#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"
#include "unitysdk/NOMLOPBFHFD.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigFeatureTarget; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Transform; }

#define OAMAMDGEJKH_CCLCMGFFNLM_OFFSET UNITYSDK_OFFSET(0x13A43810)
#define OAMAMDGEJKH_CMAMLDCLNOF_OFFSET UNITYSDK_OFFSET(0x13A43AD0)
#define OAMAMDGEJKH_FCFCMHJPLFI_OFFSET UNITYSDK_OFFSET(0x13A43830)
#define OAMAMDGEJKH_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x13A431F0)
#define OAMAMDGEJKH_HIEJHCPNPJA_OFFSET UNITYSDK_OFFSET(0x13A44200)
#define OAMAMDGEJKH_IBAOCOGCGAH_OFFSET UNITYSDK_OFFSET(0x13A43820)
#define OAMAMDGEJKH_IGHBCBHJOHI_OFFSET UNITYSDK_OFFSET(0x13A43510)
#define OAMAMDGEJKH_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x13A44220)
#define OAMAMDGEJKH_KLCPEHNBBNO_OFFSET UNITYSDK_OFFSET(0x13A43D10)
#define OAMAMDGEJKH_LBCBPEJEHNB_OFFSET UNITYSDK_OFFSET(0x13A42CB0)
#define OAMAMDGEJKH_LPFPMHEFKGO_OFFSET UNITYSDK_OFFSET(0x13A436D0)
#define OAMAMDGEJKH_MCNADLFHADK_OFFSET UNITYSDK_OFFSET(0x13A43E10)
#define OAMAMDGEJKH_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13A433E0)
#define OAMAMDGEJKH_OLGLPNOCJMP_OFFSET UNITYSDK_OFFSET(0x13A44210)
#define OAMAMDGEJKH_PBLHNKJNBJE_OFFSET UNITYSDK_OFFSET(0x13A43840)
#define OAMAMDGEJKH_PGALFPNDMLD_OFFSET UNITYSDK_OFFSET(0x13A433A0)
#define OAMAMDGEJKH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A43490)
#define OAMAMDGEJKH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A42890)
#define OAMAMDGEJKH__CTOR_OFFSET UNITYSDK_OFFSET(0x13A42800)

inline static constexpr unsigned int OAMAMDGEJKH_TypeDefinitionIndex = 67604;

class OAMAMDGEJKH : public ::System::Object
{
public:
	static ::MoleMole::ConfigFeatureTarget** StaticGet_CALMCOJBECJ()
	{
		return (::MoleMole::ConfigFeatureTarget**)Il2CppClass::FromTypeDefinitionIndex(OAMAMDGEJKH_TypeDefinitionIndex)->GetStaticField(0x4B170);
	}
	static ::MoleMole::GameplayTag* StaticGet_MMOLCPJBBHF()
	{
		return (::MoleMole::GameplayTag*)Il2CppClass::FromTypeDefinitionIndex(OAMAMDGEJKH_TypeDefinitionIndex)->GetStaticField(0x4B178);
	}
	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* GDFMOBPOBAJ; // 0x10
	::MoleMole::Battle::Entity* _KOLPBICLIPC_k__BackingField; // 0x18
	::MoleMole::ConfigFeatureTarget* DCHMBODEKBN; // 0x20
	::UnityEngine::Transform* JNLBPMKIFNK; // 0x28
	::System::Collections::Generic::Dictionary_2<::NOMLOPBFHFD, ::System::String*>* MGLAOBLMDPM; // 0x30
	::System::Boolean MMHNDIKDCHL; // 0x38
	::System::Boolean PNFLIAAKFDF; // 0x39

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::MoleMole::ConfigFeatureTarget* DFMKILICPFB, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Transform* GCHCDMJHCNN, ::System::Boolean NBOEENJLNFK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigFeatureTarget*, ::MoleMole::Battle::Entity*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAMAMDGEJKH__CTOR_1_OFFSET))(this, DFMKILICPFB, KECKGDFIALJ, GCHCDMJHCNN, NBOEENJLNFK);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAMAMDGEJKH__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 LBCBPEJEHNB()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_LBCBPEJEHNB_OFFSET))(this);
	}

	::System::Void PGALFPNDMLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_PGALFPNDMLD_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_FFCPIEDHBDP_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void IGHBCBHJOHI(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 MMACFIBKOEP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_IGHBCBHJOHI_OFFSET))(this, OHOGDOMNHNK, MMACFIBKOEP);
	}

	::System::Boolean LPFPMHEFKGO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_LPFPMHEFKGO_OFFSET))(this);
	}

	::System::Void CCLCMGFFNLM(::MoleMole::Battle::Entity* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_CCLCMGFFNLM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean IBAOCOGCGAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_IBAOCOGCGAH_OFFSET))(this);
	}

	::System::Boolean FCFCMHJPLFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_FCFCMHJPLFI_OFFSET))(this);
	}

	::System::Void PBLHNKJNBJE(::System::String* AELLPLBJELA, ::System::Boolean BDHNGDNEJEM)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_PBLHNKJNBJE_OFFSET))(this, AELLPLBJELA, BDHNGDNEJEM);
	}

	::System::Void KLCPEHNBBNO(::System::String* AELLPLBJELA, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_KLCPEHNBBNO_OFFSET))(this, AELLPLBJELA, EGEGIMGMJHN);
	}

	::UnityEngine::Transform* MCNADLFHADK()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_MCNADLFHADK_OFFSET))(this);
	}

	::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>* HIEJHCPNPJA()
	{
		return ((::System::Collections::Generic::LinkedList_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_HIEJHCPNPJA_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* OLGLPNOCJMP()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_OLGLPNOCJMP_OFFSET))(this);
	}

	::System::Void CMAMLDCLNOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_CMAMLDCLNOF_OFFSET))(this);
	}

	::UnityEngine::Quaternion INMGLPLEEIK()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + OAMAMDGEJKH_INMGLPLEEIK_OFFSET))(this);
	}
};
