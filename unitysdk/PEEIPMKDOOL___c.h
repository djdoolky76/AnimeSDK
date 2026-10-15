#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEIPMKDOOL;
namespace System { class Object; }

#define PEEIPMKDOOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEE8F10)
#define PEEIPMKDOOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEE8F50)
#define PEEIPMKDOOL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DEE8F60)

inline static constexpr unsigned int PEEIPMKDOOL___c_TypeDefinitionIndex = 30489;

	class PEEIPMKDOOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x309E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEIPMKDOOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL___C_CTOR_OFFSET))(this);
		}

		::PEEIPMKDOOL* __cctor_b__23_0()
		{
			return ((::PEEIPMKDOOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEIPMKDOOL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
