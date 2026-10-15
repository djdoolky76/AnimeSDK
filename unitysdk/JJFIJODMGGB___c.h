#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJFIJODMGGB;
namespace System { class Object; }

#define JJFIJODMGGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E72E2F0)
#define JJFIJODMGGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72E330)
#define JJFIJODMGGB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E72E340)

inline static constexpr unsigned int JJFIJODMGGB___c_TypeDefinitionIndex = 29075;

	class JJFIJODMGGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x628C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJFIJODMGGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB___C_CTOR_OFFSET))(this);
		}

		::JJFIJODMGGB* __cctor_b__33_0()
		{
			return ((::JJFIJODMGGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJFIJODMGGB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
