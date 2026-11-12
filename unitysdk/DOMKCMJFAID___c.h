#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOMKCMJFAID;
namespace System { class Object; }

#define DOMKCMJFAID___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4E38B0)
#define DOMKCMJFAID___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4E38F0)
#define DOMKCMJFAID___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F4E3900)

inline static constexpr unsigned int DOMKCMJFAID___c_TypeDefinitionIndex = 29962;

	class DOMKCMJFAID___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOMKCMJFAID___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID___C_CTOR_OFFSET))(this);
		}

		::DOMKCMJFAID* __cctor_b__23_0()
		{
			return ((::DOMKCMJFAID*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMKCMJFAID___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
