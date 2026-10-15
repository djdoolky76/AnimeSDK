#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGIPBCJPFPG;
namespace System { class Object; }

#define NGIPBCJPFPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB13410)
#define NGIPBCJPFPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB13450)
#define NGIPBCJPFPG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB13460)

inline static constexpr unsigned int NGIPBCJPFPG___c_TypeDefinitionIndex = 29569;

	class NGIPBCJPFPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGIPBCJPFPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG___C_CTOR_OFFSET))(this);
		}

		::NGIPBCJPFPG* __cctor_b__28_0()
		{
			return ((::NGIPBCJPFPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGIPBCJPFPG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
