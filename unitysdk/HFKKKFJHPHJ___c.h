#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKKFJHPHJ;
namespace System { class Object; }

#define HFKKKFJHPHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAEF8C0)
#define HFKKKFJHPHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAEF900)
#define HFKKKFJHPHJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FAEF910)

inline static constexpr unsigned int HFKKKFJHPHJ___c_TypeDefinitionIndex = 26133;

	class HFKKKFJHPHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B8C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKKKFJHPHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ___C_CTOR_OFFSET))(this);
		}

		::HFKKKFJHPHJ* __cctor_b__33_0()
		{
			return ((::HFKKKFJHPHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKKFJHPHJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
