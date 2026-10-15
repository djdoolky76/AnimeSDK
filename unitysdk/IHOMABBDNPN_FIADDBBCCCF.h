#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/System/Object.h"
class IHOMABBDNPN;
class MNLHJMMEHEI_NNKHNDEBHDA;
namespace RPG::Client { class MonoEffect; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHOMABBDNPN_FIADDBBCCCF_CTOR_OFFSET UNITYSDK_OFFSET(0x16426970)
#define IHOMABBDNPN_FIADDBBCCCF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16428450)
#define IHOMABBDNPN_FIADDBBCCCF_GIHKDLBOBMN_OFFSET UNITYSDK_OFFSET(0x16426A50)
#define IHOMABBDNPN_FIADDBBCCCF_HHHOFGDCLJB_OFFSET UNITYSDK_OFFSET(0x16426F60)
#define IHOMABBDNPN_FIADDBBCCCF_HLEIDANOEIA_OFFSET UNITYSDK_OFFSET(0x16429BA0)
#define IHOMABBDNPN_FIADDBBCCCF_KGBBDAONFGN_OFFSET UNITYSDK_OFFSET(0x16426DD0)
#define IHOMABBDNPN_FIADDBBCCCF_LJBBDGNLMLB_OFFSET UNITYSDK_OFFSET(0x1642CAC0)

inline static constexpr unsigned int IHOMABBDNPN_FIADDBBCCCF_TypeDefinitionIndex = 57327;

	class IHOMABBDNPN_FIADDBBCCCF : public ::System::Object
	{
	public:
		::System::Action_2<::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams>* ONPHBBOOJMA; // 0x10
		::IHOMABBDNPN* OOGKPHFFOOB; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* IOIBFJENGJJ; // 0x20
		::System::Single PHPKIPNNKLI; // 0x28
		::System::Single LHPONOAHOLC; // 0x2C
		::System::Void _ctor(::IHOMABBDNPN* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::IHOMABBDNPN*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_DISPOSE_OFFSET))(this);
		}

		::System::Void HLEIDANOEIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_HLEIDANOEIA_OFFSET))(this, a1);
		}

		::System::Void GIHKDLBOBMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_GIHKDLBOBMN_OFFSET))(this, a1);
		}

		::System::Void KGBBDAONFGN(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_KGBBDAONFGN_OFFSET))(this, a1);
		}

		::System::Void HHHOFGDCLJB(::MNLHJMMEHEI_NNKHNDEBHDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_HHHOFGDCLJB_OFFSET))(this, a1);
		}

		::System::UInt32 LJBBDGNLMLB(::MNLHJMMEHEI_NNKHNDEBHDA* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::UInt32(*)(::PVOID, ::MNLHJMMEHEI_NNKHNDEBHDA*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + IHOMABBDNPN_FIADDBBCCCF_LJBBDGNLMLB_OFFSET))(this, a1, a2, a3);
		}

	};
