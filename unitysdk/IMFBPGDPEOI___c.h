#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMFBPGDPEOI;
namespace System { class Object; }

#define IMFBPGDPEOI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206BD3F0)
#define IMFBPGDPEOI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206BD430)
#define IMFBPGDPEOI___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x206BD440)

inline static constexpr unsigned int IMFBPGDPEOI___c_TypeDefinitionIndex = 27127;

	class IMFBPGDPEOI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DF20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMFBPGDPEOI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI___C_CTOR_OFFSET))(this);
		}

		::IMFBPGDPEOI* __cctor_b__43_0()
		{
			return ((::IMFBPGDPEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFBPGDPEOI___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
