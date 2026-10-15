#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFHOCOBPMK;
namespace System { class Object; }

#define DBFHOCOBPMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15AE60)
#define DBFHOCOBPMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15AEA0)
#define DBFHOCOBPMK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E15AEB0)

inline static constexpr unsigned int DBFHOCOBPMK___c_TypeDefinitionIndex = 28923;

	class DBFHOCOBPMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFHOCOBPMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK___C_CTOR_OFFSET))(this);
		}

		::DBFHOCOBPMK* __cctor_b__33_0()
		{
			return ((::DBFHOCOBPMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFHOCOBPMK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
