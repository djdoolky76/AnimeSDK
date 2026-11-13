#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGFMHDPLLEC;
namespace System { class Object; }

#define NGFMHDPLLEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x203FE180)
#define NGFMHDPLLEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x203FE1C0)
#define NGFMHDPLLEC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x203FE1D0)

inline static constexpr unsigned int NGFMHDPLLEC___c_TypeDefinitionIndex = 35177;

	class NGFMHDPLLEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x602F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGFMHDPLLEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC___C_CTOR_OFFSET))(this);
		}

		::NGFMHDPLLEC* __cctor_b__33_0()
		{
			return ((::NGFMHDPLLEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGFMHDPLLEC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
