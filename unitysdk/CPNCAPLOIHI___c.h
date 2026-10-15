#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPNCAPLOIHI;
namespace System { class Object; }

#define CPNCAPLOIHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E119680)
#define CPNCAPLOIHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1196C0)
#define CPNCAPLOIHI___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E1196D0)

inline static constexpr unsigned int CPNCAPLOIHI___c_TypeDefinitionIndex = 25644;

	class CPNCAPLOIHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20610);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPNCAPLOIHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI___C_CTOR_OFFSET))(this);
		}

		::CPNCAPLOIHI* __cctor_b__48_0()
		{
			return ((::CPNCAPLOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCAPLOIHI___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
