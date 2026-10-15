#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNBOCPOOAEM;
namespace System { class Object; }

#define KNBOCPOOAEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8A00A0)
#define KNBOCPOOAEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A00E0)
#define KNBOCPOOAEM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E8A00F0)

inline static constexpr unsigned int KNBOCPOOAEM___c_TypeDefinitionIndex = 32707;

	class KNBOCPOOAEM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x234C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBOCPOOAEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM___C_CTOR_OFFSET))(this);
		}

		::KNBOCPOOAEM* __cctor_b__43_0()
		{
			return ((::KNBOCPOOAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
