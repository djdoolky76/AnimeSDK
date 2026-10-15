#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKHHHPKFBN;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OMBOPIEDEJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBF1F180)
#define OMBOPIEDEJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F1C0)
#define OMBOPIEDEJG___C__GETLEVELGROUPSORDERED_B__4_0_OFFSET UNITYSDK_OFFSET(0xBF1F1D0)

	class OMBOPIEDEJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59090);
		}

		static ::System::Func_2<::CPKHHHPKFBN*, ::System::UInt32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::CPKHHHPKFBN*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59098);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMBOPIEDEJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBOPIEDEJG___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetLevelGroupsOrdered_b__4_0(::CPKHHHPKFBN* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::CPKHHHPKFBN*))((::PBYTE)hIl2Cpp + OMBOPIEDEJG___C__GETLEVELGROUPSORDERED_B__4_0_OFFSET))(this, a1);
		}

	};
