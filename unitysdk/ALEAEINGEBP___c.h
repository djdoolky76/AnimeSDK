#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALEAEINGEBP;
namespace System { class Object; }

#define ALEAEINGEBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20019220)
#define ALEAEINGEBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20019260)
#define ALEAEINGEBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20019270)

inline static constexpr unsigned int ALEAEINGEBP___c_TypeDefinitionIndex = 30784;

	class ALEAEINGEBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36E60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALEAEINGEBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP___C_CTOR_OFFSET))(this);
		}

		::ALEAEINGEBP* __cctor_b__28_0()
		{
			return ((::ALEAEINGEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALEAEINGEBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
