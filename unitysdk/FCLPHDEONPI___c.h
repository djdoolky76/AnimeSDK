#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FCLPHDEONPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA9B860)
#define FCLPHDEONPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA9B8A0)
#define FCLPHDEONPI___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET UNITYSDK_OFFSET(0x1BA9B8B0)

inline static constexpr unsigned int FCLPHDEONPI___c_TypeDefinitionIndex = 37211;

	class FCLPHDEONPI___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6FD58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLPHDEONPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDiceContentHasNOfAKind_b__7_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET))(this, a1);
		}

	};
