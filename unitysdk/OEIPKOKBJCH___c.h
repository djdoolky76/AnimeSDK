#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEIPKOKBJCH;
namespace System { class Object; }

#define OEIPKOKBJCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CE60)
#define OEIPKOKBJCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE2CEA0)
#define OEIPKOKBJCH___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1DE2CEB0)

inline static constexpr unsigned int OEIPKOKBJCH___c_TypeDefinitionIndex = 32619;

	class OEIPKOKBJCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x151E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEIPKOKBJCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH___C_CTOR_OFFSET))(this);
		}

		::OEIPKOKBJCH* __cctor_b__43_0()
		{
			return ((::OEIPKOKBJCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIPKOKBJCH___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
