#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGFLGGDMAGD;
namespace System { class Object; }

#define LGFLGGDMAGD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FABF200)
#define LGFLGGDMAGD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FABF240)
#define LGFLGGDMAGD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FABF250)

inline static constexpr unsigned int LGFLGGDMAGD___c_TypeDefinitionIndex = 28604;

	class LGFLGGDMAGD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGFLGGDMAGD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD___C_CTOR_OFFSET))(this);
		}

		::LGFLGGDMAGD* __cctor_b__28_0()
		{
			return ((::LGFLGGDMAGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGFLGGDMAGD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
