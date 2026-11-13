#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOIONLDJGJI;
namespace System { class Object; }

#define MOIONLDJGJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF15B00)
#define MOIONLDJGJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF15B40)
#define MOIONLDJGJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FF15B50)

inline static constexpr unsigned int MOIONLDJGJI___c_TypeDefinitionIndex = 30151;

	class MOIONLDJGJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x545B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOIONLDJGJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI___C_CTOR_OFFSET))(this);
		}

		::MOIONLDJGJI* __cctor_b__28_0()
		{
			return ((::MOIONLDJGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOIONLDJGJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
