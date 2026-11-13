#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFBLHALOFO;
namespace System { class Object; }

#define AEFBLHALOFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200A6360)
#define AEFBLHALOFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200A6390)
#define AEFBLHALOFO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x200A63A0)

inline static constexpr unsigned int AEFBLHALOFO___c_TypeDefinitionIndex = 30056;

	class AEFBLHALOFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B8E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEFBLHALOFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBLHALOFO___C_CTOR_OFFSET))(this);
		}

		::AEFBLHALOFO* __cctor_b__18_0()
		{
			return ((::AEFBLHALOFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFBLHALOFO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
