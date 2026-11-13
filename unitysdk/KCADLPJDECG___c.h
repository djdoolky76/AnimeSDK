#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCADLPJDECG;
namespace System { class Object; }

#define KCADLPJDECG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203BAC30)
#define KCADLPJDECG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203BAC70)
#define KCADLPJDECG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x203BAC80)

inline static constexpr unsigned int KCADLPJDECG___c_TypeDefinitionIndex = 30458;

	class KCADLPJDECG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6A060);
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
