#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FODAGGODIJM;
namespace System { class Object; }

#define FODAGGODIJM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CAB90)
#define FODAGGODIJM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CABD0)
#define FODAGGODIJM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3CABE0)

inline static constexpr unsigned int FODAGGODIJM___c_TypeDefinitionIndex = 30738;

	class FODAGGODIJM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FODAGGODIJM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM___C_CTOR_OFFSET))(this);
		}

		::FODAGGODIJM* __cctor_b__28_0()
		{
			return ((::FODAGGODIJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FODAGGODIJM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
