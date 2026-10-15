#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCBHDOKFNF;
namespace System { class Object; }

#define KOCBHDOKFNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E880DF0)
#define KOCBHDOKFNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E880E30)
#define KOCBHDOKFNF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E880E40)

inline static constexpr unsigned int KOCBHDOKFNF___c_TypeDefinitionIndex = 27722;

	class KOCBHDOKFNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCBHDOKFNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF___C_CTOR_OFFSET))(this);
		}

		::KOCBHDOKFNF* __cctor_b__23_0()
		{
			return ((::KOCBHDOKFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
