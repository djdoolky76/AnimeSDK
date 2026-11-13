#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOJOHDFGJLB;
namespace System { class Object; }

#define DOJOHDFGJLB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F75CC10)
#define DOJOHDFGJLB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F75CC50)
#define DOJOHDFGJLB___C___CCTOR_B__52_0_OFFSET UNITYSDK_OFFSET(0x1F75CC60)

inline static constexpr unsigned int DOJOHDFGJLB___c_TypeDefinitionIndex = 30772;

	class DOJOHDFGJLB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C_CTOR_OFFSET))(this);
		}

		::DOJOHDFGJLB* __cctor_b__52_0()
		{
			return ((::DOJOHDFGJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOJOHDFGJLB___C___CCTOR_B__52_0_OFFSET))(this);
		}

	};
