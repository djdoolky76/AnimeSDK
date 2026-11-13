#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace UnityEngine { class Collider; }

#define KPAAMDOGJFN_BEFNEBONOFO_OFFSET UNITYSDK_OFFSET(0x1910FC50)
#define KPAAMDOGJFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1910DD80)
#define KPAAMDOGJFN_DCFDNPFGLIF_OFFSET UNITYSDK_OFFSET(0x1910F790)
#define KPAAMDOGJFN_DFKJEOBOJLO_OFFSET UNITYSDK_OFFSET(0x1910EA50)
#define KPAAMDOGJFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1910EA00)
#define KPAAMDOGJFN_IGKLOJELKEF_OFFSET UNITYSDK_OFFSET(0x1910F510)
#define KPAAMDOGJFN_IJPJHLENKII_OFFSET UNITYSDK_OFFSET(0x1910E1B0)
#define KPAAMDOGJFN_IKLCDOCDCKP_OFFSET UNITYSDK_OFFSET(0x1910FDB0)
#define KPAAMDOGJFN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1910DF90)
#define KPAAMDOGJFN_JJAJADEMLEG_OFFSET UNITYSDK_OFFSET(0x19110EA0)
#define KPAAMDOGJFN_KANDOCBBCOP_OFFSET UNITYSDK_OFFSET(0x191106A0)
#define KPAAMDOGJFN_KFENBJHDLIC_OFFSET UNITYSDK_OFFSET(0x1910EDC0)
#define KPAAMDOGJFN_KGHFAILKPJD_OFFSET UNITYSDK_OFFSET(0x1910F9A0)
#define KPAAMDOGJFN_LBIKBGOPIHA_OFFSET UNITYSDK_OFFSET(0x191109E0)
#define KPAAMDOGJFN_LNLPPEGCLDB_OFFSET UNITYSDK_OFFSET(0x1910E350)
#define KPAAMDOGJFN_NLDGFMEIAKN_OFFSET UNITYSDK_OFFSET(0x1910F260)
#define KPAAMDOGJFN_PFFPFGNPDPI_OFFSET UNITYSDK_OFFSET(0x1910F490)
#define KPAAMDOGJFN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1910F120)

inline static constexpr unsigned int KPAAMDOGJFN_TypeDefinitionIndex = 79466;

	class KPAAMDOGJFN : public ::System::Object
	{
	public:
		::Entitas::ICollector_1<::HIOEAKHGILF*>* FCGCJBMLILM; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::IGroup_1<::HIOEAKHGILF*>* FJILKFNCJCB; // 0x28
		::Entitas::IGroup_1<::HIOEAKHGILF*>* HENMILPNEGE; // 0x30
		::System::Single LHNEAMBKIHP; // 0x38
		// static const ::System::String* APFNACDNGNI; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_TEARDOWN_OFFSET))(this);
		}

		::System::Void DFKJEOBOJLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_DFKJEOBOJLO_OFFSET))(this);
		}

		::System::Void LNLPPEGCLDB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_LNLPPEGCLDB_OFFSET))(this, a1);
		}

		::System::Void NLDGFMEIAKN(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_NLDGFMEIAKN_OFFSET))(this, a1, a2);
		}

		::System::Void IGKLOJELKEF(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_IGKLOJELKEF_OFFSET))(this, a1, a2);
		}

		::System::Boolean DCFDNPFGLIF(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_DCFDNPFGLIF_OFFSET))(this, a1, a2);
		}

		::System::Boolean IKLCDOCDCKP(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_IKLCDOCDCKP_OFFSET))(this, a1, a2);
		}

		::System::Boolean KANDOCBBCOP(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_KANDOCBBCOP_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BEFNEBONOFO(::HIOEAKHGILF* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_BEFNEBONOFO_OFFSET))(this, a1);
		}

		::System::Void LBIKBGOPIHA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_LBIKBGOPIHA_OFFSET))(this, a1);
		}

		::System::Void KFENBJHDLIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_KFENBJHDLIC_OFFSET))(this);
		}

		::System::Void PFFPFGNPDPI(::HIOEAKHGILF* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_PFFPFGNPDPI_OFFSET))(this, a1, a2);
		}

		::System::Void KGHFAILKPJD(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_KGHFAILKPJD_OFFSET))(this, a1, a2);
		}

		::System::Void JJAJADEMLEG(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_JJAJADEMLEG_OFFSET))(this, a1);
		}

		::System::Void IJPJHLENKII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPAAMDOGJFN_IJPJHLENKII_OFFSET))(this);
		}

	};
