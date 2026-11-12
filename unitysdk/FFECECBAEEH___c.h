#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFECECBAEEH;
namespace System { class Object; }

#define FFECECBAEEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F653EA0)
#define FFECECBAEEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F653EE0)
#define FFECECBAEEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F653EF0)

inline static constexpr unsigned int FFECECBAEEH___c_TypeDefinitionIndex = 30569;

	class FFECECBAEEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BC50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFECECBAEEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH___C_CTOR_OFFSET))(this);
		}

		::FFECECBAEEH* __cctor_b__23_0()
		{
			return ((::FFECECBAEEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFECECBAEEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
