#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPMLBOBKPI;
namespace System { class Object; }

#define KNPMLBOBKPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205A8440)
#define KNPMLBOBKPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205A8480)
#define KNPMLBOBKPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205A8490)

inline static constexpr unsigned int KNPMLBOBKPI___c_TypeDefinitionIndex = 34176;

	class KNPMLBOBKPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C_CTOR_OFFSET))(this);
		}

		::KNPMLBOBKPI* __cctor_b__23_0()
		{
			return ((::KNPMLBOBKPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPMLBOBKPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
