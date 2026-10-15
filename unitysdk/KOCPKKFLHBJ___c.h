#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOCPKKFLHBJ;
namespace System { class Object; }

#define KOCPKKFLHBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8818F0)
#define KOCPKKFLHBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E881930)
#define KOCPKKFLHBJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E881940)

inline static constexpr unsigned int KOCPKKFLHBJ___c_TypeDefinitionIndex = 30250;

	class KOCPKKFLHBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x212B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCPKKFLHBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ___C_CTOR_OFFSET))(this);
		}

		::KOCPKKFLHBJ* __cctor_b__28_0()
		{
			return ((::KOCPKKFLHBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCPKKFLHBJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
