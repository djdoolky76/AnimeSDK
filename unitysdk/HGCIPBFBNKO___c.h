#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIPBFBNKO;
namespace System { class Object; }

#define HGCIPBFBNKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5479B0)
#define HGCIPBFBNKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5479E0)
#define HGCIPBFBNKO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5479F0)

inline static constexpr unsigned int HGCIPBFBNKO___c_TypeDefinitionIndex = 27039;

	class HGCIPBFBNKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30A00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCIPBFBNKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO___C_CTOR_OFFSET))(this);
		}

		::HGCIPBFBNKO* __cctor_b__43_0()
		{
			return ((::HGCIPBFBNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
