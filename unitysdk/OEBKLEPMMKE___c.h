#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEBKLEPMMKE;
namespace System { class Object; }

#define OEBKLEPMMKE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0C5420)
#define OEBKLEPMMKE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C5460)
#define OEBKLEPMMKE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F0C5470)

inline static constexpr unsigned int OEBKLEPMMKE___c_TypeDefinitionIndex = 30155;

	class OEBKLEPMMKE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEDB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEBKLEPMMKE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE___C_CTOR_OFFSET))(this);
		}

		::OEBKLEPMMKE* __cctor_b__28_0()
		{
			return ((::OEBKLEPMMKE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEBKLEPMMKE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
