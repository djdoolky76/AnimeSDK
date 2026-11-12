#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLHGFHMEFMB;
namespace System { class Object; }

#define BLHGFHMEFMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA4F0)
#define BLHGFHMEFMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2BA530)
#define BLHGFHMEFMB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F2BA540)

inline static constexpr unsigned int BLHGFHMEFMB___c_TypeDefinitionIndex = 31975;

	class BLHGFHMEFMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C_CTOR_OFFSET))(this);
		}

		::BLHGFHMEFMB* __cctor_b__33_0()
		{
			return ((::BLHGFHMEFMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHGFHMEFMB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
