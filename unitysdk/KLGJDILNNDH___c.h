#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLGJDILNNDH;
namespace System { class Object; }

#define KLGJDILNNDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E85E7A0)
#define KLGJDILNNDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E85E7E0)
#define KLGJDILNNDH___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1E85E7F0)

inline static constexpr unsigned int KLGJDILNNDH___c_TypeDefinitionIndex = 28775;

	class KLGJDILNNDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLGJDILNNDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGJDILNNDH___C_CTOR_OFFSET))(this);
		}

		::KLGJDILNNDH* __cctor_b__73_0()
		{
			return ((::KLGJDILNNDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGJDILNNDH___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
