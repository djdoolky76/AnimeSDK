#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLNANAEDDEE;
namespace System { class Object; }

#define DLNANAEDDEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201D80E0)
#define DLNANAEDDEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201D8110)
#define DLNANAEDDEE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x201D8120)

inline static constexpr unsigned int DLNANAEDDEE___c_TypeDefinitionIndex = 34092;

	class DLNANAEDDEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x331F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLNANAEDDEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE___C_CTOR_OFFSET))(this);
		}

		::DLNANAEDDEE* __cctor_b__28_0()
		{
			return ((::DLNANAEDDEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLNANAEDDEE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
