#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INPJIEHGCEG;
namespace System { class Object; }

#define INPJIEHGCEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9D0530)
#define INPJIEHGCEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9D0570)
#define INPJIEHGCEG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F9D0580)

inline static constexpr unsigned int INPJIEHGCEG___c_TypeDefinitionIndex = 33131;

	class INPJIEHGCEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INPJIEHGCEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG___C_CTOR_OFFSET))(this);
		}

		::INPJIEHGCEG* __cctor_b__33_0()
		{
			return ((::INPJIEHGCEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + INPJIEHGCEG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
