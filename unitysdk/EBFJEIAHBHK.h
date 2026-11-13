#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBFJEIAHBHK_LIFDJCHDBNP;
namespace System { class String; }

#define EBFJEIAHBHK_INIIDBHNMHB_OFFSET UNITYSDK_OFFSET(0x1E9A71A0)
#define EBFJEIAHBHK_PEECNCABGFD_OFFSET UNITYSDK_OFFSET(0x1E9A71B0)

inline static constexpr unsigned int EBFJEIAHBHK_TypeDefinitionIndex = 10764;

	class EBFJEIAHBHK : public ::System::Object
	{
	public:
		static ::EBFJEIAHBHK_LIFDJCHDBNP** StaticGet_OKHGHGDMLGH()
		{
			return (::EBFJEIAHBHK_LIFDJCHDBNP**)UnitySDK::FromName("", "EBFJEIAHBHK")->GetStaticField(0x42DE0);
		}

		static ::System::Void INIIDBHNMHB(::EBFJEIAHBHK_LIFDJCHDBNP* a1)
		{
			return ((::System::Void(*)(::EBFJEIAHBHK_LIFDJCHDBNP*))((::PBYTE)hIl2Cpp + EBFJEIAHBHK_INIIDBHNMHB_OFFSET))(a1);
		}

		static ::System::Void PEECNCABGFD(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + EBFJEIAHBHK_PEECNCABGFD_OFFSET))(a1);
		}

	};
