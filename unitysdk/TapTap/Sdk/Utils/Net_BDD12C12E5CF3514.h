#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AD9BA2968529B116; }

#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3F0CBB0)
#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x3F0D1F0)
#define TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int Net_BDD12C12E5CF3514_TypeDefinitionIndex = 20882;

	class Net_BDD12C12E5CF3514 : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EE4A79A31452E9BF; // 0x20
		::System::String* B960AC235824C6C8; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* A7B7EBA251E4CE37; // 0x30
		::System::Action_2<::System::Int32, ::System::String*>* B75B344B9779CE84; // 0x38
		::System::Action_1<::System::String*>* A66BE8A990D20F23; // 0x40
		::UnityEngine::AD9BA2968529B116* E3ED5B54BC342B5D; // 0x48

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET_BDD12C12E5CF3514_E34B6CA02139E820_OFFSET))(this);
		}
	};
}
