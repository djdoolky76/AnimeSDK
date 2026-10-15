#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMJNABCJMM;
namespace System { class Object; }

#define HIMJNABCJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59D100)
#define HIMJNABCJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59D130)
#define HIMJNABCJMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E59D140)

inline static constexpr unsigned int HIMJNABCJMM___c_TypeDefinitionIndex = 33139;

	class HIMJNABCJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E7C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJNABCJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM___C_CTOR_OFFSET))(this);
		}

		::HIMJNABCJMM* __cctor_b__23_0()
		{
			return ((::HIMJNABCJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJNABCJMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
