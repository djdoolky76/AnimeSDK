#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMOOBICJGGE;
namespace System { class Object; }

#define IMOOBICJGGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206C1A10)
#define IMOOBICJGGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206C1A50)
#define IMOOBICJGGE___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206C1A60)

inline static constexpr unsigned int IMOOBICJGGE___c_TypeDefinitionIndex = 32512;

	class IMOOBICJGGE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4EF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMOOBICJGGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE___C_CTOR_OFFSET))(this);
		}

		::IMOOBICJGGE* __cctor_b__33_0()
		{
			return ((::IMOOBICJGGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMOOBICJGGE___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
