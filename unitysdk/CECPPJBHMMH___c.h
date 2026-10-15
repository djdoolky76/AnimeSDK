#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CECPPJBHMMH;
namespace System { class Object; }

#define CECPPJBHMMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E062280)
#define CECPPJBHMMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0622C0)
#define CECPPJBHMMH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E0622D0)

inline static constexpr unsigned int CECPPJBHMMH___c_TypeDefinitionIndex = 29699;

	class CECPPJBHMMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFC00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECPPJBHMMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH___C_CTOR_OFFSET))(this);
		}

		::CECPPJBHMMH* __cctor_b__33_0()
		{
			return ((::CECPPJBHMMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CECPPJBHMMH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
