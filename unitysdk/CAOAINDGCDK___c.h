#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAOAINDGCDK;
namespace System { class Object; }

#define CAOAINDGCDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0334B0)
#define CAOAINDGCDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0334F0)
#define CAOAINDGCDK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E033500)

inline static constexpr unsigned int CAOAINDGCDK___c_TypeDefinitionIndex = 31208;

	class CAOAINDGCDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2F20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAOAINDGCDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK___C_CTOR_OFFSET))(this);
		}

		::CAOAINDGCDK* __cctor_b__28_0()
		{
			return ((::CAOAINDGCDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOAINDGCDK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
