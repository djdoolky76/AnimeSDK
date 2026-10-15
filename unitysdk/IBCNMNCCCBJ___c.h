#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCNMNCCCBJ;
namespace System { class Object; }

#define IBCNMNCCCBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3DC0)
#define IBCNMNCCCBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E3E00)
#define IBCNMNCCCBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5E3E10)

inline static constexpr unsigned int IBCNMNCCCBJ___c_TypeDefinitionIndex = 26964;

	class IBCNMNCCCBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCNMNCCCBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ___C_CTOR_OFFSET))(this);
		}

		::IBCNMNCCCBJ* __cctor_b__28_0()
		{
			return ((::IBCNMNCCCBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCNMNCCCBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
