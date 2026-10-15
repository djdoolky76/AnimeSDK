#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define IFIFCBLOGCC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F0C520)
#define IFIFCBLOGCC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0C560)
#define IFIFCBLOGCC___C__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x15F0C570)

inline static constexpr unsigned int IFIFCBLOGCC___c_TypeDefinitionIndex = 58023;

	class IFIFCBLOGCC___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Action_1<::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D150);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D158);
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
