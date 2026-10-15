#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NAKCDHDLNEI;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IComponent; }
namespace Entitas { class IGroup; }
namespace UnityEngine { class Collider; }

#define OPDEHKNDOEG_AEIBOMEBHIP_OFFSET UNITYSDK_OFFSET(0xBFA6850)
#define OPDEHKNDOEG_BAJJFONFDGG_OFFSET UNITYSDK_OFFSET(0xBFA65F0)
#define OPDEHKNDOEG_CFDLOJLBKFG_OFFSET UNITYSDK_OFFSET(0xBFA6E50)
#define OPDEHKNDOEG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA5950)
#define OPDEHKNDOEG_DNIBDCGNDDL_OFFSET UNITYSDK_OFFSET(0xBFA7A60)
#define OPDEHKNDOEG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBFA6590)
#define OPDEHKNDOEG_FCFFMPGKKGN_OFFSET UNITYSDK_OFFSET(0xBFA7080)
#define OPDEHKNDOEG_IFHJDIDPKJE_OFFSET UNITYSDK_OFFSET(0xBFA7550)
#define OPDEHKNDOEG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBFA5C10)
#define OPDEHKNDOEG_IPENLBMIPJL_OFFSET UNITYSDK_OFFSET(0xBFA75E0)
#define OPDEHKNDOEG_LAENGGLFBMD_OFFSET UNITYSDK_OFFSET(0xBFA7390)
#define OPDEHKNDOEG_LPFPPNGGEBA_OFFSET UNITYSDK_OFFSET(0xBFA76B0)
#define OPDEHKNDOEG_MEJCFHEHEDP_OFFSET UNITYSDK_OFFSET(0xBFA5E40)
#define OPDEHKNDOEG_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xBFA6ED0)

inline static constexpr unsigned int OPDEHKNDOEG_TypeDefinitionIndex = 77065;

	class OPDEHKNDOEG : public ::System::Object
	{
	public:
		::Entitas::IGroup* NOKMKIGKHEK; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::Entitas::ICollector* KAEEODHJBOG; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
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

		::System::Void IPENLBMIPJL(::Entitas::IGroup* a1, ::HIOEAKHGILF* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IGroup*, ::HIOEAKHGILF*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + OPDEHKNDOEG_IPENLBMIPJL_OFFSET))(this, a1, a2, a3, a4);
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
