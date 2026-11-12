#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKHNMKLEMPL;
namespace System { class Object; }

#define FKHNMKLEMPL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6B6030)
#define FKHNMKLEMPL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6B6070)
#define FKHNMKLEMPL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6B6080)

inline static constexpr unsigned int FKHNMKLEMPL___c_TypeDefinitionIndex = 35937;

	class FKHNMKLEMPL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKHNMKLEMPL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL___C_CTOR_OFFSET))(this);
		}

		::FKHNMKLEMPL* __cctor_b__28_0()
		{
			return ((::FKHNMKLEMPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKHNMKLEMPL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
