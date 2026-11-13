#pragma once
#include "unitysdk/unitysdk.h"
class ICDNEPOKHJL;
namespace Entitas { template <typename T> class IMatcher_1; }

#define FPBFICAFCDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA36010)
#define FPBFICAFCDO_GETLITTLEGAMECONFIGMATCHER_OFFSET UNITYSDK_OFFSET(0x1AA35D90)
#define FPBFICAFCDO_GETPREDICATEMATCHER_OFFSET UNITYSDK_OFFSET(0x1AA35E30)
#define FPBFICAFCDO_GETREPLICATEDMATCHER_OFFSET UNITYSDK_OFFSET(0x1AA35ED0)
#define FPBFICAFCDO_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1AA35F70)

inline static constexpr unsigned int FPBFICAFCDO_TypeDefinitionIndex = 37964;

	class FPBFICAFCDO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO_CTOR_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::ICDNEPOKHJL*>* GetLittleGameConfigMatcher()
		{
			return ((::Entitas::IMatcher_1<::ICDNEPOKHJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO_GETLITTLEGAMECONFIGMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::ICDNEPOKHJL*>* GetPredicateMatcher()
		{
			return ((::Entitas::IMatcher_1<::ICDNEPOKHJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO_GETPREDICATEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::ICDNEPOKHJL*>* GetReplicatedMatcher()
		{
			return ((::Entitas::IMatcher_1<::ICDNEPOKHJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO_GETREPLICATEDMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::ICDNEPOKHJL*>* GetTransformMatcher()
		{
			return ((::Entitas::IMatcher_1<::ICDNEPOKHJL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBFICAFCDO_GETTRANSFORMMATCHER_OFFSET))(this);
		}

	};
