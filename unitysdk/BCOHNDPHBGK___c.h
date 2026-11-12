#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCOHNDPHBGK;
namespace System { class Object; }

#define BCOHNDPHBGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBD5C70)
#define BCOHNDPHBGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBD5CB0)
#define BCOHNDPHBGK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FBD5CC0)

inline static constexpr unsigned int BCOHNDPHBGK___c_TypeDefinitionIndex = 27283;

	class BCOHNDPHBGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCOHNDPHBGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK___C_CTOR_OFFSET))(this);
		}

		::BCOHNDPHBGK* __cctor_b__23_0()
		{
			return ((::BCOHNDPHBGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCOHNDPHBGK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
