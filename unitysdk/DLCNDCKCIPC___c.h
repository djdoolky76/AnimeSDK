#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCNDCKCIPC;
namespace System { class Object; }

#define DLCNDCKCIPC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0AE0)
#define DLCNDCKCIPC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1E0B10)
#define DLCNDCKCIPC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E1E0B20)

inline static constexpr unsigned int DLCNDCKCIPC___c_TypeDefinitionIndex = 27316;

	class DLCNDCKCIPC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCNDCKCIPC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC___C_CTOR_OFFSET))(this);
		}

		::DLCNDCKCIPC* __cctor_b__38_0()
		{
			return ((::DLCNDCKCIPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCNDCKCIPC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
