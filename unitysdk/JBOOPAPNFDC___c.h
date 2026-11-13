#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOOPAPNFDC;
namespace System { class Object; }

#define JBOOPAPNFDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF012A0)
#define JBOOPAPNFDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF012E0)
#define JBOOPAPNFDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FF012F0)

inline static constexpr unsigned int JBOOPAPNFDC___c_TypeDefinitionIndex = 30177;

	class JBOOPAPNFDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x587A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C_CTOR_OFFSET))(this);
		}

		::JBOOPAPNFDC* __cctor_b__28_0()
		{
			return ((::JBOOPAPNFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
