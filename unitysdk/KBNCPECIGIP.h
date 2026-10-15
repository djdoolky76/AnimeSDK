#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define KBNCPECIGIP_CTOR_OFFSET UNITYSDK_OFFSET(0xB31B890)
#define KBNCPECIGIP_FCFFMPGKKGN_OFFSET UNITYSDK_OFFSET(0xB31C1E0)
#define KBNCPECIGIP_LAENGGLFBMD_OFFSET UNITYSDK_OFFSET(0xB31C2A0)
#define KBNCPECIGIP__CREATEEMPTYENTITY_OFFSET UNITYSDK_OFFSET(0xB31BA70)
#define KBNCPECIGIP__GETENTITYBYCONFIGID_OFFSET UNITYSDK_OFFSET(0xB31BB30)
#define KBNCPECIGIP__GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB31BAD0)
#define KBNCPECIGIP__INITDESTRUCTIBLEPROP_OFFSET UNITYSDK_OFFSET(0xB31BBD0)

inline static constexpr unsigned int KBNCPECIGIP_TypeDefinitionIndex = 77081;

	class KBNCPECIGIP
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x48
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x50
		// static const ::System::String* HODODNBMBCB; // 0x0
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + KBNCPECIGIP_CTOR_OFFSET))(this, a1, a2);
		}

		::HIOEAKHGILF* _CreateEmptyEntity(::System::String* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KBNCPECIGIP__CREATEEMPTYENTITY_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* _GetEntityByRuntimeID(::System::Int32 a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KBNCPECIGIP__GETENTITYBYRUNTIMEID_OFFSET))(this, a1);
		}

		::HIOEAKHGILF* _GetEntityByConfigID(::System::UInt32 a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KBNCPECIGIP__GETENTITYBYCONFIGID_OFFSET))(this, a1);
		}

		::System::Void _InitDestructibleProp(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KBNCPECIGIP__INITDESTRUCTIBLEPROP_OFFSET))(this, a1);
		}

		::System::Void FCFFMPGKKGN(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KBNCPECIGIP_FCFFMPGKKGN_OFFSET))(this, a1, a2);
		}

		::System::Void LAENGGLFBMD(::HIOEAKHGILF* a1, ::UnityEngine::Collider* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + KBNCPECIGIP_LAENGGLFBMD_OFFSET))(this, a1, a2);
		}

	};
