#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBFCKPFCNBD;
namespace System { class Object; }

#define DBFCKPFCNBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202AF270)
#define DBFCKPFCNBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202AF2B0)
#define DBFCKPFCNBD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202AF2C0)

inline static constexpr unsigned int DBFCKPFCNBD___c_TypeDefinitionIndex = 26886;

	class DBFCKPFCNBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CB50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBFCKPFCNBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD___C_CTOR_OFFSET))(this);
		}

		::DBFCKPFCNBD* __cctor_b__28_0()
		{
			return ((::DBFCKPFCNBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFCKPFCNBD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
