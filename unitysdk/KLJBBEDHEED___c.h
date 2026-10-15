#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLJBBEDHEED;
namespace System { class Object; }

#define KLJBBEDHEED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E860F90)
#define KLJBBEDHEED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E860FD0)
#define KLJBBEDHEED___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E860FE0)

inline static constexpr unsigned int KLJBBEDHEED___c_TypeDefinitionIndex = 28120;

	class KLJBBEDHEED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLJBBEDHEED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED___C_CTOR_OFFSET))(this);
		}

		::KLJBBEDHEED* __cctor_b__33_0()
		{
			return ((::KLJBBEDHEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLJBBEDHEED___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
