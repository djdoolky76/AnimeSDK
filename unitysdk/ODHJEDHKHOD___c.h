#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODHJEDHKHOD;
namespace System { class Object; }

#define ODHJEDHKHOD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E160)
#define ODHJEDHKHOD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE1E190)
#define ODHJEDHKHOD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DE1E1A0)

inline static constexpr unsigned int ODHJEDHKHOD___c_TypeDefinitionIndex = 33122;

	class ODHJEDHKHOD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13AC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODHJEDHKHOD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD___C_CTOR_OFFSET))(this);
		}

		::ODHJEDHKHOD* __cctor_b__28_0()
		{
			return ((::ODHJEDHKHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODHJEDHKHOD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
