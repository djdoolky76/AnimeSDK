#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLHCGOFNPLA;
namespace System { class Object; }

#define FLHCGOFNPLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6C2D20)
#define FLHCGOFNPLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6C2D60)
#define FLHCGOFNPLA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F6C2D70)

inline static constexpr unsigned int FLHCGOFNPLA___c_TypeDefinitionIndex = 29416;

	class FLHCGOFNPLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLHCGOFNPLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA___C_CTOR_OFFSET))(this);
		}

		::FLHCGOFNPLA* __cctor_b__33_0()
		{
			return ((::FLHCGOFNPLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLHCGOFNPLA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
