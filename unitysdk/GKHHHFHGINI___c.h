#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKHHHFHGINI;
namespace System { class Object; }

#define GKHHHFHGINI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4883D0)
#define GKHHHFHGINI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E488410)
#define GKHHHFHGINI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E488420)

inline static constexpr unsigned int GKHHHFHGINI___c_TypeDefinitionIndex = 30605;

	class GKHHHFHGINI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1BBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKHHHFHGINI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI___C_CTOR_OFFSET))(this);
		}

		::GKHHHFHGINI* __cctor_b__48_0()
		{
			return ((::GKHHHFHGINI*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKHHHFHGINI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
