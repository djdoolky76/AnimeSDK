#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace UnityEngine { class Collider; }

#define KPAAMDOGJFN_BEFNEBONOFO_OFFSET UNITYSDK_OFFSET(0xB5A6170)
#define KPAAMDOGJFN_CTOR_OFFSET UNITYSDK_OFFSET(0xB5A4280)
#define KPAAMDOGJFN_DCFDNPFGLIF_OFFSET UNITYSDK_OFFSET(0xB5A5C90)
#define KPAAMDOGJFN_DFKJEOBOJLO_OFFSET UNITYSDK_OFFSET(0xB5A4F50)
#define KPAAMDOGJFN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB5A4F00)
#define KPAAMDOGJFN_IGKLOJELKEF_OFFSET UNITYSDK_OFFSET(0xB5A5A10)
#define KPAAMDOGJFN_IJPJHLENKII_OFFSET UNITYSDK_OFFSET(0xB5A46B0)
#define KPAAMDOGJFN_IKLCDOCDCKP_OFFSET UNITYSDK_OFFSET(0xB5A62D0)
#define KPAAMDOGJFN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB5A4490)
#define KPAAMDOGJFN_JJAJADEMLEG_OFFSET UNITYSDK_OFFSET(0xB5A7400)
#define KPAAMDOGJFN_KANDOCBBCOP_OFFSET UNITYSDK_OFFSET(0xB5A6BE0)
#define KPAAMDOGJFN_KFENBJHDLIC_OFFSET UNITYSDK_OFFSET(0xB5A52C0)
#define KPAAMDOGJFN_KGHFAILKPJD_OFFSET UNITYSDK_OFFSET(0xB5A5EC0)
#define KPAAMDOGJFN_LBIKBGOPIHA_OFFSET UNITYSDK_OFFSET(0xB5A6F40)
#define KPAAMDOGJFN_LNLPPEGCLDB_OFFSET UNITYSDK_OFFSET(0xB5A4850)
#define KPAAMDOGJFN_NLDGFMEIAKN_OFFSET UNITYSDK_OFFSET(0xB5A5760)
#define KPAAMDOGJFN_PFFPFGNPDPI_OFFSET UNITYSDK_OFFSET(0xB5A5990)
#define KPAAMDOGJFN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB5A5620)

inline static constexpr unsigned int KPAAMDOGJFN_TypeDefinitionIndex = 77133;

	class KPAAMDOGJFN : public ::System::Object
	{
	public:
		::Entitas::IGroup* FJILKFNCJCB; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup* HENMILPNEGE; // 0x20
		::Entitas::ICollector* FCGCJBMLILM; // 0x28
		::NDDFLGNNMDK* FKINCGODJEP; // 0x30
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
