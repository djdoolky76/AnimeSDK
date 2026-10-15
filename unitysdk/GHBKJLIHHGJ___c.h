#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBKJLIHHGJ;
namespace System { class Object; }

#define GHBKJLIHHGJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4847C0)
#define GHBKJLIHHGJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E484800)
#define GHBKJLIHHGJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E484810)

inline static constexpr unsigned int GHBKJLIHHGJ___c_TypeDefinitionIndex = 30327;

	class GHBKJLIHHGJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBKJLIHHGJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ___C_CTOR_OFFSET))(this);
		}

		::GHBKJLIHHGJ* __cctor_b__28_0()
		{
			return ((::GHBKJLIHHGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
