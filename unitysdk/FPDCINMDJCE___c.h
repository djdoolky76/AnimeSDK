#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPDCINMDJCE;
namespace System { class Object; }

#define FPDCINMDJCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6F4360)
#define FPDCINMDJCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6F43A0)
#define FPDCINMDJCE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F6F43B0)

inline static constexpr unsigned int FPDCINMDJCE___c_TypeDefinitionIndex = 29649;

	class FPDCINMDJCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPDCINMDJCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDCINMDJCE___C_CTOR_OFFSET))(this);
		}

		::FPDCINMDJCE* __cctor_b__58_0()
		{
			return ((::FPDCINMDJCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPDCINMDJCE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
