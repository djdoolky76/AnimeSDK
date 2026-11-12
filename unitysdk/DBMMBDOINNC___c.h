#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMMBDOINNC;
namespace System { class Object; }

#define DBMMBDOINNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F43B6C0)
#define DBMMBDOINNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F43B700)
#define DBMMBDOINNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F43B710)

inline static constexpr unsigned int DBMMBDOINNC___c_TypeDefinitionIndex = 34967;

	class DBMMBDOINNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24AD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMMBDOINNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC___C_CTOR_OFFSET))(this);
		}

		::DBMMBDOINNC* __cctor_b__23_0()
		{
			return ((::DBMMBDOINNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMMBDOINNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
