#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICKLANINJDB;
namespace System { class Object; }

#define ICKLANINJDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F93F8D0)
#define ICKLANINJDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F93F910)
#define ICKLANINJDB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F93F920)

inline static constexpr unsigned int ICKLANINJDB___c_TypeDefinitionIndex = 29095;

	class ICKLANINJDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICKLANINJDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB___C_CTOR_OFFSET))(this);
		}

		::ICKLANINJDB* __cctor_b__33_0()
		{
			return ((::ICKLANINJDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICKLANINJDB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
