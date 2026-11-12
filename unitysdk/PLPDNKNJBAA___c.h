#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLPDNKNJBAA;
namespace System { class Object; }

#define PLPDNKNJBAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F258BD0)
#define PLPDNKNJBAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F258C10)
#define PLPDNKNJBAA___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F258C20)

inline static constexpr unsigned int PLPDNKNJBAA___c_TypeDefinitionIndex = 32802;

	class PLPDNKNJBAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EF90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPDNKNJBAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPDNKNJBAA___C_CTOR_OFFSET))(this);
		}

		::PLPDNKNJBAA* __cctor_b__48_0()
		{
			return ((::PLPDNKNJBAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPDNKNJBAA___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
