#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCEJICPPKKM;
namespace System { class Object; }

#define KCEJICPPKKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7C70)
#define KCEJICPPKKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C7CB0)
#define KCEJICPPKKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C7CC0)

inline static constexpr unsigned int KCEJICPPKKM___c_TypeDefinitionIndex = 32443;

	class KCEJICPPKKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCEJICPPKKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM___C_CTOR_OFFSET))(this);
		}

		::KCEJICPPKKM* __cctor_b__23_0()
		{
			return ((::KCEJICPPKKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCEJICPPKKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
