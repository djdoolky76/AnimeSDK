#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOBIMJMLIF;
namespace System { class Object; }

#define FCOBIMJMLIF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8AFA00)
#define FCOBIMJMLIF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8AFA40)
#define FCOBIMJMLIF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8AFA50)

inline static constexpr unsigned int FCOBIMJMLIF___c_TypeDefinitionIndex = 30722;

	class FCOBIMJMLIF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCOBIMJMLIF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF___C_CTOR_OFFSET))(this);
		}

		::FCOBIMJMLIF* __cctor_b__28_0()
		{
			return ((::FCOBIMJMLIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCOBIMJMLIF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
