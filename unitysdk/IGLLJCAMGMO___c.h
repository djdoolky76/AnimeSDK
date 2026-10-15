#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGLLJCAMGMO;
namespace System { class Object; }

#define IGLLJCAMGMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6243C0)
#define IGLLJCAMGMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E624400)
#define IGLLJCAMGMO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E624410)

inline static constexpr unsigned int IGLLJCAMGMO___c_TypeDefinitionIndex = 26811;

	class IGLLJCAMGMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BEB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGLLJCAMGMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO___C_CTOR_OFFSET))(this);
		}

		::IGLLJCAMGMO* __cctor_b__28_0()
		{
			return ((::IGLLJCAMGMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGLLJCAMGMO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
