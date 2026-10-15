#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEMBKIAENOA;
namespace System { class Object; }

#define IEMBKIAENOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63EAC0)
#define IEMBKIAENOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63EB00)
#define IEMBKIAENOA___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E63EB10)

	class IEMBKIAENOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEMBKIAENOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMBKIAENOA___C_CTOR_OFFSET))(this);
		}

		::IEMBKIAENOA* __cctor_b__108_0()
		{
			return ((::IEMBKIAENOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEMBKIAENOA___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
