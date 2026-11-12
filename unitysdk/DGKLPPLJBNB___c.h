#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGKLPPLJBNB;
namespace System { class Object; }

#define DGKLPPLJBNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F48C0C0)
#define DGKLPPLJBNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F48C0F0)
#define DGKLPPLJBNB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F48C100)

inline static constexpr unsigned int DGKLPPLJBNB___c_TypeDefinitionIndex = 34292;

	class DGKLPPLJBNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C_CTOR_OFFSET))(this);
		}

		::DGKLPPLJBNB* __cctor_b__33_0()
		{
			return ((::DGKLPPLJBNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGKLPPLJBNB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
