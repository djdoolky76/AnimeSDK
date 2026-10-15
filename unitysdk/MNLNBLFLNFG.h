#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDIAALCMDNG;
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }

#define MNLNBLFLNFG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA104D0)
#define MNLNBLFLNFG_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBA10650)
#define MNLNBLFLNFG_KMANBNKPLJJ_OFFSET UNITYSDK_OFFSET(0xBA10600)

inline static constexpr unsigned int MNLNBLFLNFG_TypeDefinitionIndex = 77783;

	class MNLNBLFLNFG : public ::System::Object
	{
	public:
		::HDIAALCMDNG* EEFMDEHLLFI; // 0x10
		::OAIPJANPCEK* PDENFEFCAGN; // 0x18
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* JPKEBGGDFPL; // 0x20
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + MNLNBLFLNFG_CTOR_OFFSET))(this, a1);
		}

		::System::Void KMANBNKPLJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLNBLFLNFG_KMANBNKPLJJ_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLNBLFLNFG_EXECUTE_OFFSET))(this);
		}

	};
