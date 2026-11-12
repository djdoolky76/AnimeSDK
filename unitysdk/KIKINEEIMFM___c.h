#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIKINEEIMFM;
namespace System { class Object; }

#define KIKINEEIMFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB7CE40)
#define KIKINEEIMFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB7CE80)
#define KIKINEEIMFM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FB7CE90)

inline static constexpr unsigned int KIKINEEIMFM___c_TypeDefinitionIndex = 33139;

	class KIKINEEIMFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIKINEEIMFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM___C_CTOR_OFFSET))(this);
		}

		::KIKINEEIMFM* __cctor_b__18_0()
		{
			return ((::KIKINEEIMFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIKINEEIMFM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
