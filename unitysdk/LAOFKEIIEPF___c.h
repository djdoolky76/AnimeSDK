#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAOFKEIIEPF;
namespace System { class Object; }

#define LAOFKEIIEPF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3F20)
#define LAOFKEIIEPF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A3F60)
#define LAOFKEIIEPF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E8A3F70)

inline static constexpr unsigned int LAOFKEIIEPF___c_TypeDefinitionIndex = 27576;

	class LAOFKEIIEPF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAOFKEIIEPF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF___C_CTOR_OFFSET))(this);
		}

		::LAOFKEIIEPF* __cctor_b__23_0()
		{
			return ((::LAOFKEIIEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAOFKEIIEPF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
