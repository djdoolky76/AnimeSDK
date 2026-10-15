#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADBNDDAJGBP;
namespace System { class Object; }

#define ADBNDDAJGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0AC0)
#define ADBNDDAJGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0B00)
#define ADBNDDAJGBP___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1DDE0B10)

inline static constexpr unsigned int ADBNDDAJGBP___c_TypeDefinitionIndex = 28904;

	class ADBNDDAJGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B7D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADBNDDAJGBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBNDDAJGBP___C_CTOR_OFFSET))(this);
		}

		::ADBNDDAJGBP* __cctor_b__53_0()
		{
			return ((::ADBNDDAJGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADBNDDAJGBP___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
