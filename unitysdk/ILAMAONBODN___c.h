#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILAMAONBODN;
namespace System { class Object; }

#define ILAMAONBODN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6A6B50)
#define ILAMAONBODN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6A6B80)
#define ILAMAONBODN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E6A6B90)

	class ILAMAONBODN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAMAONBODN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAMAONBODN___C_CTOR_OFFSET))(this);
		}

		::ILAMAONBODN* __cctor_b__38_0()
		{
			return ((::ILAMAONBODN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAMAONBODN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
