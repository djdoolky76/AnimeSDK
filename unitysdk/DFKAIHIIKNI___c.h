#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKLECLLJCEH;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DFKAIHIIKNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE830EC0)
#define DFKAIHIIKNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE830F00)
#define DFKAIHIIKNI___C__GET_DESC_B__2_0_OFFSET UNITYSDK_OFFSET(0xE830F10)

inline static constexpr unsigned int DFKAIHIIKNI___c_TypeDefinitionIndex = 79667;

	class DFKAIHIIKNI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::FKLECLLJCEH*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::FKLECLLJCEH*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65410);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFKAIHIIKNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFKAIHIIKNI___C_CTOR_OFFSET))(this);
		}

		::System::String* _get_Desc_b__2_0(::FKLECLLJCEH* a1)
		{
			return ((::System::String*(*)(::PVOID, ::FKLECLLJCEH*))((::PBYTE)hIl2Cpp + DFKAIHIIKNI___C__GET_DESC_B__2_0_OFFSET))(this, a1);
		}

	};
