#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AINFNFIDGFF;
namespace System { class Object; }

#define AINFNFIDGFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E254500)
#define AINFNFIDGFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E254540)
#define AINFNFIDGFF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E254550)

inline static constexpr unsigned int AINFNFIDGFF___c_TypeDefinitionIndex = 29373;

	class AINFNFIDGFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3BD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AINFNFIDGFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFNFIDGFF___C_CTOR_OFFSET))(this);
		}

		::AINFNFIDGFF* __cctor_b__33_0()
		{
			return ((::AINFNFIDGFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AINFNFIDGFF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
