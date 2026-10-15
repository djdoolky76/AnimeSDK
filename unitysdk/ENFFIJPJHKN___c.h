#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class JJFDJLHPJCD;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ENFFIJPJHKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1559F8C0)
#define ENFFIJPJHKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1559F900)
#define ENFFIJPJHKN___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1559F910)

inline static constexpr unsigned int ENFFIJPJHKN___c_TypeDefinitionIndex = 74910;

	class ENFFIJPJHKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x405D0);
		}

		static ::System::Func_2<::JJFDJLHPJCD*, ::RPG::Client::TextID>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::JJFDJLHPJCD*, ::RPG::Client::TextID>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x405D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENFFIJPJHKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENFFIJPJHKN___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID _Create_b__1_0(::JJFDJLHPJCD* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::JJFDJLHPJCD*))((::PBYTE)hIl2Cpp + ENFFIJPJHKN___C__CREATE_B__1_0_OFFSET))(this, a1);
		}

	};
