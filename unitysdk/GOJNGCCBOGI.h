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

#define GOJNGCCBOGI_BMLMCGPJFKP_OFFSET UNITYSDK_OFFSET(0x15B38A90)
#define GOJNGCCBOGI_CTOR_OFFSET UNITYSDK_OFFSET(0x15B38B20)
#define GOJNGCCBOGI_GET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15B38770)
#define GOJNGCCBOGI_KLBGGOCANPP_OFFSET UNITYSDK_OFFSET(0x15B38910)
#define GOJNGCCBOGI_OADMODNIPPM_OFFSET UNITYSDK_OFFSET(0x15B38790)
#define GOJNGCCBOGI_OFAKOAMLFEC_OFFSET UNITYSDK_OFFSET(0x15B38AD0)
#define GOJNGCCBOGI_SET_MERGEDCOUNT_OFFSET UNITYSDK_OFFSET(0x15B38780)

	class GOJNGCCBOGI : public ::System::Object
	{
	public:
		::System::String* GHGOKMODGJK; // 0x10
		::FOPJIACKHCC* NJGPHAIEOBP; // 0x18
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
		::Il2CppArray<::System::Object*>* MOJOOLJFAIG; // 0x28
		::System::Single HKGPLKJOCDH; // 0x30
		::RPG::GameCore::EnumStatusType EGBFNFCEPHD; // 0x34
		::System::UInt32 _MergedCount_k__BackingField; // 0x38
		::System::Single GHOOBAHOGAM; // 0x3C
		::RPG::Client::TextID ANAJAIHNJLK; // 0x40
		::System::Boolean BAGHDLLONAC; // 0x50
		::System::Boolean EAMEABKBBEJ; // 0x51
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FloatMessageType GBJBHFGLNDP; // 0x54
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
