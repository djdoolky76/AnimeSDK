#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKJONMCECE;
namespace System { class Object; }

#define KHKJONMCECE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81A820)
#define KHKJONMCECE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81A850)
#define KHKJONMCECE___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1E81A860)

inline static constexpr unsigned int KHKJONMCECE___c_TypeDefinitionIndex = 30935;

	class KHKJONMCECE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHKJONMCECE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKJONMCECE___C_CTOR_OFFSET))(this);
		}

		::KHKJONMCECE* __cctor_b__58_0()
		{
			return ((::KHKJONMCECE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHKJONMCECE___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
