#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGLPONENAKN;
class LJHCGAGNIKN;
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class FieldInfo; }
namespace System::Reflection { class PropertyInfo; }

#define EMMLHDGOLIP_BDLGHLAEHLF_1_OFFSET UNITYSDK_OFFSET(0x1CC614C0)
#define EMMLHDGOLIP_BDLGHLAEHLF_2_OFFSET UNITYSDK_OFFSET(0x1CC62130)
#define EMMLHDGOLIP_BDLGHLAEHLF_3_OFFSET UNITYSDK_OFFSET(0x1CC63260)
#define EMMLHDGOLIP_BDLGHLAEHLF_4_OFFSET UNITYSDK_OFFSET(0x1CC63370)
#define EMMLHDGOLIP_CLHKIODDKMP_OFFSET UNITYSDK_OFFSET(0x1CC61C20)
#define EMMLHDGOLIP_FMLHGFNAKHB_OFFSET UNITYSDK_OFFSET(0x1CC61600)
#define EMMLHDGOLIP_JGCMHDNJAHO_OFFSET UNITYSDK_OFFSET(0x1CC62260)
#define EMMLHDGOLIP_KGBMNPFLGKD_OFFSET UNITYSDK_OFFSET(0x1CC61C60)

inline static constexpr unsigned int EMMLHDGOLIP_TypeDefinitionIndex = 43884;

	class EMMLHDGOLIP : public ::System::Object
	{
	public:
		static ::LJHCGAGNIKN* BDLGHLAEHLF_1(::System::Reflection::PropertyInfo* a1)
		{
			return ((::LJHCGAGNIKN*(*)(::System::Reflection::PropertyInfo*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_BDLGHLAEHLF_1_OFFSET))(a1);
		}

		static ::LJHCGAGNIKN* BDLGHLAEHLF_2(::System::Reflection::PropertyInfo* a1, ::System::String* a2)
		{
			return ((::LJHCGAGNIKN*(*)(::System::Reflection::PropertyInfo*, ::System::String*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_BDLGHLAEHLF_2_OFFSET))(a1, a2);
		}

		static ::LJHCGAGNIKN* KGBMNPFLGKD(::System::Reflection::PropertyInfo* a1, ::JGLPONENAKN* a2, ::System::String* a3)
		{
			return ((::LJHCGAGNIKN*(*)(::System::Reflection::PropertyInfo*, ::JGLPONENAKN*, ::System::String*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_KGBMNPFLGKD_OFFSET))(a1, a2, a3);
		}

		static ::LJHCGAGNIKN* BDLGHLAEHLF_3(::System::Reflection::FieldInfo* a1)
		{
			return ((::LJHCGAGNIKN*(*)(::System::Reflection::FieldInfo*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_BDLGHLAEHLF_3_OFFSET))(a1);
		}

		static ::LJHCGAGNIKN* BDLGHLAEHLF_4(::System::Reflection::FieldInfo* a1, ::System::String* a2)
		{
			return ((::LJHCGAGNIKN*(*)(::System::Reflection::FieldInfo*, ::System::String*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_BDLGHLAEHLF_4_OFFSET))(a1, a2);
		}

		static ::System::Boolean FMLHGFNAKHB(::System::Reflection::PropertyInfo* a1, ::JGLPONENAKN* a2, ::System::Type* a3)
		{
			return ((::System::Boolean(*)(::System::Reflection::PropertyInfo*, ::JGLPONENAKN*, ::System::Type*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_FMLHGFNAKHB_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CLHKIODDKMP(::System::Type* a1)
		{
			return ((::System::String*(*)(::System::Type*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_CLHKIODDKMP_OFFSET))(a1);
		}

		static ::System::String* JGCMHDNJAHO(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + EMMLHDGOLIP_JGCMHDNJAHO_OFFSET))(a1, a2);
		}

	};
