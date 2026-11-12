#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IFIFCBLOGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16E873E0)
#define IFIFCBLOGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16E87420)
#define IFIFCBLOGCC___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x16E87430)

inline static constexpr unsigned int IFIFCBLOGCC___c_TypeDefinitionIndex = 59262;

	class IFIFCBLOGCC___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x437A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x437A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFIFCBLOGCC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIFCBLOGCC___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__1_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIFCBLOGCC___C__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

	};
