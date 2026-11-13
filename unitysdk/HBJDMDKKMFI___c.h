#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBJDMDKKMFI;
namespace System { class Object; }

#define HBJDMDKKMFI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200AD510)
#define HBJDMDKKMFI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200AD550)
#define HBJDMDKKMFI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x200AD560)

inline static constexpr unsigned int HBJDMDKKMFI___c_TypeDefinitionIndex = 29515;

	class HBJDMDKKMFI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20DD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C_CTOR_OFFSET))(this);
		}

		::HBJDMDKKMFI* __cctor_b__23_0()
		{
			return ((::HBJDMDKKMFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJDMDKKMFI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
