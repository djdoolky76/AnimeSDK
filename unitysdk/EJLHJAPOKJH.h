#pragma once
#include "unitysdk/unitysdk.h"
class CKOLIMBFFBD;
class HIOEAKHGILF;
class HPNAKDOGIAD;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define EJLHJAPOKJH_CTOR_OFFSET UNITYSDK_OFFSET(0x154D54D0)
#define EJLHJAPOKJH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154D5FC0)
#define EJLHJAPOKJH_NPHHNPFJDAK_OFFSET UNITYSDK_OFFSET(0x154D6040)
#define EJLHJAPOKJH__CREATEENTITY_OFFSET UNITYSDK_OFFSET(0x154D5990)
#define EJLHJAPOKJH__DESTROYENTITY_OFFSET UNITYSDK_OFFSET(0x154D5AA0)
#define EJLHJAPOKJH__GETCUSTOMLOADSOURCE_OFFSET UNITYSDK_OFFSET(0x154D5B00)
#define EJLHJAPOKJH__GETLEVELHIERARCHY_OFFSET UNITYSDK_OFFSET(0x154D58F0)
#define EJLHJAPOKJH__ISDYINGENTITYREADYTODESTROY_OFFSET UNITYSDK_OFFSET(0x154D5B50)
#define EJLHJAPOKJH__ONENTITYREMOVING_OFFSET UNITYSDK_OFFSET(0x154D5F50)
#define EJLHJAPOKJH__ONTEARDOWN_OFFSET UNITYSDK_OFFSET(0x154D6510)

inline static constexpr unsigned int EJLHJAPOKJH_TypeDefinitionIndex = 76919;

	class EJLHJAPOKJH
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* DDILPFIPNCP; // 0x58
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x60
		::Entitas::IGroup_1<::HIOEAKHGILF*>* KIHGCGEFJHJ; // 0x68
		::NDDFLGNNMDK* FKINCGODJEP; // 0x70
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MJEMDIDAEOH; // 0x78
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
