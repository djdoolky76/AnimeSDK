#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HBDNJKHNHLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C158880)
#define HBDNJKHNHLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1588C0)
#define HBDNJKHNHLE___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C1588D0)

inline static constexpr unsigned int HBDNJKHNHLE___c_TypeDefinitionIndex = 75252;

	class HBDNJKHNHLE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::System::Type*, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73100);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x73108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBDNJKHNHLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBDNJKHNHLE___C_CTOR_OFFSET))(this);
		}

		::System::String* _CheckAutoBindCallBackParams_b__8_0(::System::Type* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + HBDNJKHNHLE___C__CHECKAUTOBINDCALLBACKPARAMS_B__8_0_OFFSET))(this, a1);
		}

	};
