#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAIFDBLLGKK;
namespace System { class Object; }

#define FAIFDBLLGKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F60B1C0)
#define FAIFDBLLGKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F60B1F0)
#define FAIFDBLLGKK___C___CCTOR_B__60_0_OFFSET UNITYSDK_OFFSET(0x1F60B200)

inline static constexpr unsigned int FAIFDBLLGKK___c_TypeDefinitionIndex = 26176;

	class FAIFDBLLGKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x557C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAIFDBLLGKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIFDBLLGKK___C_CTOR_OFFSET))(this);
		}

		::FAIFDBLLGKK* __cctor_b__60_0()
		{
			return ((::FAIFDBLLGKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAIFDBLLGKK___C___CCTOR_B__60_0_OFFSET))(this);
		}

	};
