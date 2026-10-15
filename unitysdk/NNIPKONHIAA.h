#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }

#define NNIPKONHIAA_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB0010)
#define NNIPKONHIAA_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBCB0190)
#define NNIPKONHIAA_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xBCB0140)

inline static constexpr unsigned int NNIPKONHIAA_TypeDefinitionIndex = 77782;

	class NNIPKONHIAA : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* MBBMBOMFIGF; // 0x10
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x18
		::OAIPJANPCEK* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + NNIPKONHIAA_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIPKONHIAA_KMANBNKPLJJ_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNIPKONHIAA_EXECUTE_OFFSET))(this);
		}

	};
