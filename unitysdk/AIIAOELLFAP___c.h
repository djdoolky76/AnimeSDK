#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIIAOELLFAP;
namespace System { class Object; }

#define AIIAOELLFAP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205095A0)
#define AIIAOELLFAP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205095E0)
#define AIIAOELLFAP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x205095F0)

inline static constexpr unsigned int AIIAOELLFAP___c_TypeDefinitionIndex = 28544;

	class AIIAOELLFAP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30F90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIIAOELLFAP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP___C_CTOR_OFFSET))(this);
		}

		::AIIAOELLFAP* __cctor_b__38_0()
		{
			return ((::AIIAOELLFAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIIAOELLFAP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
