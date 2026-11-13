#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LICMNPOKCMB;
namespace System { class Object; }

#define LICMNPOKCMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201C7A90)
#define LICMNPOKCMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201C7AD0)
#define LICMNPOKCMB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x201C7AE0)

inline static constexpr unsigned int LICMNPOKCMB___c_TypeDefinitionIndex = 32308;

	class LICMNPOKCMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LICMNPOKCMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB___C_CTOR_OFFSET))(this);
		}

		::LICMNPOKCMB* __cctor_b__33_0()
		{
			return ((::LICMNPOKCMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICMNPOKCMB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
