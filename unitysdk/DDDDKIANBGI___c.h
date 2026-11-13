#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDDDKIANBGI;
namespace System { class Object; }

#define DDDDKIANBGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47DE10)
#define DDDDKIANBGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F47DE40)
#define DDDDKIANBGI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F47DE50)

inline static constexpr unsigned int DDDDKIANBGI___c_TypeDefinitionIndex = 33058;

	class DDDDKIANBGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDDDKIANBGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI___C_CTOR_OFFSET))(this);
		}

		::DDDDKIANBGI* __cctor_b__38_0()
		{
			return ((::DDDDKIANBGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDDDKIANBGI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
