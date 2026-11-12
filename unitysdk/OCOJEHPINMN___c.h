#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCOJEHPINMN;
namespace System { class Object; }

#define OCOJEHPINMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0B9B20)
#define OCOJEHPINMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0B9B60)
#define OCOJEHPINMN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F0B9B70)

inline static constexpr unsigned int OCOJEHPINMN___c_TypeDefinitionIndex = 27332;

	class OCOJEHPINMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCOJEHPINMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN___C_CTOR_OFFSET))(this);
		}

		::OCOJEHPINMN* __cctor_b__33_0()
		{
			return ((::OCOJEHPINMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCOJEHPINMN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
