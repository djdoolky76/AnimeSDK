#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOKANMFKNMM;
namespace System { class Object; }

#define NOKANMFKNMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8D150)
#define NOKANMFKNMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8D190)
#define NOKANMFKNMM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EB8D1A0)

inline static constexpr unsigned int NOKANMFKNMM___c_TypeDefinitionIndex = 31103;

	class NOKANMFKNMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOKANMFKNMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKANMFKNMM___C_CTOR_OFFSET))(this);
		}

		::NOKANMFKNMM* __cctor_b__23_0()
		{
			return ((::NOKANMFKNMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKANMFKNMM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
