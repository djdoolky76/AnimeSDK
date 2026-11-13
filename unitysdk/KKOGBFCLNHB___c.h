#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKOGBFCLNHB;
namespace System { class Object; }

#define KKOGBFCLNHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFEE460)
#define KKOGBFCLNHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFEE4A0)
#define KKOGBFCLNHB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FFEE4B0)

inline static constexpr unsigned int KKOGBFCLNHB___c_TypeDefinitionIndex = 26827;

	class KKOGBFCLNHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKOGBFCLNHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOGBFCLNHB___C_CTOR_OFFSET))(this);
		}

		::KKOGBFCLNHB* __cctor_b__28_0()
		{
			return ((::KKOGBFCLNHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKOGBFCLNHB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
