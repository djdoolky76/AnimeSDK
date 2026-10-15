#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MIGHOPHLBMF;
namespace System { class Object; }

#define MIGHOPHLBMF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3C100)
#define MIGHOPHLBMF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3C140)
#define MIGHOPHLBMF___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA3C150)

inline static constexpr unsigned int MIGHOPHLBMF___c_TypeDefinitionIndex = 26851;

	class MIGHOPHLBMF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52C50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIGHOPHLBMF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF___C_CTOR_OFFSET))(this);
		}

		::MIGHOPHLBMF* __cctor_b__38_0()
		{
			return ((::MIGHOPHLBMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHOPHLBMF___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
