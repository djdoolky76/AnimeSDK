#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLHKLAFACIJ;
namespace System { class Object; }

#define JLHKLAFACIJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E74CFC0)
#define JLHKLAFACIJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E74D000)
#define JLHKLAFACIJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E74D010)

inline static constexpr unsigned int JLHKLAFACIJ___c_TypeDefinitionIndex = 26071;

	class JLHKLAFACIJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLHKLAFACIJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ___C_CTOR_OFFSET))(this);
		}

		::JLHKLAFACIJ* __cctor_b__28_0()
		{
			return ((::JLHKLAFACIJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLHKLAFACIJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
