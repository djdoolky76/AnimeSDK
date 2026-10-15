#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDOOEDOKEPF;
namespace System { class Object; }

#define DDOOEDOKEPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15EF20)
#define DDOOEDOKEPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15EF60)
#define DDOOEDOKEPF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E15EF70)

inline static constexpr unsigned int DDOOEDOKEPF___c_TypeDefinitionIndex = 30904;

	class DDOOEDOKEPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C_CTOR_OFFSET))(this);
		}

		::DDOOEDOKEPF* __cctor_b__28_0()
		{
			return ((::DDOOEDOKEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
