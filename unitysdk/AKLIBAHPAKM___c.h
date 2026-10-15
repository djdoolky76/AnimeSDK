#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKLIBAHPAKM;
namespace System { class Object; }

#define AKLIBAHPAKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0860)
#define AKLIBAHPAKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3D0890)
#define AKLIBAHPAKM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3D08A0)

inline static constexpr unsigned int AKLIBAHPAKM___c_TypeDefinitionIndex = 35045;

	class AKLIBAHPAKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x372B0);
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
