#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMDKLICDPKK;
namespace System { class Object; }

#define EMDKLICDPKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206D6210)
#define EMDKLICDPKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206D6250)
#define EMDKLICDPKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x206D6260)

inline static constexpr unsigned int EMDKLICDPKK___c_TypeDefinitionIndex = 31574;

	class EMDKLICDPKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMDKLICDPKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK___C_CTOR_OFFSET))(this);
		}

		::EMDKLICDPKK* __cctor_b__28_0()
		{
			return ((::EMDKLICDPKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDKLICDPKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
