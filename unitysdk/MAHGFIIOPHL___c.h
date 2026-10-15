#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAHGFIIOPHL;
namespace System { class Object; }

#define MAHGFIIOPHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9AD250)
#define MAHGFIIOPHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9AD290)
#define MAHGFIIOPHL___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E9AD2A0)

inline static constexpr unsigned int MAHGFIIOPHL___c_TypeDefinitionIndex = 33516;

	class MAHGFIIOPHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C_CTOR_OFFSET))(this);
		}

		::MAHGFIIOPHL* __cctor_b__48_0()
		{
			return ((::MAHGFIIOPHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAHGFIIOPHL___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
