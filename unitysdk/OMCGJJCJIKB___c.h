#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMCGJJCJIKB;
namespace System { class Object; }

#define OMCGJJCJIKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE83090)
#define OMCGJJCJIKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE830C0)
#define OMCGJJCJIKB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE830D0)

inline static constexpr unsigned int OMCGJJCJIKB___c_TypeDefinitionIndex = 34157;

	class OMCGJJCJIKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMCGJJCJIKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCGJJCJIKB___C_CTOR_OFFSET))(this);
		}

		::OMCGJJCJIKB* __cctor_b__28_0()
		{
			return ((::OMCGJJCJIKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMCGJJCJIKB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
