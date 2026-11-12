#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEAHIAKBGMJ;
namespace System { class Object; }

#define DEAHIAKBGMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4675F0)
#define DEAHIAKBGMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F467630)
#define DEAHIAKBGMJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F467640)

inline static constexpr unsigned int DEAHIAKBGMJ___c_TypeDefinitionIndex = 36056;

	class DEAHIAKBGMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEAHIAKBGMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ___C_CTOR_OFFSET))(this);
		}

		::DEAHIAKBGMJ* __cctor_b__28_0()
		{
			return ((::DEAHIAKBGMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEAHIAKBGMJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
