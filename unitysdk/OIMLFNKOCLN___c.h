#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIMLFNKOCLN;
namespace System { class Object; }

#define OIMLFNKOCLN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE46FA0)
#define OIMLFNKOCLN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE46FD0)
#define OIMLFNKOCLN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE46FE0)

inline static constexpr unsigned int OIMLFNKOCLN___c_TypeDefinitionIndex = 34087;

	class OIMLFNKOCLN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C_CTOR_OFFSET))(this);
		}

		::OIMLFNKOCLN* __cctor_b__18_0()
		{
			return ((::OIMLFNKOCLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMLFNKOCLN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
