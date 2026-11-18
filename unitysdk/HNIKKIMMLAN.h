#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPNKPNDELEN.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
class KOIDMLPJGML;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define HNIKKIMMLAN_AGLNDMPODCH_OFFSET UNITYSDK_OFFSET(0x101230E0)
#define HNIKKIMMLAN_AMABEFBJFAA_OFFSET UNITYSDK_OFFSET(0x10123B10)
#define HNIKKIMMLAN_EHEKAHIIGEH_OFFSET UNITYSDK_OFFSET(0x10123670)
#define HNIKKIMMLAN_EJGAIMLGDPO_OFFSET UNITYSDK_OFFSET(0x10123D90)
#define HNIKKIMMLAN_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x101227C0)
#define HNIKKIMMLAN_FAABAIEHAMP_OFFSET UNITYSDK_OFFSET(0x101236C0)
#define HNIKKIMMLAN_GCGOEOMCICE_OFFSET UNITYSDK_OFFSET(0x10123DE0)
#define HNIKKIMMLAN_HPPLBNIKOLN_OFFSET UNITYSDK_OFFSET(0x10123050)
#define HNIKKIMMLAN_KPHHMFNGOAM_OFFSET UNITYSDK_OFFSET(0x10123BB0)
#define HNIKKIMMLAN_NOIDOODDKJB_OFFSET UNITYSDK_OFFSET(0x10123830)
#define HNIKKIMMLAN__CTOR_OFFSET UNITYSDK_OFFSET(0x10122F70)

inline static constexpr unsigned int HNIKKIMMLAN_TypeDefinitionIndex = 55077;

class HNIKKIMMLAN
{
public:
	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* CEFPHCMFPKA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Boolean HPPLBNIKOLN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_HPPLBNIKOLN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::KOIDMLPJGML*>* AGLNDMPODCH(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* KHGFAKJKDGG, ::DPNKPNDELEN DIBELCGJBOP)
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*, ::DPNKPNDELEN))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_AGLNDMPODCH_OFFSET))(this, KHGFAKJKDGG, DIBELCGJBOP);
	}

	::UnityEngine::Events::UnityAction* EHEKAHIIGEH()
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_EHEKAHIIGEH_OFFSET))(this);
	}

	::System::Boolean FAABAIEHAMP(::System::Collections::Generic::List_1<::KOIDMLPJGML*>* DJLOKMMLFJC, ::System::Int32 KKGGACLGGPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::KOIDMLPJGML*>*, ::System::Int32))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_FAABAIEHAMP_OFFSET))(this, DJLOKMMLFJC, KKGGACLGGPN);
	}

	::System::Void NOIDOODDKJB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_NOIDOODDKJB_OFFSET))(this);
	}

	::System::String* AMABEFBJFAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_AMABEFBJFAA_OFFSET))(this);
	}

	::System::Boolean KPHHMFNGOAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_KPHHMFNGOAM_OFFSET))(this);
	}

	::System::Void EJGAIMLGDPO(::LIBOIKJGAIH& MIALFKCCCPI, ::IOOIHHOJOPI* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_EJGAIMLGDPO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean GCGOEOMCICE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIKKIMMLAN_GCGOEOMCICE_OFFSET))(this);
	}
};
