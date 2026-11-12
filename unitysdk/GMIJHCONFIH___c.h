#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIJHCONFIH;
namespace System { class Object; }

#define GMIJHCONFIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5E20)
#define GMIJHCONFIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5E50)
#define GMIJHCONFIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F7E5E60)

inline static constexpr unsigned int GMIJHCONFIH___c_TypeDefinitionIndex = 33788;

	class GMIJHCONFIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIJHCONFIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH___C_CTOR_OFFSET))(this);
		}

		::GMIJHCONFIH* __cctor_b__23_0()
		{
			return ((::GMIJHCONFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
