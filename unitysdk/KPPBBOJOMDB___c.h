#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPPBBOJOMDB;
namespace System { class Object; }

#define KPPBBOJOMDB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBFFFE0)
#define KPPBBOJOMDB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC00020)
#define KPPBBOJOMDB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1FC00030)

inline static constexpr unsigned int KPPBBOJOMDB___c_TypeDefinitionIndex = 34728;

	class KPPBBOJOMDB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPPBBOJOMDB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB___C_CTOR_OFFSET))(this);
		}

		::KPPBBOJOMDB* __cctor_b__38_0()
		{
			return ((::KPPBBOJOMDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPPBBOJOMDB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
