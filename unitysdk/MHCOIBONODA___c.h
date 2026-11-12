#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHCOIBONODA;
namespace System { class Object; }

#define MHCOIBONODA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD7EB20)
#define MHCOIBONODA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD7EB60)
#define MHCOIBONODA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FD7EB70)

inline static constexpr unsigned int MHCOIBONODA___c_TypeDefinitionIndex = 30245;

	class MHCOIBONODA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHCOIBONODA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCOIBONODA___C_CTOR_OFFSET))(this);
		}

		::MHCOIBONODA* __cctor_b__43_0()
		{
			return ((::MHCOIBONODA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHCOIBONODA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
