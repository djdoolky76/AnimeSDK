#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIBKOLLMPMM;
namespace System { class Object; }

#define FIBKOLLMPMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F69AAD0)
#define FIBKOLLMPMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F69AB10)
#define FIBKOLLMPMM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F69AB20)

inline static constexpr unsigned int FIBKOLLMPMM___c_TypeDefinitionIndex = 27593;

	class FIBKOLLMPMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C_CTOR_OFFSET))(this);
		}

		::FIBKOLLMPMM* __cctor_b__18_0()
		{
			return ((::FIBKOLLMPMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIBKOLLMPMM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
