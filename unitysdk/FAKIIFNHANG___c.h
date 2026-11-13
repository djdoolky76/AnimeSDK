#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAKIIFNHANG;
namespace System { class Object; }

#define FAKIIFNHANG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F74EB00)
#define FAKIIFNHANG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F74EB40)
#define FAKIIFNHANG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F74EB50)

inline static constexpr unsigned int FAKIIFNHANG___c_TypeDefinitionIndex = 34421;

	class FAKIIFNHANG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKIIFNHANG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG___C_CTOR_OFFSET))(this);
		}

		::FAKIIFNHANG* __cctor_b__28_0()
		{
			return ((::FAKIIFNHANG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKIIFNHANG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
