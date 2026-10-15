#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1_075EFA8CFBE0DE9A.h"
#include "unitysdk/System/Span_1_0C0D59FF8BC7380B.h"

#define JEGHEKIEBDD_AHMCGDLMMLM_OFFSET UNITYSDK_OFFSET(0x1661FFD0)
#define JEGHEKIEBDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x166206C0)
#define JEGHEKIEBDD_JLPDLBCBJNN_OFFSET UNITYSDK_OFFSET(0x16620350)

	class JEGHEKIEBDD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt16>** StaticGet_EFKAFBDADME()
		{
			return (::Il2CppArray<::System::UInt16>**)UnitySDK::FromName("", "JEGHEKIEBDD")->GetStaticField(0x2310);
		}

		// static const ::System::Object OFPBCBONGCP; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGHEKIEBDD_CCTOR_OFFSET))();
		}

		static ::System::UInt16 AHMCGDLMMLM(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte> a1)
		{
			return ((::System::UInt16(*)(::System::ReadOnlySpan_1_075EFA8CFBE0DE9A<::System::Byte>))((::PBYTE)hIl2Cpp + JEGHEKIEBDD_AHMCGDLMMLM_OFFSET))(a1);
		}

		static ::System::Void JLPDLBCBJNN(::System::Int32 a1, ::System::UInt16 a2, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte> a3)
		{
			return ((::System::Void(*)(::System::Int32, ::System::UInt16, ::System::Span_1_0C0D59FF8BC7380B<::System::Byte>))((::PBYTE)hIl2Cpp + JEGHEKIEBDD_JLPDLBCBJNN_OFFSET))(a1, a2, a3);
		}

	};
