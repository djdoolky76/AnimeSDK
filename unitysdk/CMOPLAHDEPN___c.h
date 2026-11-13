#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMOPLAHDEPN;
namespace System { class Object; }

#define CMOPLAHDEPN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205ECBF0)
#define CMOPLAHDEPN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205ECC20)
#define CMOPLAHDEPN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x205ECC30)

inline static constexpr unsigned int CMOPLAHDEPN___c_TypeDefinitionIndex = 27506;

	class CMOPLAHDEPN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CMOPLAHDEPN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN___C_CTOR_OFFSET))(this);
		}

		::CMOPLAHDEPN* __cctor_b__38_0()
		{
			return ((::CMOPLAHDEPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CMOPLAHDEPN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
