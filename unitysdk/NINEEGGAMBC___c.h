#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINEEGGAMBC;
namespace System { class Object; }

#define NINEEGGAMBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F020650)
#define NINEEGGAMBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F020690)
#define NINEEGGAMBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0206A0)

inline static constexpr unsigned int NINEEGGAMBC___c_TypeDefinitionIndex = 32892;

	class NINEEGGAMBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6D040);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NINEEGGAMBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC___C_CTOR_OFFSET))(this);
		}

		::NINEEGGAMBC* __cctor_b__23_0()
		{
			return ((::NINEEGGAMBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NINEEGGAMBC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
