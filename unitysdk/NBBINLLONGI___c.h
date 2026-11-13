#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBBINLLONGI;
namespace System { class Object; }

#define NBBINLLONGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20155EB0)
#define NBBINLLONGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20155EF0)
#define NBBINLLONGI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20155F00)

inline static constexpr unsigned int NBBINLLONGI___c_TypeDefinitionIndex = 32576;

	class NBBINLLONGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57F50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBBINLLONGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI___C_CTOR_OFFSET))(this);
		}

		::NBBINLLONGI* __cctor_b__23_0()
		{
			return ((::NBBINLLONGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBBINLLONGI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
