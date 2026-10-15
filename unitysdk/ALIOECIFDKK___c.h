#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALIOECIFDKK;
namespace System { class Object; }

#define ALIOECIFDKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50F610)
#define ALIOECIFDKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50F650)
#define ALIOECIFDKK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E50F660)

inline static constexpr unsigned int ALIOECIFDKK___c_TypeDefinitionIndex = 26856;

	class ALIOECIFDKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALIOECIFDKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK___C_CTOR_OFFSET))(this);
		}

		::ALIOECIFDKK* __cctor_b__28_0()
		{
			return ((::ALIOECIFDKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALIOECIFDKK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
