#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POCKHIABCKH;
namespace System { class Object; }

#define POCKHIABCKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A180)
#define POCKHIABCKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9A1B0)
#define POCKHIABCKH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF9A1C0)

inline static constexpr unsigned int POCKHIABCKH___c_TypeDefinitionIndex = 25989;

	class POCKHIABCKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x446D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POCKHIABCKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POCKHIABCKH___C_CTOR_OFFSET))(this);
		}

		::POCKHIABCKH* __cctor_b__18_0()
		{
			return ((::POCKHIABCKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + POCKHIABCKH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
