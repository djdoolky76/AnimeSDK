#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDDEOKAIJAB;
namespace System { class Object; }

#define EDDEOKAIJAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F381CF0)
#define EDDEOKAIJAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F381D30)
#define EDDEOKAIJAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F381D40)

inline static constexpr unsigned int EDDEOKAIJAB___c_TypeDefinitionIndex = 33960;

	class EDDEOKAIJAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDDEOKAIJAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB___C_CTOR_OFFSET))(this);
		}

		::EDDEOKAIJAB* __cctor_b__23_0()
		{
			return ((::EDDEOKAIJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDDEOKAIJAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
