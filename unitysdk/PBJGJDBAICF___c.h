#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBJGJDBAICF;
namespace System { class Object; }

#define PBJGJDBAICF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBEBD20)
#define PBJGJDBAICF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBEBD60)
#define PBJGJDBAICF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FBEBD70)

inline static constexpr unsigned int PBJGJDBAICF___c_TypeDefinitionIndex = 27323;

	class PBJGJDBAICF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PBJGJDBAICF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF___C_CTOR_OFFSET))(this);
		}

		::PBJGJDBAICF* __cctor_b__28_0()
		{
			return ((::PBJGJDBAICF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBJGJDBAICF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
