#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NINEEGGAMBC;
namespace System { class Object; }

#define NINEEGGAMBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB0AA10)
#define NINEEGGAMBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB0AA50)
#define NINEEGGAMBC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB0AA60)

inline static constexpr unsigned int NINEEGGAMBC___c_TypeDefinitionIndex = 31979;

	class NINEEGGAMBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68580);
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
