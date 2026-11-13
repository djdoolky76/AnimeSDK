#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEPPLBNOFF;
namespace System { class Object; }

#define CHEPPLBNOFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8370B0)
#define CHEPPLBNOFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8370F0)
#define CHEPPLBNOFF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F837100)

inline static constexpr unsigned int CHEPPLBNOFF___c_TypeDefinitionIndex = 33816;

	class CHEPPLBNOFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEPPLBNOFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF___C_CTOR_OFFSET))(this);
		}

		::CHEPPLBNOFF* __cctor_b__23_0()
		{
			return ((::CHEPPLBNOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEPPLBNOFF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
