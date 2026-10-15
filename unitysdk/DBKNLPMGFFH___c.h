#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBKNLPMGFFH;
namespace System { class Object; }

#define DBKNLPMGFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E132490)
#define DBKNLPMGFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1324D0)
#define DBKNLPMGFFH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1324E0)

inline static constexpr unsigned int DBKNLPMGFFH___c_TypeDefinitionIndex = 28346;

	class DBKNLPMGFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBKNLPMGFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH___C_CTOR_OFFSET))(this);
		}

		::DBKNLPMGFFH* __cctor_b__23_0()
		{
			return ((::DBKNLPMGFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBKNLPMGFFH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
