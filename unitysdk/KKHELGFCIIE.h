#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKGNKFKLIJK.h"
#include "unitysdk/System/Object.h"
class NGFHCJIAOLH;
class OAIPJANPCEK;
namespace Entitas { template <typename T> class IGroup_1; }

#define KKHELGFCIIE_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B56A0)
#define KKHELGFCIIE_DOMJCLFPNCO_OFFSET UNITYSDK_OFFSET(0xB4B5F00)
#define KKHELGFCIIE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB4B5810)
#define KKHELGFCIIE_IBHCGJJFGEH_OFFSET UNITYSDK_OFFSET(0xB4B5D50)
#define KKHELGFCIIE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xB4B56B0)
#define KKHELGFCIIE_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB4B6310)

inline static constexpr unsigned int KKHELGFCIIE_TypeDefinitionIndex = 77780;

	class KKHELGFCIIE : public ::System::Object
	{
	public:
		::BKGNKFKLIJK ELPOGGBGOJD; // 0x10
		::OAIPJANPCEK* PDENFEFCAGN; // 0x28
		::Entitas::IGroup_1<::NGFHCJIAOLH*>* OIOBDKBLIID; // 0x30
		::System::Boolean IDAMFLICEAM; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single KBCOHKPEELA; // 0x3C
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + KKHELGFCIIE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_TEARDOWN_OFFSET))(this);
		}

		::System::Void IBHCGJJFGEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_IBHCGJJFGEH_OFFSET))(this);
		}

		::System::Void DOMJCLFPNCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHELGFCIIE_DOMJCLFPNCO_OFFSET))(this);
		}

	};
