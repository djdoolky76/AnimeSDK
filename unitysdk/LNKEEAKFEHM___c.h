#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNKEEAKFEHM;
namespace System { class Object; }

#define LNKEEAKFEHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E988370)
#define LNKEEAKFEHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9883B0)
#define LNKEEAKFEHM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9883C0)

inline static constexpr unsigned int LNKEEAKFEHM___c_TypeDefinitionIndex = 32945;

	class LNKEEAKFEHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x404E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNKEEAKFEHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM___C_CTOR_OFFSET))(this);
		}

		::LNKEEAKFEHM* __cctor_b__18_0()
		{
			return ((::LNKEEAKFEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKEEAKFEHM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
