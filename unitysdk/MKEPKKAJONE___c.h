#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKEPKKAJONE;
namespace System { class Object; }

#define MKEPKKAJONE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA56BB0)
#define MKEPKKAJONE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA56BF0)
#define MKEPKKAJONE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA56C00)

inline static constexpr unsigned int MKEPKKAJONE___c_TypeDefinitionIndex = 35093;

	class MKEPKKAJONE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x568F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKEPKKAJONE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE___C_CTOR_OFFSET))(this);
		}

		::MKEPKKAJONE* __cctor_b__28_0()
		{
			return ((::MKEPKKAJONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEPKKAJONE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
