#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHHLABJJGBI;
namespace System { class Object; }

#define OHHLABJJGBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCE10E0)
#define OHHLABJJGBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCE1120)
#define OHHLABJJGBI___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FCE1130)

inline static constexpr unsigned int OHHLABJJGBI___c_TypeDefinitionIndex = 26234;

	class OHHLABJJGBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHHLABJJGBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI___C_CTOR_OFFSET))(this);
		}

		::OHHLABJJGBI* __cctor_b__38_0()
		{
			return ((::OHHLABJJGBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHHLABJJGBI___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
