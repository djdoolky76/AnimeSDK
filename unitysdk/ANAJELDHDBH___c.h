#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANAJELDHDBH;
namespace System { class Object; }

#define ANAJELDHDBH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FAFB0)
#define ANAJELDHDBH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FAFF0)
#define ANAJELDHDBH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4FB000)

inline static constexpr unsigned int ANAJELDHDBH___c_TypeDefinitionIndex = 29971;

	class ANAJELDHDBH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANAJELDHDBH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH___C_CTOR_OFFSET))(this);
		}

		::ANAJELDHDBH* __cctor_b__28_0()
		{
			return ((::ANAJELDHDBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAJELDHDBH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
