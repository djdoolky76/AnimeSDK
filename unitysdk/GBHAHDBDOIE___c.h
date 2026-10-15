#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHAHDBDOIE;
namespace System { class Object; }

#define GBHAHDBDOIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42B040)
#define GBHAHDBDOIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42B080)
#define GBHAHDBDOIE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E42B090)

inline static constexpr unsigned int GBHAHDBDOIE___c_TypeDefinitionIndex = 32971;

	class GBHAHDBDOIE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCF50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHAHDBDOIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE___C_CTOR_OFFSET))(this);
		}

		::GBHAHDBDOIE* __cctor_b__23_0()
		{
			return ((::GBHAHDBDOIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHAHDBDOIE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
