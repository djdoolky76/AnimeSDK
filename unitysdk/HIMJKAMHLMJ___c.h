#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIMJKAMHLMJ;
namespace System { class Object; }

#define HIMJKAMHLMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20526D90)
#define HIMJKAMHLMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20526DC0)
#define HIMJKAMHLMJ___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x20526DD0)

inline static constexpr unsigned int HIMJKAMHLMJ___c_TypeDefinitionIndex = 27855;

	class HIMJKAMHLMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C_CTOR_OFFSET))(this);
		}

		::HIMJKAMHLMJ* __cctor_b__48_0()
		{
			return ((::HIMJKAMHLMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIMJKAMHLMJ___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
