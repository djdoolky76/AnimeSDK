#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMAHKOIBIHG.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
template <typename T> class CLPDOHBKKPO_1;

#define BPCCBOLOGJM_AAEHNFDCEIC_1_OFFSET UNITYSDK_OFFSET(0x11404020)
#define BPCCBOLOGJM_AAEHNFDCEIC_OFFSET UNITYSDK_OFFSET(0x114040D0)
#define BPCCBOLOGJM_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x11404170)
#define BPCCBOLOGJM_BLILCIGLMMG_1_OFFSET UNITYSDK_OFFSET(0x11403F80)
#define BPCCBOLOGJM_BLILCIGLMMG_OFFSET UNITYSDK_OFFSET(0x11403ED0)
#define BPCCBOLOGJM_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x11403880)
#define BPCCBOLOGJM_JMDEKPONKMF_1_OFFSET UNITYSDK_OFFSET(0x11404240)
#define BPCCBOLOGJM_JMDEKPONKMF_OFFSET UNITYSDK_OFFSET(0x114041E0)
#define BPCCBOLOGJM_LDLEDLAHMJH_1_OFFSET UNITYSDK_OFFSET(0x11403D80)
#define BPCCBOLOGJM_LDLEDLAHMJH_OFFSET UNITYSDK_OFFSET(0x11403E30)
#define BPCCBOLOGJM__CTOR_OFFSET UNITYSDK_OFFSET(0x114041C0)

inline static constexpr unsigned int BPCCBOLOGJM_TypeDefinitionIndex = 68753;

class BPCCBOLOGJM
{
public:
	::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* JAMFCIKKILO; // 0x10
	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* GEKCCKPPPAA; // 0x18
	::CLPDOHBKKPO_1<::MoleMole::Battle::Entity*>* CPPFBFDDGBP; // 0x20
	::MMAHKOIBIHG FNLGDLHAEGD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* JLIMOLHLFAK(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* HLFFCMIFFIB)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_JLIMOLHLFAK_OFFSET))(this, HLFFCMIFFIB);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_BEFORERECYCLE_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* AAEHNFDCEIC(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_AAEHNFDCEIC_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LDLEDLAHMJH(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_LDLEDLAHMJH_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH);
	}

	::System::Void JMDEKPONKMF(::MMAHKOIBIHG OBNIAHNMHPF, ::CLPDOHBKKPO_1<::MoleMole::Battle::Entity*>* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::MMAHKOIBIHG, ::CLPDOHBKKPO_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_JMDEKPONKMF_OFFSET))(this, OBNIAHNMHPF, LIBPKNHDIGP);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* AAEHNFDCEIC_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* NCLBCBEEHIP)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_AAEHNFDCEIC_1_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH, NCLBCBEEHIP);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LDLEDLAHMJH_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* NCLBCBEEHIP)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_LDLEDLAHMJH_1_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH, NCLBCBEEHIP);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* BLILCIGLMMG(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* NCLBCBEEHIP)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_BLILCIGLMMG_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH, NCLBCBEEHIP);
	}

	static ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* BLILCIGLMMG_1(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LCDLAKOLLJJ, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LBOICOIDEIH)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*(*)(::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_BLILCIGLMMG_1_OFFSET))(LCDLAKOLLJJ, LBOICOIDEIH);
	}

	::System::Void JMDEKPONKMF_1(::MMAHKOIBIHG OBNIAHNMHPF, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>* LIBPKNHDIGP, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>* NCLBCBEEHIP)
	{
		return ((::System::Void(*)(::PVOID, ::MMAHKOIBIHG, ::System::Collections::Generic::IEnumerable_1<::MoleMole::Battle::Entity*>*, ::System::Collections::Generic::IEqualityComparer_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + BPCCBOLOGJM_JMDEKPONKMF_1_OFFSET))(this, OBNIAHNMHPF, LIBPKNHDIGP, NCLBCBEEHIP);
	}
};
