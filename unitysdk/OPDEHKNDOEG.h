#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NAKCDHDLNEI;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace UnityEngine { class Collider; }

#define OPDEHKNDOEG_AEIBOMEBHIP_OFFSET UNITYSDK_OFFSET(0x18AB5860)
#define OPDEHKNDOEG_BAJJFONFDGG_OFFSET UNITYSDK_OFFSET(0x18AB5600)
#define OPDEHKNDOEG_CFDLOJLBKFG_OFFSET UNITYSDK_OFFSET(0x18AB5E60)
#define OPDEHKNDOEG_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB4960)
#define OPDEHKNDOEG_DNIBDCGNDDL_OFFSET UNITYSDK_OFFSET(0x18AB6A70)
#define OPDEHKNDOEG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18AB55A0)
#define OPDEHKNDOEG_FCFFMPGKKGN_OFFSET UNITYSDK_OFFSET(0x18AB6090)
#define OPDEHKNDOEG_IFHJDIDPKJE_OFFSET UNITYSDK_OFFSET(0x18AB6560)
#define OPDEHKNDOEG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AB4C20)
#define OPDEHKNDOEG_IPENLBMIPJL_OFFSET UNITYSDK_OFFSET(0x18AB65F0)
#define OPDEHKNDOEG_LAENGGLFBMD_OFFSET UNITYSDK_OFFSET(0x18AB63A0)
#define OPDEHKNDOEG_LPFPPNGGEBA_OFFSET UNITYSDK_OFFSET(0x18AB66C0)
#define OPDEHKNDOEG_MEJCFHEHEDP_OFFSET UNITYSDK_OFFSET(0x18AB4E50)
#define OPDEHKNDOEG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18AB5EE0)

inline static constexpr unsigned int OPDEHKNDOEG_TypeDefinitionIndex = 79398;

	class OPDEHKNDOEG : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* NOKMKIGKHEK; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* KAEEODHJBOG; // 0x28
		::System::Boolean ABKMPGNDAHO; // 0x30
		// static const ::System::String* OGHOILEJMIM; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_TEARDOWN_OFFSET))(this);
		}

		::System::Void BAJJFONFDGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_BAJJFONFDGG_OFFSET))(this);
		}

		::System::Void MEJCFHEHEDP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_MEJCFHEHEDP_OFFSET))(this, a1);
		}

		::System::Void FCFFMPGKKGN(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_FCFFMPGKKGN_OFFSET))(this, a1, a2);
		}

		::System::Void LAENGGLFBMD(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_LAENGGLFBMD_OFFSET))(this, a1, a2);
		}

		::System::Void IPENLBMIPJL(::Entitas::IGroup_1<::HIOEAKHGILF*>* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::HIOEAKHGILF*>*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_IPENLBMIPJL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CFDLOJLBKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_CFDLOJLBKFG_OFFSET))(this);
		}

		::System::Void AEIBOMEBHIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_AEIBOMEBHIP_OFFSET))(this);
		}

		::System::Void IFHJDIDPKJE(::NAKCDHDLNEI* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::NAKCDHDLNEI*, ::HIOEAKHGILF*, ::System::Int32))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_IFHJDIDPKJE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPFPPNGGEBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_LPFPPNGGEBA_OFFSET))(this);
		}

		::System::Void DNIBDCGNDDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_DNIBDCGNDDL_OFFSET))(this);
		}

	};
