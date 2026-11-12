#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCDAEIDEAM;
namespace System { class Object; }

#define ALCDAEIDEAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7C3B90)
#define ALCDAEIDEAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7C3BC0)
#define ALCDAEIDEAM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F7C3BD0)

inline static constexpr unsigned int ALCDAEIDEAM___c_TypeDefinitionIndex = 31809;

	class ALCDAEIDEAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3DE30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCDAEIDEAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM___C_CTOR_OFFSET))(this);
		}

		::ALCDAEIDEAM* __cctor_b__28_0()
		{
			return ((::ALCDAEIDEAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDAEIDEAM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
