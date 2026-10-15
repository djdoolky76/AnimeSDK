#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBCEOICLAB;
namespace System { class Object; }

#define BFBCEOICLAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3E070)
#define BFBCEOICLAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3E0B0)
#define BFBCEOICLAB___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1EA3E0C0)

inline static constexpr unsigned int BFBCEOICLAB___c_TypeDefinitionIndex = 28296;

	class BFBCEOICLAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFBCEOICLAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBCEOICLAB___C_CTOR_OFFSET))(this);
		}

		::BFBCEOICLAB* __cctor_b__88_0()
		{
			return ((::BFBCEOICLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBCEOICLAB___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
