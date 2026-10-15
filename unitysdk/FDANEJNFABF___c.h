#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDANEJNFABF;
namespace System { class Object; }

#define FDANEJNFABF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3236B0)
#define FDANEJNFABF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3236E0)
#define FDANEJNFABF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3236F0)

inline static constexpr unsigned int FDANEJNFABF___c_TypeDefinitionIndex = 34426;

	class FDANEJNFABF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x51D60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDANEJNFABF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF___C_CTOR_OFFSET))(this);
		}

		::FDANEJNFABF* __cctor_b__28_0()
		{
			return ((::FDANEJNFABF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDANEJNFABF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
