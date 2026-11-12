#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAKNKCAOHON;
namespace System { class Object; }

#define FAKNKCAOHON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F60EAD0)
#define FAKNKCAOHON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F60EB10)
#define FAKNKCAOHON___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F60EB20)

inline static constexpr unsigned int FAKNKCAOHON___c_TypeDefinitionIndex = 27177;

	class FAKNKCAOHON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x559C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKNKCAOHON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKNKCAOHON___C_CTOR_OFFSET))(this);
		}

		::FAKNKCAOHON* __cctor_b__23_0()
		{
			return ((::FAKNKCAOHON*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKNKCAOHON___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
