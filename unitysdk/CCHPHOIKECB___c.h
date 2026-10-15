#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCHPHOIKECB;
namespace System { class Object; }

#define CCHPHOIKECB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E075350)
#define CCHPHOIKECB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E075380)
#define CCHPHOIKECB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E075390)

inline static constexpr unsigned int CCHPHOIKECB___c_TypeDefinitionIndex = 26991;

	class CCHPHOIKECB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCHPHOIKECB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB___C_CTOR_OFFSET))(this);
		}

		::CCHPHOIKECB* __cctor_b__18_0()
		{
			return ((::CCHPHOIKECB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCHPHOIKECB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
