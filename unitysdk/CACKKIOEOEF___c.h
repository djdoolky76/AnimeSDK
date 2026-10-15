#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CACKKIOEOEF;
namespace System { class Object; }

#define CACKKIOEOEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E029380)
#define CACKKIOEOEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0293C0)
#define CACKKIOEOEF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0293D0)

inline static constexpr unsigned int CACKKIOEOEF___c_TypeDefinitionIndex = 33220;

	class CACKKIOEOEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CACKKIOEOEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CACKKIOEOEF___C_CTOR_OFFSET))(this);
		}

		::CACKKIOEOEF* __cctor_b__33_0()
		{
			return ((::CACKKIOEOEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CACKKIOEOEF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
