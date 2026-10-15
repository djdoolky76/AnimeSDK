#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBDOIJGPJJG;
namespace System { class Object; }

#define DBDOIJGPJJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E12ADF0)
#define DBDOIJGPJJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E12AE30)
#define DBDOIJGPJJG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E12AE40)

inline static constexpr unsigned int DBDOIJGPJJG___c_TypeDefinitionIndex = 27973;

	class DBDOIJGPJJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x22520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBDOIJGPJJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG___C_CTOR_OFFSET))(this);
		}

		::DBDOIJGPJJG* __cctor_b__28_0()
		{
			return ((::DBDOIJGPJJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBDOIJGPJJG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
