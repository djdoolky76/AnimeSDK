#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDLHODCINBI;
namespace System { class Object; }

#define DDLHODCINBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E188190)
#define DDLHODCINBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1881D0)
#define DDLHODCINBI___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E1881E0)

inline static constexpr unsigned int DDLHODCINBI___c_TypeDefinitionIndex = 28312;

	class DDLHODCINBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EEE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDLHODCINBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLHODCINBI___C_CTOR_OFFSET))(this);
		}

		::DDLHODCINBI* __cctor_b__108_0()
		{
			return ((::DDLHODCINBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDLHODCINBI___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
