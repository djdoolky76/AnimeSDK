#pragma once
#include "unitysdk/unitysdk.h"
class HNLKNLJBHDD;
namespace Entitas { template <typename T> class IMatcher_1; }

#define MOGEAODEJOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D1F60)
#define MOGEAODEJOD_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x1D8D1C40)
#define MOGEAODEJOD_GETPHYSICS2DMOVEMATCHER_OFFSET UNITYSDK_OFFSET(0x1D8D1CE0)
#define MOGEAODEJOD_GETPHYSICS2DRIGIDBODYMATCHER_OFFSET UNITYSDK_OFFSET(0x1D8D1D80)
#define MOGEAODEJOD_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x1D8D1E20)
#define MOGEAODEJOD_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1D8D1EC0)

inline static constexpr unsigned int MOGEAODEJOD_TypeDefinitionIndex = 37966;

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
