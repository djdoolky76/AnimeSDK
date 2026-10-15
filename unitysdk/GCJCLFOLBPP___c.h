#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCJCLFOLBPP;
namespace System { class Object; }

#define GCJCLFOLBPP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E43FE10)
#define GCJCLFOLBPP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E43FE40)
#define GCJCLFOLBPP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E43FE50)

inline static constexpr unsigned int GCJCLFOLBPP___c_TypeDefinitionIndex = 28452;

	class GCJCLFOLBPP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCJCLFOLBPP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP___C_CTOR_OFFSET))(this);
		}

		::GCJCLFOLBPP* __cctor_b__38_0()
		{
			return ((::GCJCLFOLBPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCJCLFOLBPP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
