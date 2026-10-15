#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEFIDLICEMH;
namespace System { class Object; }

#define LEFIDLICEMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8FBB70)
#define LEFIDLICEMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FBBB0)
#define LEFIDLICEMH___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8FBBC0)

inline static constexpr unsigned int LEFIDLICEMH___c_TypeDefinitionIndex = 27958;

	class LEFIDLICEMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEFIDLICEMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH___C_CTOR_OFFSET))(this);
		}

		::LEFIDLICEMH* __cctor_b__38_0()
		{
			return ((::LEFIDLICEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEFIDLICEMH___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
