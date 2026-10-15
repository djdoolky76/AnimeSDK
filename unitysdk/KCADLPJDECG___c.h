#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCADLPJDECG;
namespace System { class Object; }

#define KCADLPJDECG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C5080)
#define KCADLPJDECG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C50C0)
#define KCADLPJDECG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E7C50D0)

inline static constexpr unsigned int KCADLPJDECG___c_TypeDefinitionIndex = 29646;

	class KCADLPJDECG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xED20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCADLPJDECG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG___C_CTOR_OFFSET))(this);
		}

		::KCADLPJDECG* __cctor_b__28_0()
		{
			return ((::KCADLPJDECG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCADLPJDECG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
