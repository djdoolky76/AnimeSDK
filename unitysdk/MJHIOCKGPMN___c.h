#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJHIOCKGPMN;
namespace System { class Object; }

#define MJHIOCKGPMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD9BC50)
#define MJHIOCKGPMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD9BC80)
#define MJHIOCKGPMN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FD9BC90)

inline static constexpr unsigned int MJHIOCKGPMN___c_TypeDefinitionIndex = 31775;

	class MJHIOCKGPMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJHIOCKGPMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN___C_CTOR_OFFSET))(this);
		}

		::MJHIOCKGPMN* __cctor_b__18_0()
		{
			return ((::MJHIOCKGPMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJHIOCKGPMN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
