#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGIJFNAFLC;
namespace System { class Object; }

#define IPGIJFNAFLC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F68B830)
#define IPGIJFNAFLC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F68B870)
#define IPGIJFNAFLC___C___CCTOR_B__88_0_OFFSET UNITYSDK_OFFSET(0x1F68B880)

inline static constexpr unsigned int IPGIJFNAFLC___c_TypeDefinitionIndex = 29331;

	class IPGIJFNAFLC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54450);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGIJFNAFLC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIJFNAFLC___C_CTOR_OFFSET))(this);
		}

		::IPGIJFNAFLC* __cctor_b__88_0()
		{
			return ((::IPGIJFNAFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGIJFNAFLC___C___CCTOR_B__88_0_OFFSET))(this);
		}

	};
