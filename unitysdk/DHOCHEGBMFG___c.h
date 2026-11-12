#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOCHEGBMFG;
namespace System { class Object; }

#define DHOCHEGBMFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F494A80)
#define DHOCHEGBMFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F494AB0)
#define DHOCHEGBMFG___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1F494AC0)

inline static constexpr unsigned int DHOCHEGBMFG___c_TypeDefinitionIndex = 34878;

	class DHOCHEGBMFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOCHEGBMFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCHEGBMFG___C_CTOR_OFFSET))(this);
		}

		::DHOCHEGBMFG* __cctor_b__38_0()
		{
			return ((::DHOCHEGBMFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCHEGBMFG___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
