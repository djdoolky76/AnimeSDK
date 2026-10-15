#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHOCOJLJPPA;
namespace System { class Object; }

#define DHOCOJLJPPA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18C5E0)
#define DHOCOJLJPPA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18C620)
#define DHOCOJLJPPA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E18C630)

inline static constexpr unsigned int DHOCOJLJPPA___c_TypeDefinitionIndex = 29553;

	class DHOCOJLJPPA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30FA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C_CTOR_OFFSET))(this);
		}

		::DHOCOJLJPPA* __cctor_b__28_0()
		{
			return ((::DHOCOJLJPPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHOCOJLJPPA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
