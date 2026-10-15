#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/System/Object.h"
class AkCallbackInfo;
class AkExternalSourceInfoArray;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define NCOONILMDAC_CLEAR_OFFSET UNITYSDK_OFFSET(0xBB1CC60)
#define NCOONILMDAC_CTOR_OFFSET UNITYSDK_OFFSET(0xBB1CF60)
#define NCOONILMDAC_ENHKOBAOKBJ_OFFSET UNITYSDK_OFFSET(0xBB1CED0)
#define NCOONILMDAC_GDKBLINFAHI_OFFSET UNITYSDK_OFFSET(0xBB1CF50)
#define NCOONILMDAC_MLOEBFLNCHP_OFFSET UNITYSDK_OFFSET(0xBB1CCE0)
#define NCOONILMDAC_OEIIDHFBKHG_OFFSET UNITYSDK_OFFSET(0xBB1CDD0)
#define NCOONILMDAC_PHAAADAJDAA_OFFSET UNITYSDK_OFFSET(0xBB1CEC0)

inline static constexpr unsigned int NCOONILMDAC_TypeDefinitionIndex = 59739;

	class NCOONILMDAC : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* OEDEAIGDAOF; // 0x10
		::System::Action* PHNEEILABKK; // 0x18
		::System::String* DHMDAEKJENF; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* CFCEACHEPAB; // 0x28
		::System::Action* CDFGEAMONEC; // 0x30
		::AkExternalSourceInfoArray* NDKDBKAFMHC; // 0x38
		::System::Single IFEPJHGNCOI; // 0x40
		::AkCallbackType OKPJPLHOOOL; // 0x44
		::System::UInt32 JGGDKOCIEGH; // 0x48
		::System::Int32 HKNMKHECCAB; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOONILMDAC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOONILMDAC_CLEAR_OFFSET))(this);
		}

		static ::System::UInt32 MLOEBFLNCHP(::System::UInt32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NCOONILMDAC_MLOEBFLNCHP_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 OEIIDHFBKHG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOONILMDAC_OEIIDHFBKHG_OFFSET))(this);
		}

		::UnityEngine::GameObject* PHAAADAJDAA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOONILMDAC_PHAAADAJDAA_OFFSET))(this);
		}

		::System::Void ENHKOBAOKBJ(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NCOONILMDAC_ENHKOBAOKBJ_OFFSET))(this, a1);
		}

		::System::Int32 GDKBLINFAHI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOONILMDAC_GDKBLINFAHI_OFFSET))(this);
		}

	};
