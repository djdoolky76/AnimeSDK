#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMENGFFDCNB;
namespace System { class Object; }

#define BMENGFFDCNB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC73340)
#define BMENGFFDCNB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC73370)
#define BMENGFFDCNB___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC73380)

inline static constexpr unsigned int BMENGFFDCNB___c_TypeDefinitionIndex = 33254;

	class BMENGFFDCNB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMENGFFDCNB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMENGFFDCNB___C_CTOR_OFFSET))(this);
		}

		::BMENGFFDCNB* __cctor_b__28_0()
		{
			return ((::BMENGFFDCNB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMENGFFDCNB___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
