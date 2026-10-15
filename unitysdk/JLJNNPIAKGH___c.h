#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJNNPIAKGH;
namespace System { class Object; }

#define JLJNNPIAKGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E77D810)
#define JLJNNPIAKGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E77D850)
#define JLJNNPIAKGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E77D860)

inline static constexpr unsigned int JLJNNPIAKGH___c_TypeDefinitionIndex = 32957;

	class JLJNNPIAKGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6B8A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLJNNPIAKGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH___C_CTOR_OFFSET))(this);
		}

		::JLJNNPIAKGH* __cctor_b__28_0()
		{
			return ((::JLJNNPIAKGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLJNNPIAKGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
