#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Tuple; }
namespace System { template <typename T> class Comparison_1; }

#define HJKGHIFLLAO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15D2B9B0)
#define HJKGHIFLLAO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2B9F0)
#define HJKGHIFLLAO___C__INITTEMPDATA_B__17_0_OFFSET UNITYSDK_OFFSET(0x15D2BA00)

	class HJKGHIFLLAO___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple*>** StaticGet___9__17_0()
		{
			return (::System::Comparison_1<::System::Tuple*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21310);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x21318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _InitTempData_b__17_0(::System::Tuple* a1, ::System::Tuple* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple*, ::System::Tuple*))((::PBYTE)hIl2Cpp + HJKGHIFLLAO___C__INITTEMPDATA_B__17_0_OFFSET))(this, a1, a2);
		}

	};
