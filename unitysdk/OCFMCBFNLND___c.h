#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KAKADGHNMFK;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OCFMCBFNLND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD60950)
#define OCFMCBFNLND___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD60990)
#define OCFMCBFNLND___C__SELECTENTITYIDS_B__4_0_OFFSET UNITYSDK_OFFSET(0xBD609A0)

	class OCFMCBFNLND___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::KAKADGHNMFK*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::KAKADGHNMFK*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E820);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCFMCBFNLND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFMCBFNLND___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectEntityIDs_b__4_0(::KAKADGHNMFK* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::KAKADGHNMFK*))((::PBYTE)hIl2Cpp + OCFMCBFNLND___C__SELECTENTITYIDS_B__4_0_OFFSET))(this, a1);
		}

	};
