#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDFEOFGBJBI;
namespace System { class Object; }

#define MDFEOFGBJBI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD4BED0)
#define MDFEOFGBJBI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD4BF10)
#define MDFEOFGBJBI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD4BF20)

inline static constexpr unsigned int MDFEOFGBJBI___c_TypeDefinitionIndex = 33648;

	class MDFEOFGBJBI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4ACE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDFEOFGBJBI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI___C_CTOR_OFFSET))(this);
		}

		::MDFEOFGBJBI* __cctor_b__23_0()
		{
			return ((::MDFEOFGBJBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFEOFGBJBI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
