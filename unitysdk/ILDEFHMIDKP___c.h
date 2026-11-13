#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDEFHMIDKP;
namespace System { class Object; }

#define ILDEFHMIDKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206B0D00)
#define ILDEFHMIDKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206B0D40)
#define ILDEFHMIDKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x206B0D50)

inline static constexpr unsigned int ILDEFHMIDKP___c_TypeDefinitionIndex = 30000;

	class ILDEFHMIDKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILDEFHMIDKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP___C_CTOR_OFFSET))(this);
		}

		::ILDEFHMIDKP* __cctor_b__23_0()
		{
			return ((::ILDEFHMIDKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDEFHMIDKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
