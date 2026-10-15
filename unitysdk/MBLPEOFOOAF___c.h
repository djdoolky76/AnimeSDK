#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBLPEOFOOAF;
namespace System { class Object; }

#define MBLPEOFOOAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9BC460)
#define MBLPEOFOOAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9BC4A0)
#define MBLPEOFOOAF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9BC4B0)

inline static constexpr unsigned int MBLPEOFOOAF___c_TypeDefinitionIndex = 32584;

	class MBLPEOFOOAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x480E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C_CTOR_OFFSET))(this);
		}

		::MBLPEOFOOAF* __cctor_b__33_0()
		{
			return ((::MBLPEOFOOAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBLPEOFOOAF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
