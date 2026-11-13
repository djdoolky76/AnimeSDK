#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBJJCCDDFLE;
namespace System { class Object; }

#define IBJJCCDDFLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203B0900)
#define IBJJCCDDFLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20121680)
#define IBJJCCDDFLE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x20121690)

inline static constexpr unsigned int IBJJCCDDFLE___c_TypeDefinitionIndex = 27889;

	class IBJJCCDDFLE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBJJCCDDFLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE___C_CTOR_OFFSET))(this);
		}

		::IBJJCCDDFLE* __cctor_b__38_0()
		{
			return ((::IBJJCCDDFLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBJJCCDDFLE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
