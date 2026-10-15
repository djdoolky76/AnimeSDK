#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLAKIACAACO;
namespace System { class Object; }

#define CLAKIACAACO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F3000)
#define CLAKIACAACO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F3040)
#define CLAKIACAACO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E0F3050)

inline static constexpr unsigned int CLAKIACAACO___c_TypeDefinitionIndex = 26989;

	class CLAKIACAACO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLAKIACAACO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO___C_CTOR_OFFSET))(this);
		}

		::CLAKIACAACO* __cctor_b__43_0()
		{
			return ((::CLAKIACAACO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAKIACAACO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
