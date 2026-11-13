#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJBANFPPEFH;
namespace System { class Object; }

#define MJBANFPPEFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205BC900)
#define MJBANFPPEFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205BC930)
#define MJBANFPPEFH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x205BC940)

inline static constexpr unsigned int MJBANFPPEFH___c_TypeDefinitionIndex = 31844;

	class MJBANFPPEFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BD00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJBANFPPEFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH___C_CTOR_OFFSET))(this);
		}

		::MJBANFPPEFH* __cctor_b__33_0()
		{
			return ((::MJBANFPPEFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJBANFPPEFH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
