#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHIBEKJIAMC;
namespace System { class Object; }

#define CHIBEKJIAMC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0C7230)
#define CHIBEKJIAMC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C7270)
#define CHIBEKJIAMC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0C7280)

inline static constexpr unsigned int CHIBEKJIAMC___c_TypeDefinitionIndex = 31369;

	class CHIBEKJIAMC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHIBEKJIAMC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC___C_CTOR_OFFSET))(this);
		}

		::CHIBEKJIAMC* __cctor_b__23_0()
		{
			return ((::CHIBEKJIAMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHIBEKJIAMC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
