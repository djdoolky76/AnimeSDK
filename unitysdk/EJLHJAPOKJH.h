#pragma once
#include "unitysdk/unitysdk.h"
class CKOLIMBFFBD;
class HIOEAKHGILF;
class HPNAKDOGIAD;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define EJLHJAPOKJH_CTOR_OFFSET UNITYSDK_OFFSET(0x154E12F0)
#define EJLHJAPOKJH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154E1DE0)
#define EJLHJAPOKJH_NPHHNPFJDAK_OFFSET UNITYSDK_OFFSET(0x154E1E60)
#define EJLHJAPOKJH__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x154E17B0)
#define EJLHJAPOKJH__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x154E18C0)
#define EJLHJAPOKJH__GETCUSTOMLOADSOURCE_OFFSET UNITYSDK_OFFSET(0x154E1920)
#define EJLHJAPOKJH__GETLEVELHIERARCHY_OFFSET UNITYSDK_OFFSET(0x154E1710)
#define EJLHJAPOKJH__ISDYINGENTITYREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x154E1970)
#define EJLHJAPOKJH__ONENTITYREMOVING_OFFSET UNITYSDK_OFFSET(0x154E1D70)
#define EJLHJAPOKJH__ONTEARDOWN_OFFSET UNITYSDK_OFFSET(0x154E2330)

inline static constexpr unsigned int EJLHJAPOKJH_TypeDefinitionIndex = 76920;

	class EJLHJAPOKJH
	{
	public:
		::Entitas::IGroup* DDILPFIPNCP; // 0x58
		::NDDFLGNNMDK* FKINCGODJEP; // 0x60
		::Entitas::IGroup* KIHGCGEFJHJ; // 0x68
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x70
		::Entitas::IGroup* MJEMDIDAEOH; // 0x78
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
