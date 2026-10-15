#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFACLOGFNJF;
namespace System { class Object; }

#define KFACLOGFNJF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E814320)
#define KFACLOGFNJF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E814350)
#define KFACLOGFNJF___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E814360)

inline static constexpr unsigned int KFACLOGFNJF___c_TypeDefinitionIndex = 27277;

	class KFACLOGFNJF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFACLOGFNJF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACLOGFNJF___C_CTOR_OFFSET))(this);
		}

		::KFACLOGFNJF* __cctor_b__98_0()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFACLOGFNJF___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
