#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJBIFIMJDOL;
namespace System { class Object; }

#define BJBIFIMJDOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1646D0)
#define BJBIFIMJDOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F164710)
#define BJBIFIMJDOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F164720)

inline static constexpr unsigned int BJBIFIMJDOL___c_TypeDefinitionIndex = 34223;

	class BJBIFIMJDOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4B050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJBIFIMJDOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL___C_CTOR_OFFSET))(this);
		}

		::BJBIFIMJDOL* __cctor_b__33_0()
		{
			return ((::BJBIFIMJDOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJBIFIMJDOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
