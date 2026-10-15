#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEDAEKHDOOC;
namespace System { class Object; }

#define OEDAEKHDOOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE25340)
#define OEDAEKHDOOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE25380)
#define OEDAEKHDOOC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE25390)

inline static constexpr unsigned int OEDAEKHDOOC___c_TypeDefinitionIndex = 26104;

	class OEDAEKHDOOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x146A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDAEKHDOOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC___C_CTOR_OFFSET))(this);
		}

		::OEDAEKHDOOC* __cctor_b__23_0()
		{
			return ((::OEDAEKHDOOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDAEKHDOOC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
