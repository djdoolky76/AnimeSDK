#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APNJBEGDHNJ;
namespace System { class Object; }

#define APNJBEGDHNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64D190)
#define APNJBEGDHNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64D1D0)
#define APNJBEGDHNJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E64D1E0)

inline static constexpr unsigned int APNJBEGDHNJ___c_TypeDefinitionIndex = 27672;

	class APNJBEGDHNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APNJBEGDHNJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ___C_CTOR_OFFSET))(this);
		}

		::APNJBEGDHNJ* __cctor_b__28_0()
		{
			return ((::APNJBEGDHNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + APNJBEGDHNJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
