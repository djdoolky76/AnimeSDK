#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHJJOIHCOML;
namespace System { class Object; }

#define AHJJOIHCOML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F526320)
#define AHJJOIHCOML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F526350)
#define AHJJOIHCOML___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F526360)

inline static constexpr unsigned int AHJJOIHCOML___c_TypeDefinitionIndex = 32460;

	class AHJJOIHCOML___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHJJOIHCOML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML___C_CTOR_OFFSET))(this);
		}

		::AHJJOIHCOML* __cctor_b__18_0()
		{
			return ((::AHJJOIHCOML*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJJOIHCOML___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
