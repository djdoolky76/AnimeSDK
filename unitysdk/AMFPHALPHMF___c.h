#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFPHALPHMF;
namespace System { class Object; }

#define AMFPHALPHMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7DC750)
#define AMFPHALPHMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7DC790)
#define AMFPHALPHMF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7DC7A0)

inline static constexpr unsigned int AMFPHALPHMF___c_TypeDefinitionIndex = 29767;

	class AMFPHALPHMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3FE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFPHALPHMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF___C_CTOR_OFFSET))(this);
		}

		::AMFPHALPHMF* __cctor_b__28_0()
		{
			return ((::AMFPHALPHMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFPHALPHMF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
