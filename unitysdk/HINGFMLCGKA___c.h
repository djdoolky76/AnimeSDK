#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HINGFMLCGKA;
namespace System { class Object; }

#define HINGFMLCGKA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E571150)
#define HINGFMLCGKA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E571190)
#define HINGFMLCGKA___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5711A0)

inline static constexpr unsigned int HINGFMLCGKA___c_TypeDefinitionIndex = 34466;

	class HINGFMLCGKA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINGFMLCGKA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA___C_CTOR_OFFSET))(this);
		}

		::HINGFMLCGKA* __cctor_b__18_0()
		{
			return ((::HINGFMLCGKA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINGFMLCGKA___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
