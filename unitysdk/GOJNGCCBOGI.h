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

#define GOJNGCCBOGI_BMLMCGPJFKP_OFFSET UNITYSDK_OFFSET(0x15B2D080)
#define GOJNGCCBOGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2D110)
#define GOJNGCCBOGI_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15B2CD60)
#define GOJNGCCBOGI_KLBGGOCANPP_OFFSET UNITYSDK_OFFSET(0x15B2CF00)
#define GOJNGCCBOGI_OADMODNIPPM_OFFSET UNITYSDK_OFFSET(0x15B2CD80)
#define GOJNGCCBOGI_OFAKOAMLFEC_OFFSET UNITYSDK_OFFSET(0x15B2D0C0)
#define GOJNGCCBOGI_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15B2CD70)

inline static constexpr unsigned int GOJNGCCBOGI_TypeDefinitionIndex = 71542;

	class GOJNGCCBOGI : public ::System::Object
	{
	public:
		::System::String* GHGOKMODGJK; // 0x10
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x18
		::Il2CppArray<::System::Object*>* MOJOOLJFAIG; // 0x20
		::FOPJIACKHCC* NJGPHAIEOBP; // 0x28
		::System::Boolean EAMEABKBBEJ; // 0x30
		::System::Boolean BAGHDLLONAC; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single HKGPLKJOCDH; // 0x34
		::RPG::GameCore::EnumStatusType EGBFNFCEPHD; // 0x38
		::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x3C
		::RPG::Client::TextID ANAJAIHNJLK; // 0x40
		::System::UInt32 _MergedCount_k__BackingField; // 0x50
		::System::Single GHOOBAHOGAM; // 0x54
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
