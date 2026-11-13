#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/FloatMessageType.h"
#include "unitysdk/System/Object.h"
class FOPJIACKHCC;
class GOJNGCCBOGI;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define GOJNGCCBOGI_BMLMCGPJFKP_OFFSET UNITYSDK_OFFSET(0x187BDB90)
#define GOJNGCCBOGI_CTOR_OFFSET UNITYSDK_OFFSET(0x187BDC20)
#define GOJNGCCBOGI_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x187BD870)
#define GOJNGCCBOGI_KLBGGOCANPP_OFFSET UNITYSDK_OFFSET(0x187BDA10)
#define GOJNGCCBOGI_OADMODNIPPM_OFFSET UNITYSDK_OFFSET(0x187BD890)
#define GOJNGCCBOGI_OFAKOAMLFEC_OFFSET UNITYSDK_OFFSET(0x187BDBD0)
#define GOJNGCCBOGI_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x187BD880)

inline static constexpr unsigned int GOJNGCCBOGI_TypeDefinitionIndex = 73526;

	class GOJNGCCBOGI : public ::System::Object
	{
	public:
		::System::String* GHGOKMODGJK; // 0x10
		::Il2CppArray<::System::Object*>* MOJOOLJFAIG; // 0x18
		::FOPJIACKHCC* NJGPHAIEOBP; // 0x20
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x28
		::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x30
		::System::UInt32 _MergedCount_k__BackingField; // 0x34
		::RPG::GameCore::EnumStatusType EGBFNFCEPHD; // 0x38
		::System::Single GHOOBAHOGAM; // 0x3C
		::System::Single HKGPLKJOCDH; // 0x40
		::System::Boolean EAMEABKBBEJ; // 0x44
		::System::Boolean BAGHDLLONAC; // 0x45
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID ANAJAIHNJLK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_MergedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_GET_MERGEDCOUNT_OFFSET))(this);
		}

		::System::Void set_MergedCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_SET_MERGEDCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean OADMODNIPPM(::GOJNGCCBOGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GOJNGCCBOGI*))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_OADMODNIPPM_OFFSET))(this, a1);
		}

		::System::Void BMLMCGPJFKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_BMLMCGPJFKP_OFFSET))(this);
		}

		::System::Void OFAKOAMLFEC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_OFAKOAMLFEC_OFFSET))(this, a1);
		}

		::System::Boolean KLBGGOCANPP(::Il2CppArray<::System::Object*>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + GOJNGCCBOGI_KLBGGOCANPP_OFFSET))(this, a1);
		}

	};
