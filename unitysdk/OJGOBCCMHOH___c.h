#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJGOBCCMHOH;
namespace System { class Object; }

#define OJGOBCCMHOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE82A50)
#define OJGOBCCMHOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE82A90)
#define OJGOBCCMHOH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE82AA0)

inline static constexpr unsigned int OJGOBCCMHOH___c_TypeDefinitionIndex = 33214;

	class OJGOBCCMHOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F290);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGOBCCMHOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH___C_CTOR_OFFSET))(this);
		}

		::OJGOBCCMHOH* __cctor_b__23_0()
		{
			return ((::OJGOBCCMHOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGOBCCMHOH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
