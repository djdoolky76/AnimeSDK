#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCNLJNELKEO;
namespace System { class Object; }

#define JCNLJNELKEO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA12C00)
#define JCNLJNELKEO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA12C30)
#define JCNLJNELKEO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FA12C40)

inline static constexpr unsigned int JCNLJNELKEO___c_TypeDefinitionIndex = 32198;

	class JCNLJNELKEO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCNLJNELKEO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO___C_CTOR_OFFSET))(this);
		}

		::JCNLJNELKEO* __cctor_b__23_0()
		{
			return ((::JCNLJNELKEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNLJNELKEO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
