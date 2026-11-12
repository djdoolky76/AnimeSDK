#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKOHCHDMNOB;
namespace System { class Object; }

#define MKOHCHDMNOB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0B20)
#define MKOHCHDMNOB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDB0B60)
#define MKOHCHDMNOB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FDB0B70)

inline static constexpr unsigned int MKOHCHDMNOB___c_TypeDefinitionIndex = 27927;

	class MKOHCHDMNOB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKOHCHDMNOB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB___C_CTOR_OFFSET))(this);
		}

		::MKOHCHDMNOB* __cctor_b__23_0()
		{
			return ((::MKOHCHDMNOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKOHCHDMNOB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
