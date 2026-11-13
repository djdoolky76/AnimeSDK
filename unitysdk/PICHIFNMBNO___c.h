#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PICHIFNMBNO;
namespace System { class Object; }

#define PICHIFNMBNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20549D40)
#define PICHIFNMBNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20549D80)
#define PICHIFNMBNO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x20549D90)

inline static constexpr unsigned int PICHIFNMBNO___c_TypeDefinitionIndex = 27685;

	class PICHIFNMBNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PICHIFNMBNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO___C_CTOR_OFFSET))(this);
		}

		::PICHIFNMBNO* __cctor_b__33_0()
		{
			return ((::PICHIFNMBNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PICHIFNMBNO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
