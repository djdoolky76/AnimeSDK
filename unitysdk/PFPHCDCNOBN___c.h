#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PFPHCDCNOBN;
namespace System { class Object; }

#define PFPHCDCNOBN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A550)
#define PFPHCDCNOBN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2A590)
#define PFPHCDCNOBN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF2A5A0)

inline static constexpr unsigned int PFPHCDCNOBN___c_TypeDefinitionIndex = 25057;

	class PFPHCDCNOBN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFPHCDCNOBN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN___C_CTOR_OFFSET))(this);
		}

		::PFPHCDCNOBN* __cctor_b__28_0()
		{
			return ((::PFPHCDCNOBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFPHCDCNOBN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
