#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

class ABDFIKDIDJO;
class FAMLNPCANNH;
class POHOEABNNII_BEGGPFHBKLP;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define POHOEABNNII_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1C2C6790)
#define POHOEABNNII_CPDFFBJEOAE_OFFSET UNITYSDK_OFFSET(0x1C2C66F0)
#define POHOEABNNII_GPFIKOIHAKA_OFFSET UNITYSDK_OFFSET(0x1C2C6B70)
#define POHOEABNNII_GPLDMNKMJAC_OFFSET UNITYSDK_OFFSET(0x1C2C6860)
#define POHOEABNNII_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1C2C6800)
#define POHOEABNNII_PMGIMBFCDNO_OFFSET UNITYSDK_OFFSET(0x1C2C6AE0)
#define POHOEABNNII__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C6510)

inline static constexpr unsigned int POHOEABNNII_TypeDefinitionIndex = 39370;

class POHOEABNNII : public ::System::Object
{
public:
	::POHOEABNNII_BEGGPFHBKLP* GPBMDLGOMEH; // 0x10
	::UnityEngine::Vector3 EDEFLFIKNFK; // 0x18
	::System::Int32 OCHMGPAHBHL; // 0x24
	::System::Single LNHKKJAHEFN; // 0x28
	::System::UInt32 FCMPFOAJJIB; // 0x2C
	::System::UInt32 IOMPEGPDBHB; // 0x30
	::UnityEngine::Vector3 BFDGJMPKGGC; // 0x34

	::System::Void _ctor(::ABDFIKDIDJO* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::ABDFIKDIDJO*))((::PBYTE)hIl2Cpp + POHOEABNNII__CTOR_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Int32 CompareTo(::POHOEABNNII* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::POHOEABNNII*))((::PBYTE)hIl2Cpp + POHOEABNNII_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}

	static ::POHOEABNNII_BEGGPFHBKLP* CPDFFBJEOAE(::ABDFIKDIDJO* HMMMOCJAEOA)
	{
		return ((::POHOEABNNII_BEGGPFHBKLP*(*)(::ABDFIKDIDJO*))((::PBYTE)hIl2Cpp + POHOEABNNII_CPDFFBJEOAE_OFFSET))(HMMMOCJAEOA);
	}

	::System::Collections::Generic::List_1<::FAMLNPCANNH*>* PKOGNPKCHHE(::System::Int32 APNFJMEDBFA)
	{
		return ((::System::Collections::Generic::List_1<::FAMLNPCANNH*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + POHOEABNNII_PKOGNPKCHHE_OFFSET))(this, APNFJMEDBFA);
	}

	::UnityEngine::Vector3 GPLDMNKMJAC(::UnityEngine::Vector2 BOGPAHGJOJK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + POHOEABNNII_GPLDMNKMJAC_OFFSET))(this, BOGPAHGJOJK);
	}

	::System::Boolean PMGIMBFCDNO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + POHOEABNNII_PMGIMBFCDNO_OFFSET))(this);
	}

	::FAMLNPCANNH* GPFIKOIHAKA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector2 BOGPAHGJOJK)
	{
		return ((::FAMLNPCANNH*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + POHOEABNNII_GPFIKOIHAKA_OFFSET))(this, KECKGDFIALJ, BOGPAHGJOJK);
	}
};
