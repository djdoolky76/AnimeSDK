#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFOCLBEMIEM;
namespace System { class Object; }

#define LFOCLBEMIEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E946D30)
#define LFOCLBEMIEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E946D70)
#define LFOCLBEMIEM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E946D80)

inline static constexpr unsigned int LFOCLBEMIEM___c_TypeDefinitionIndex = 29257;

	class LFOCLBEMIEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFOCLBEMIEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM___C_CTOR_OFFSET))(this);
		}

		::LFOCLBEMIEM* __cctor_b__38_0()
		{
			return ((::LFOCLBEMIEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFOCLBEMIEM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
