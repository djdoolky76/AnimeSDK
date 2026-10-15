#pragma once
#include "unitysdk/unitysdk.h"
class HNLKNLJBHDD;
namespace Entitas { template <typename T> class IMatcher_1; }

#define MOGEAODEJOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7223D0)
#define MOGEAODEJOD_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C7220B0)
#define MOGEAODEJOD_GETPHYSICS2DMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C722150)
#define MOGEAODEJOD_GETPHYSICS2DRIGIDBODYMATCHER_OFFSET UNITYSDK_OFFSET(0x1C7221F0)
#define MOGEAODEJOD_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x1C722290)
#define MOGEAODEJOD_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1C722330)

inline static constexpr unsigned int MOGEAODEJOD_TypeDefinitionIndex = 37038;

	class MOGEAODEJOD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_CTOR_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::HNLKNLJBHDD*>* GetLittleGameConfigMatcher()
		{
			return ((::Entitas::IMatcher_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::HNLKNLJBHDD*>* GetPhysics2DMoveMatcher()
		{
			return ((::Entitas::IMatcher_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_GETPHYSICS2DMOVEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::HNLKNLJBHDD*>* GetPhysics2DRigidBodyMatcher()
		{
			return ((::Entitas::IMatcher_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_GETPHYSICS2DRIGIDBODYMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::HNLKNLJBHDD*>* GetReplicatedMatcher()
		{
			return ((::Entitas::IMatcher_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_GETREPLICATEDMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::HNLKNLJBHDD*>* GetTransformMatcher()
		{
			return ((::Entitas::IMatcher_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGEAODEJOD_GETTRANSFORMMATCHER_OFFSET))(this);
		}

	};
