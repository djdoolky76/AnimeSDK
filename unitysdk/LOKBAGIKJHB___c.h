#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOKBAGIKJHB;
namespace System { class Object; }

#define LOKBAGIKJHB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200D9900)
#define LOKBAGIKJHB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200D9930)
#define LOKBAGIKJHB___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x200D9940)

inline static constexpr unsigned int LOKBAGIKJHB___c_TypeDefinitionIndex = 25792;

	class LOKBAGIKJHB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LOKBAGIKJHB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB___C_CTOR_OFFSET))(this);
		}

		::LOKBAGIKJHB* __cctor_b__38_0()
		{
			return ((::LOKBAGIKJHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKBAGIKJHB___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
