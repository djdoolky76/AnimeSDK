#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCIEGDGJMBE;
namespace System { class Object; }

#define KCIEGDGJMBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA8D0)
#define KCIEGDGJMBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CA910)
#define KCIEGDGJMBE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7CA920)

inline static constexpr unsigned int KCIEGDGJMBE___c_TypeDefinitionIndex = 25560;

	class KCIEGDGJMBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCIEGDGJMBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE___C_CTOR_OFFSET))(this);
		}

		::KCIEGDGJMBE* __cctor_b__38_0()
		{
			return ((::KCIEGDGJMBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCIEGDGJMBE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
