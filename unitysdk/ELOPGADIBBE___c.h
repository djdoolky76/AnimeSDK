#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELOPGADIBBE;
namespace System { class Object; }

#define ELOPGADIBBE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206D12E0)
#define ELOPGADIBBE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206D1320)
#define ELOPGADIBBE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x206D1330)

inline static constexpr unsigned int ELOPGADIBBE___c_TypeDefinitionIndex = 26464;

	class ELOPGADIBBE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47ED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELOPGADIBBE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE___C_CTOR_OFFSET))(this);
		}

		::ELOPGADIBBE* __cctor_b__28_0()
		{
			return ((::ELOPGADIBBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELOPGADIBBE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
