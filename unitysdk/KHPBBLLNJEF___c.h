#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHPBBLLNJEF;
namespace System { class Object; }

#define KHPBBLLNJEF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB6A230)
#define KHPBBLLNJEF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6A270)
#define KHPBBLLNJEF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB6A280)

inline static constexpr unsigned int KHPBBLLNJEF___c_TypeDefinitionIndex = 30619;

	class KHPBBLLNJEF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPBBLLNJEF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF___C_CTOR_OFFSET))(this);
		}

		::KHPBBLLNJEF* __cctor_b__23_0()
		{
			return ((::KHPBBLLNJEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHPBBLLNJEF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
