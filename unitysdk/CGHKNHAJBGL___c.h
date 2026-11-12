#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGHKNHAJBGL;
namespace System { class Object; }

#define CGHKNHAJBGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F378440)
#define CGHKNHAJBGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F378480)
#define CGHKNHAJBGL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F378490)

inline static constexpr unsigned int CGHKNHAJBGL___c_TypeDefinitionIndex = 28348;

	class CGHKNHAJBGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xBC30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGHKNHAJBGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHKNHAJBGL___C_CTOR_OFFSET))(this);
		}

		::CGHKNHAJBGL* __cctor_b__33_0()
		{
			return ((::CGHKNHAJBGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHKNHAJBGL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
