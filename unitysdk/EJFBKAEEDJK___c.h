#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJFBKAEEDJK;
namespace System { class Object; }

#define EJFBKAEEDJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B5890)
#define EJFBKAEEDJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B58C0)
#define EJFBKAEEDJK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2B58D0)

inline static constexpr unsigned int EJFBKAEEDJK___c_TypeDefinitionIndex = 30790;

	class EJFBKAEEDJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFBKAEEDJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFBKAEEDJK___C_CTOR_OFFSET))(this);
		}

		::EJFBKAEEDJK* __cctor_b__18_0()
		{
			return ((::EJFBKAEEDJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFBKAEEDJK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
