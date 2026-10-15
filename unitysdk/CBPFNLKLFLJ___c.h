#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
#include "unitysdk/ICFEIEJDMIB.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CBPFNLKLFLJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCE7860)
#define CBPFNLKLFLJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCE78A0)
#define CBPFNLKLFLJ___C__CREATE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1DCE78B0)

inline static constexpr unsigned int CBPFNLKLFLJ___c_TypeDefinitionIndex = 6498;

	class CBPFNLKLFLJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FA60);
		}

		static ::System::Func_2<::ICFEIEJDMIB, ::DGEPOBDMLDJ>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::ICFEIEJDMIB, ::DGEPOBDMLDJ>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FA68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBPFNLKLFLJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ___C_CTOR_OFFSET))(this);
		}

		::DGEPOBDMLDJ _Create_b__11_0(::ICFEIEJDMIB a1)
		{
			return ((::DGEPOBDMLDJ(*)(::PVOID, ::ICFEIEJDMIB))((::PBYTE)hIl2Cpp + CBPFNLKLFLJ___C__CREATE_B__11_0_OFFSET))(this, a1);
		}

	};
