#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDGIOENHBEJ;
namespace System { class Object; }

#define MDGIOENHBEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5790)
#define MDGIOENHBEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D57D0)
#define MDGIOENHBEJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E9D57E0)

inline static constexpr unsigned int MDGIOENHBEJ___c_TypeDefinitionIndex = 25716;

	class MDGIOENHBEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BE90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDGIOENHBEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ___C_CTOR_OFFSET))(this);
		}

		::MDGIOENHBEJ* __cctor_b__38_0()
		{
			return ((::MDGIOENHBEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGIOENHBEJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
