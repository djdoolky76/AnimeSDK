#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGLCHFIKLPJ;
namespace System { class Object; }

#define CGLCHFIKLPJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD2A3D0)
#define CGLCHFIKLPJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2A410)
#define CGLCHFIKLPJ___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1FD2A420)

inline static constexpr unsigned int CGLCHFIKLPJ___c_TypeDefinitionIndex = 30382;

	class CGLCHFIKLPJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGLCHFIKLPJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCHFIKLPJ___C_CTOR_OFFSET))(this);
		}

		::CGLCHFIKLPJ* __cctor_b__32_0()
		{
			return ((::CGLCHFIKLPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGLCHFIKLPJ___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
