#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGNOILONNI;
namespace System { class Object; }

#define NCGNOILONNI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFA20)
#define NCGNOILONNI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAAFA60)
#define NCGNOILONNI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAAFA70)

inline static constexpr unsigned int NCGNOILONNI___c_TypeDefinitionIndex = 27905;

	class NCGNOILONNI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGNOILONNI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI___C_CTOR_OFFSET))(this);
		}

		::NCGNOILONNI* __cctor_b__28_0()
		{
			return ((::NCGNOILONNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGNOILONNI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
