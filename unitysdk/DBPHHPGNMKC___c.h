#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBPHHPGNMKC;
namespace System { class Object; }

#define DBPHHPGNMKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E164E60)
#define DBPHHPGNMKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E164EA0)
#define DBPHHPGNMKC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E164EB0)

inline static constexpr unsigned int DBPHHPGNMKC___c_TypeDefinitionIndex = 31170;

	class DBPHHPGNMKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x263A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBPHHPGNMKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC___C_CTOR_OFFSET))(this);
		}

		::DBPHHPGNMKC* __cctor_b__23_0()
		{
			return ((::DBPHHPGNMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBPHHPGNMKC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
