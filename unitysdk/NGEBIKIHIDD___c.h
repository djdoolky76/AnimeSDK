#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGEBIKIHIDD;
namespace System { class Object; }

#define NGEBIKIHIDD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D0C0)
#define NGEBIKIHIDD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0D100)
#define NGEBIKIHIDD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB0D110)

inline static constexpr unsigned int NGEBIKIHIDD___c_TypeDefinitionIndex = 32903;

	class NGEBIKIHIDD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F2C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGEBIKIHIDD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD___C_CTOR_OFFSET))(this);
		}

		::NGEBIKIHIDD* __cctor_b__28_0()
		{
			return ((::NGEBIKIHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGEBIKIHIDD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
