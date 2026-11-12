#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEIHBAJCCAF;
namespace System { class Object; }

#define OEIHBAJCCAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0CEF90)
#define OEIHBAJCCAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0CEFC0)
#define OEIHBAJCCAF___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F0CEFD0)

inline static constexpr unsigned int OEIHBAJCCAF___c_TypeDefinitionIndex = 31164;

	class OEIHBAJCCAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFB90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEIHBAJCCAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIHBAJCCAF___C_CTOR_OFFSET))(this);
		}

		::OEIHBAJCCAF* __cctor_b__58_0()
		{
			return ((::OEIHBAJCCAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEIHBAJCCAF___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
