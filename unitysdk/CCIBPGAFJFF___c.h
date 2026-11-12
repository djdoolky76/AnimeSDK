#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCIBPGAFJFF;
namespace System { class Object; }

#define CCIBPGAFJFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F33A780)
#define CCIBPGAFJFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F33A7C0)
#define CCIBPGAFJFF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F33A7D0)

inline static constexpr unsigned int CCIBPGAFJFF___c_TypeDefinitionIndex = 27233;

	class CCIBPGAFJFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCIBPGAFJFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF___C_CTOR_OFFSET))(this);
		}

		::CCIBPGAFJFF* __cctor_b__28_0()
		{
			return ((::CCIBPGAFJFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCIBPGAFJFF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
