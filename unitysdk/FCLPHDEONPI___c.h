#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define FCLPHDEONPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6155B0)
#define FCLPHDEONPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6155F0)
#define FCLPHDEONPI___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET UNITYSDK_OFFSET(0x1C615600)

inline static constexpr unsigned int FCLPHDEONPI___c_TypeDefinitionIndex = 36283;

	class FCLPHDEONPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B3C0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B3C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLPHDEONPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsDiceContentHasNOfAKind_b__7_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + FCLPHDEONPI___C__ISDICECONTENTHASNOFAKIND_B__7_0_OFFSET))(this, a1);
		}

	};
