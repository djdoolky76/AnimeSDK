#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGEIHMPCFKA;
namespace System { class Object; }

#define OGEIHMPCFKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F6590)
#define OGEIHMPCFKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F65D0)
#define OGEIHMPCFKA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0F65E0)

inline static constexpr unsigned int OGEIHMPCFKA___c_TypeDefinitionIndex = 30567;

	class OGEIHMPCFKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x135B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGEIHMPCFKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEIHMPCFKA___C_CTOR_OFFSET))(this);
		}

		::OGEIHMPCFKA* __cctor_b__33_0()
		{
			return ((::OGEIHMPCFKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGEIHMPCFKA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
