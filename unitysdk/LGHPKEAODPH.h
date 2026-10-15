#pragma once
#include "unitysdk/unitysdk.h"
class AGCPAMNLCGN;
namespace Entitas { template <typename T> class IMatcher_1; }

#define LGHPKEAODPH_BPDEOCKNLNI_OFFSET UNITYSDK_OFFSET(0x1C8E0010)
#define LGHPKEAODPH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E0490)
#define LGHPKEAODPH_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E0170)
#define LGHPKEAODPH_GETGENERICVIEWASSETMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E00D0)
#define LGHPKEAODPH_GETGENERICVIEWBRIDGEMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E0210)
#define LGHPKEAODPH_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E02B0)
#define LGHPKEAODPH_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E0350)
#define LGHPKEAODPH_GETTRANSFORMMATCHER_OFFSET UNITYSDK_OFFSET(0x1C8E03F0)
#define LGHPKEAODPH_JMEJFBACGEB_OFFSET UNITYSDK_OFFSET(0x1C8DFF10)
#define LGHPKEAODPH_MJLOIEOCAGP_OFFSET UNITYSDK_OFFSET(0x1C8DFFF0)

inline static constexpr unsigned int LGHPKEAODPH_TypeDefinitionIndex = 42559;

	class LGHPKEAODPH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_CTOR_OFFSET))(this);
		}

		::AGCPAMNLCGN* JMEJFBACGEB()
		{
			return ((::AGCPAMNLCGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_JMEJFBACGEB_OFFSET))(this);
		}

		::System::Boolean MJLOIEOCAGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_MJLOIEOCAGP_OFFSET))(this);
		}

		::System::Void BPDEOCKNLNI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LGHPKEAODPH_BPDEOCKNLNI_OFFSET))(this, a1);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetGenericViewAssetMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETGENERICVIEWASSETMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetGenericViewAssetLoadingMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETGENERICVIEWASSETLOADINGMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetGenericViewBridgeMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETGENERICVIEWBRIDGEMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetGenericViewLoadCallbackMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETGENERICVIEWLOADCALLBACKMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetGenericViewUnloadCallbackMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETGENERICVIEWUNLOADCALLBACKMATCHER_OFFSET))(this);
		}

		::Entitas::IMatcher_1<::AGCPAMNLCGN*>* GetTransformMatcher()
		{
			return ((::Entitas::IMatcher_1<::AGCPAMNLCGN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGHPKEAODPH_GETTRANSFORMMATCHER_OFFSET))(this);
		}

	};
