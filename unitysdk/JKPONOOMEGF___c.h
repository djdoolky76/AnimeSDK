#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JKPONOOMEGF;
namespace System { class Object; }

#define JKPONOOMEGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA0840)
#define JKPONOOMEGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA0880)
#define JKPONOOMEGF___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FAA0890)

inline static constexpr unsigned int JKPONOOMEGF___c_TypeDefinitionIndex = 32960;

	class JKPONOOMEGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKPONOOMEGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF___C_CTOR_OFFSET))(this);
		}

		::JKPONOOMEGF* __cctor_b__43_0()
		{
			return ((::JKPONOOMEGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKPONOOMEGF___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
