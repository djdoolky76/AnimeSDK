#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGBIFFCBKEH;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define LAMOJOPDBDI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6EF930)
#define LAMOJOPDBDI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EF970)
#define LAMOJOPDBDI___C__SORTEXAM_B__0_0_OFFSET UNITYSDK_OFFSET(0x1D6EF980)
#define LAMOJOPDBDI___C__SORTEXAM_B__0_1_OFFSET UNITYSDK_OFFSET(0x1D6EF9A0)
#define LAMOJOPDBDI___C__SORTEXAM_B__0_2_OFFSET UNITYSDK_OFFSET(0x1D6EF9C0)

inline static constexpr unsigned int LAMOJOPDBDI___c_TypeDefinitionIndex = 42873;

	class LAMOJOPDBDI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11290);
		}

		static ::System::Func_2<::EGBIFFCBKEH*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::EGBIFFCBKEH*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11298);
		}

		static ::System::Func_2<::EGBIFFCBKEH*, ::System::Boolean>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::EGBIFFCBKEH*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x112A0);
		}

		static ::System::Func_2<::EGBIFFCBKEH*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::EGBIFFCBKEH*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x112A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAMOJOPDBDI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAMOJOPDBDI___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortExam_b__0_0(::EGBIFFCBKEH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EGBIFFCBKEH*))((::PBYTE)hIl2Cpp + LAMOJOPDBDI___C__SORTEXAM_B__0_0_OFFSET))(this, a1);
		}

		::System::Boolean _SortExam_b__0_1(::EGBIFFCBKEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGBIFFCBKEH*))((::PBYTE)hIl2Cpp + LAMOJOPDBDI___C__SORTEXAM_B__0_1_OFFSET))(this, a1);
		}

		::System::UInt32 _SortExam_b__0_2(::EGBIFFCBKEH* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::EGBIFFCBKEH*))((::PBYTE)hIl2Cpp + LAMOJOPDBDI___C__SORTEXAM_B__0_2_OFFSET))(this, a1);
		}

	};
