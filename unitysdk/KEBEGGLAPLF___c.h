#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEBEGGLAPLF;
namespace System { class Object; }

#define KEBEGGLAPLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8096E0)
#define KEBEGGLAPLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E809710)
#define KEBEGGLAPLF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E809720)

inline static constexpr unsigned int KEBEGGLAPLF___c_TypeDefinitionIndex = 34536;

	class KEBEGGLAPLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEBEGGLAPLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF___C_CTOR_OFFSET))(this);
		}

		::KEBEGGLAPLF* __cctor_b__28_0()
		{
			return ((::KEBEGGLAPLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBEGGLAPLF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
