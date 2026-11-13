#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIFPICHIDLJ;
namespace System { class Object; }

#define NIFPICHIDLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4A70)
#define NIFPICHIDLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC4AB0)
#define NIFPICHIDLJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EAC4AC0)

inline static constexpr unsigned int NIFPICHIDLJ___c_TypeDefinitionIndex = 26078;

	class NIFPICHIDLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x629C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFPICHIDLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ___C_CTOR_OFFSET))(this);
		}

		::NIFPICHIDLJ* __cctor_b__43_0()
		{
			return ((::NIFPICHIDLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIFPICHIDLJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
