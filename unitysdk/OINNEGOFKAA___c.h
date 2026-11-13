#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OINNEGOFKAA;
namespace System { class Object; }

#define OINNEGOFKAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F696D20)
#define OINNEGOFKAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F696D60)
#define OINNEGOFKAA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F696D70)

inline static constexpr unsigned int OINNEGOFKAA___c_TypeDefinitionIndex = 25654;

	class OINNEGOFKAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B0F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OINNEGOFKAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA___C_CTOR_OFFSET))(this);
		}

		::OINNEGOFKAA* __cctor_b__43_0()
		{
			return ((::OINNEGOFKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OINNEGOFKAA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
