#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODBFGHLOPJD;
namespace System { class Object; }

#define ODBFGHLOPJD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0BBEA0)
#define ODBFGHLOPJD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0BBEE0)
#define ODBFGHLOPJD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0BBEF0)

inline static constexpr unsigned int ODBFGHLOPJD___c_TypeDefinitionIndex = 26784;

	class ODBFGHLOPJD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODBFGHLOPJD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFGHLOPJD___C_CTOR_OFFSET))(this);
		}

		::ODBFGHLOPJD* __cctor_b__33_0()
		{
			return ((::ODBFGHLOPJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODBFGHLOPJD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
