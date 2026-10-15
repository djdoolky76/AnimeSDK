#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMBECKPIIHH;
namespace System { class Object; }

#define GMBECKPIIHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49C220)
#define GMBECKPIIHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49C250)
#define GMBECKPIIHH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E49C260)

inline static constexpr unsigned int GMBECKPIIHH___c_TypeDefinitionIndex = 34922;

	class GMBECKPIIHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1DB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMBECKPIIHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH___C_CTOR_OFFSET))(this);
		}

		::GMBECKPIIHH* __cctor_b__33_0()
		{
			return ((::GMBECKPIIHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMBECKPIIHH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
