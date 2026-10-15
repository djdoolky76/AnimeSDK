#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHMAJOCINCF;
namespace System { class Object; }

#define BHMAJOCINCF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCCC50)
#define BHMAJOCINCF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDCCC90)
#define BHMAJOCINCF___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1DDCCCA0)

inline static constexpr unsigned int BHMAJOCINCF___c_TypeDefinitionIndex = 30678;

	class BHMAJOCINCF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56C90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHMAJOCINCF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMAJOCINCF___C_CTOR_OFFSET))(this);
		}

		::BHMAJOCINCF* __cctor_b__73_0()
		{
			return ((::BHMAJOCINCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHMAJOCINCF___C___CCTOR_B__73_0_OFFSET))(this);
		}

	};
