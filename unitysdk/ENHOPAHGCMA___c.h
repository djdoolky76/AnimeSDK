#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENHOPAHGCMA;
namespace System { class Object; }

#define ENHOPAHGCMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2C24F0)
#define ENHOPAHGCMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2C2520)
#define ENHOPAHGCMA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E2C2530)

inline static constexpr unsigned int ENHOPAHGCMA___c_TypeDefinitionIndex = 34330;

	class ENHOPAHGCMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44EE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C_CTOR_OFFSET))(this);
		}

		::ENHOPAHGCMA* __cctor_b__43_0()
		{
			return ((::ENHOPAHGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHOPAHGCMA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
