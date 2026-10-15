#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEIBJEPHONE;
namespace System { class Object; }

#define LEIBJEPHONE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E931E50)
#define LEIBJEPHONE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E931E90)
#define LEIBJEPHONE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E931EA0)

inline static constexpr unsigned int LEIBJEPHONE___c_TypeDefinitionIndex = 31931;

	class LEIBJEPHONE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEIBJEPHONE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE___C_CTOR_OFFSET))(this);
		}

		::LEIBJEPHONE* __cctor_b__28_0()
		{
			return ((::LEIBJEPHONE*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEIBJEPHONE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
