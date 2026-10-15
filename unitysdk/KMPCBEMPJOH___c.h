#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NABFBNBJNKK;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KMPCBEMPJOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB56EED0)
#define KMPCBEMPJOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB56EF10)
#define KMPCBEMPJOH___C__GET_STATUSTEXT_B__10_0_OFFSET UNITYSDK_OFFSET(0xB56EF20)
#define KMPCBEMPJOH___C___CTOR_B__17_0_OFFSET UNITYSDK_OFFSET(0xB56EF60)

inline static constexpr unsigned int KMPCBEMPJOH___c_TypeDefinitionIndex = 73475;

	class KMPCBEMPJOH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Boolean, ::System::String*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::String*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E160);
		}

		static ::System::Func_2<::NABFBNBJNKK*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::NABFBNBJNKK*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E168);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KMPCBEMPJOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPCBEMPJOH___C_CTOR_OFFSET))(this);
		}

		::System::String* _get_StatusText_b__10_0(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMPCBEMPJOH___C__GET_STATUSTEXT_B__10_0_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__17_0(::NABFBNBJNKK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NABFBNBJNKK*))((::PBYTE)hIl2Cpp + KMPCBEMPJOH___C___CTOR_B__17_0_OFFSET))(this, a1);
		}

	};
