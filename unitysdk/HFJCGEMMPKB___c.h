#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFJCGEMMPKB;
namespace System { class Object; }

#define HFJCGEMMPKB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E53F940)
#define HFJCGEMMPKB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53F980)
#define HFJCGEMMPKB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E53F990)

inline static constexpr unsigned int HFJCGEMMPKB___c_TypeDefinitionIndex = 35136;

	class HFJCGEMMPKB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F9B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C_CTOR_OFFSET))(this);
		}

		::HFJCGEMMPKB* __cctor_b__23_0()
		{
			return ((::HFJCGEMMPKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFJCGEMMPKB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
