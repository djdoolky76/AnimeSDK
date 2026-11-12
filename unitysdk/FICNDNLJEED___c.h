#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FICNDNLJEED;
namespace System { class Object; }

#define FICNDNLJEED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69B070)
#define FICNDNLJEED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F69B0A0)
#define FICNDNLJEED___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F69B0B0)

inline static constexpr unsigned int FICNDNLJEED___c_TypeDefinitionIndex = 27317;

	class FICNDNLJEED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FICNDNLJEED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED___C_CTOR_OFFSET))(this);
		}

		::FICNDNLJEED* __cctor_b__18_0()
		{
			return ((::FICNDNLJEED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FICNDNLJEED___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
