#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMILNKFCJP;
namespace System { class Object; }

#define DBMILNKFCJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E161C60)
#define DBMILNKFCJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E161CA0)
#define DBMILNKFCJP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E161CB0)

inline static constexpr unsigned int DBMILNKFCJP___c_TypeDefinitionIndex = 30405;

	class DBMILNKFCJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x261E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBMILNKFCJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP___C_CTOR_OFFSET))(this);
		}

		::DBMILNKFCJP* __cctor_b__38_0()
		{
			return ((::DBMILNKFCJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMILNKFCJP___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
