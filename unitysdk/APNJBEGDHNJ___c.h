#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APNJBEGDHNJ;
namespace System { class Object; }

#define APNJBEGDHNJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2056C040)
#define APNJBEGDHNJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2056C080)
#define APNJBEGDHNJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2056C090)

inline static constexpr unsigned int APNJBEGDHNJ___c_TypeDefinitionIndex = 28203;

	class APNJBEGDHNJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40290);
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
