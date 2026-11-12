#pragma once
#include "unitysdk/unitysdk.h"
class CKOLIMBFFBD;
class HIOEAKHGILF;
class HPNAKDOGIAD;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define EJLHJAPOKJH_CTOR_OFFSET UNITYSDK_OFFSET(0x16428CB0)
#define EJLHJAPOKJH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x164297C0)
#define EJLHJAPOKJH_NPHHNPFJDAK_OFFSET UNITYSDK_OFFSET(0x16429840)
#define EJLHJAPOKJH__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x16429170)
#define EJLHJAPOKJH__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x16429280)
#define EJLHJAPOKJH__GETCUSTOMLOADSOURCE_OFFSET UNITYSDK_OFFSET(0x164292E0)
#define EJLHJAPOKJH__GETLEVELHIERARCHY_OFFSET UNITYSDK_OFFSET(0x164290D0)
#define EJLHJAPOKJH__ISDYINGENTITYREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x16429330)
#define EJLHJAPOKJH__ONENTITYREMOVING_OFFSET UNITYSDK_OFFSET(0x16429750)
#define EJLHJAPOKJH__ONTEARDOWN_OFFSET UNITYSDK_OFFSET(0x16429D10)

inline static constexpr unsigned int EJLHJAPOKJH_TypeDefinitionIndex = 79254;

	class EJLHJAPOKJH
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MJEMDIDAEOH; // 0x58
		::NDDFLGNNMDK* FKINCGODJEP; // 0x60
		::Entitas::IGroup_1<::HIOEAKHGILF*>* DDILPFIPNCP; // 0x68
		::Entitas::IGroup_1<::HIOEAKHGILF*>* KIHGCGEFJHJ; // 0x70
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x78
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + EJLHJAPOKJH_CTOR_OFFSET))(this, a1, a2);
		}

		::HPNAKDOGIAD* _GetLevelHierarchy()
		{
			return ((::HPNAKDOGIAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__GETLEVELHIERARCHY_OFFSET))(this);
		}

		::HIOEAKHGILF* _CreateEntity(::CKOLIMBFFBD* a1)
		{
			return ((::HIOEAKHGILF*(*)(::PVOID, ::CKOLIMBFFBD*))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__CREATEENTITY_OFFSET))(this, a1);
		}

		::System::Void _DestroyEntity(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__DESTROYENTITY_OFFSET))(this, a1);
		}

		::System::UInt32 _GetCustomLoadSource()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__GETCUSTOMLOADSOURCE_OFFSET))(this);
		}

		::System::Boolean _IsDyingEntityReadyToDestroy(::HIOEAKHGILF* a1, ::CKOLIMBFFBD* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::CKOLIMBFFBD*))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__ISDYINGENTITYREADYTODESTROY_OFFSET))(this, a1, a2);
		}

		::System::Void _OnEntityRemoving(::HIOEAKHGILF* a1, ::CKOLIMBFFBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::CKOLIMBFFBD*))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__ONENTITYREMOVING_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHJAPOKJH_EXECUTE_OFFSET))(this);
		}

		::System::Void _OnTearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHJAPOKJH__ONTEARDOWN_OFFSET))(this);
		}

		::System::Void NPHHNPFJDAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJLHJAPOKJH_NPHHNPFJDAK_OFFSET))(this);
		}

	};
