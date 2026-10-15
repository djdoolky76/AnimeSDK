#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace TMPro { class KerningPair; }

#define TMPRO_KERNINGTABLE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B8B30)
#define TMPRO_KERNINGTABLE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B8B70)
#define TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1F2B8B80)
#define TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_1_OFFSET UNITYSDK_OFFSET(0x1F2B8BA0)

namespace TMPro
{
	inline static constexpr unsigned int KerningTable___c_TypeDefinitionIndex = 44580;

	class KerningTable___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x54510);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x54518);
		}

		static ::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::TMPro::KerningPair*, ::System::UInt32>**)UnitySDK::FromName("TMPro", "<>c")->GetStaticField(0x54520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _SortKerningPairs_b__7_0(::TMPro::KerningPair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_0_OFFSET))(this, a1);
		}

		::System::UInt32 _SortKerningPairs_b__7_1(::TMPro::KerningPair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::TMPro::KerningPair*))((::PBYTE)hIl2Cpp + TMPRO_KERNINGTABLE___C__SORTKERNINGPAIRS_B__7_1_OFFSET))(this, a1);
		}

	};
}
