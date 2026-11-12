#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIDPFIAALLB;
namespace System { class Object; }

#define HIDPFIAALLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F88B810)
#define HIDPFIAALLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F88B850)
#define HIDPFIAALLB___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1F88B860)

inline static constexpr unsigned int HIDPFIAALLB___c_TypeDefinitionIndex = 29297;

	class HIDPFIAALLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIDPFIAALLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPFIAALLB___C_CTOR_OFFSET))(this);
		}

		::HIDPFIAALLB* __cctor_b__53_0()
		{
			return ((::HIDPFIAALLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIDPFIAALLB___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
