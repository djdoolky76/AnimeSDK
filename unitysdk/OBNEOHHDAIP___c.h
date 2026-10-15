#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OBNEOHHDAIP;
namespace System { class Object; }

#define OBNEOHHDAIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB86280)
#define OBNEOHHDAIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB862C0)
#define OBNEOHHDAIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB862D0)

inline static constexpr unsigned int OBNEOHHDAIP___c_TypeDefinitionIndex = 33131;

	class OBNEOHHDAIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OBNEOHHDAIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP___C_CTOR_OFFSET))(this);
		}

		::OBNEOHHDAIP* __cctor_b__23_0()
		{
			return ((::OBNEOHHDAIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNEOHHDAIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
