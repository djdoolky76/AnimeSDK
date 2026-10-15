#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDCHLCIOEI;
namespace System { class Object; }

#define MEDCHLCIOEI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DBC90)
#define MEDCHLCIOEI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DBCD0)
#define MEDCHLCIOEI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9DBCE0)

inline static constexpr unsigned int MEDCHLCIOEI___c_TypeDefinitionIndex = 34775;

	class MEDCHLCIOEI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4CFA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEDCHLCIOEI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCHLCIOEI___C_CTOR_OFFSET))(this);
		}

		::MEDCHLCIOEI* __cctor_b__23_0()
		{
			return ((::MEDCHLCIOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDCHLCIOEI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
