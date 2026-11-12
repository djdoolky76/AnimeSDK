#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLIBAHPAKM;
namespace System { class Object; }

#define AKLIBAHPAKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68DD10)
#define AKLIBAHPAKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F68DD40)
#define AKLIBAHPAKM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F68DD50)

inline static constexpr unsigned int AKLIBAHPAKM___c_TypeDefinitionIndex = 35973;

	class AKLIBAHPAKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DCB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKLIBAHPAKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM___C_CTOR_OFFSET))(this);
		}

		::AKLIBAHPAKM* __cctor_b__18_0()
		{
			return ((::AKLIBAHPAKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKLIBAHPAKM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
