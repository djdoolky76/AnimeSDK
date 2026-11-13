#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCMIMKJHK;
namespace System { class Object; }

#define CEDCMIMKJHK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C7360)
#define CEDCMIMKJHK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204C7390)
#define CEDCMIMKJHK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204C73A0)

inline static constexpr unsigned int CEDCMIMKJHK___c_TypeDefinitionIndex = 33147;

	class CEDCMIMKJHK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62B00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCMIMKJHK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK___C_CTOR_OFFSET))(this);
		}

		::CEDCMIMKJHK* __cctor_b__28_0()
		{
			return ((::CEDCMIMKJHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCMIMKJHK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
