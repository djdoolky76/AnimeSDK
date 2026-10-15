#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBDAPMIPEON;
namespace System { class Object; }

#define MBDAPMIPEON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B4AB0)
#define MBDAPMIPEON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B4AE0)
#define MBDAPMIPEON___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9B4AF0)

inline static constexpr unsigned int MBDAPMIPEON___c_TypeDefinitionIndex = 35003;

	class MBDAPMIPEON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBDAPMIPEON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON___C_CTOR_OFFSET))(this);
		}

		::MBDAPMIPEON* __cctor_b__18_0()
		{
			return ((::MBDAPMIPEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBDAPMIPEON___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
