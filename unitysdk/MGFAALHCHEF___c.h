#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGFAALHCHEF;
namespace System { class Object; }

#define MGFAALHCHEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD74150)
#define MGFAALHCHEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD74190)
#define MGFAALHCHEF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FD741A0)

inline static constexpr unsigned int MGFAALHCHEF___c_TypeDefinitionIndex = 31761;

	class MGFAALHCHEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGFAALHCHEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF___C_CTOR_OFFSET))(this);
		}

		::MGFAALHCHEF* __cctor_b__38_0()
		{
			return ((::MGFAALHCHEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFAALHCHEF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
