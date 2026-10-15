#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPENACKJJE;
namespace System { class Object; }

#define CLPENACKJJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE6C0)
#define CLPENACKJJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FE700)
#define CLPENACKJJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0FE710)

inline static constexpr unsigned int CLPENACKJJE___c_TypeDefinitionIndex = 25353;

	class CLPENACKJJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D9C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLPENACKJJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE___C_CTOR_OFFSET))(this);
		}

		::CLPENACKJJE* __cctor_b__23_0()
		{
			return ((::CLPENACKJJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLPENACKJJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
