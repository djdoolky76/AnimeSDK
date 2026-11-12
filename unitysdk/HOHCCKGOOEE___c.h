#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOHCCKGOOEE;
namespace System { class Object; }

#define HOHCCKGOOEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5EF0)
#define HOHCCKGOOEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8E5F30)
#define HOHCCKGOOEE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8E5F40)

inline static constexpr unsigned int HOHCCKGOOEE___c_TypeDefinitionIndex = 26724;

	class HOHCCKGOOEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x401B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOHCCKGOOEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE___C_CTOR_OFFSET))(this);
		}

		::HOHCCKGOOEE* __cctor_b__23_0()
		{
			return ((::HOHCCKGOOEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
