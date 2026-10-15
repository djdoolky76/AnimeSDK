#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFMLKIIOGBP;
namespace System { class Object; }

#define HFMLKIIOGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56FCF0)
#define HFMLKIIOGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56FD30)
#define HFMLKIIOGBP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E56FD40)

inline static constexpr unsigned int HFMLKIIOGBP___c_TypeDefinitionIndex = 34379;

	class HFMLKIIOGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFMLKIIOGBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP___C_CTOR_OFFSET))(this);
		}

		::HFMLKIIOGBP* __cctor_b__23_0()
		{
			return ((::HFMLKIIOGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMLKIIOGBP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
