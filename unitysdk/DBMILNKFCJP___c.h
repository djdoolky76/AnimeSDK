#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBMILNKFCJP;
namespace System { class Object; }

#define DBMILNKFCJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202B7730)
#define DBMILNKFCJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202B7770)
#define DBMILNKFCJP___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x202B7780)

inline static constexpr unsigned int DBMILNKFCJP___c_TypeDefinitionIndex = 31311;

	class DBMILNKFCJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DD40);
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
